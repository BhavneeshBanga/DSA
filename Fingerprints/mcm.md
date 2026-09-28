# Matrix Chain Multiplication (MCM)

## Problem

Given matrices:

```text
A1 = p[0] x p[1]
A2 = p[1] x p[2]
...
An = p[n - 1] x p[n]
```

Find the minimum number of scalar multiplications needed to multiply:

```text
A1 x A2 x ... x An
```

Matrix multiplication is associative, so the order of multiplication can be
changed, but the final result remains the same. Different parenthesizations
can have different costs.

## DP State

Let:

```text
dp[i][j] = minimum cost to multiply matrices Ai through Aj
```

The matrix `Ai` has dimensions `p[i - 1] x p[i]`.

## Base Case

A single matrix requires no multiplication:

```text
dp[i][i] = 0
```

If using the dimension-array indexing below, adjacent matrices are the first
valid intervals:

```text
dp[i][i + 1] = 0
```

## Recurrence

Try every possible split between `i` and `j`.

```text
dp[i][j] =
    min(
        dp[i][k] + dp[k][j] + p[i] * p[k] * p[j]
    )
```

where:

```text
i < k < j
```

The three terms represent:

1. Minimum cost to multiply the left part.
2. Minimum cost to multiply the right part.
3. Cost of multiplying the two resulting matrices.

## Bottom-Up Implementation

```cpp
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

int matrixChainMultiplication(const vector<int>& p) {
    int n = p.size();
    vector<vector<int>> dp(n, vector<int>(n, 0));

    // len is the distance between the first and last dimension index.
    // len = 2 represents two matrices: Ai x A(i+1).
    for (int len = 2; len < n; len++) {
        for (int i = 0; i + len < n; i++) {
            int j = i + len;
            dp[i][j] = INT_MAX;

            // Split between dimensions k - 1 and k.
            for (int k = i + 1; k < j; k++) {
                int cost = dp[i][k]
                         + dp[k][j]
                         + p[i] * p[k] * p[j];

                dp[i][j] = min(dp[i][j], cost);
            }
        }
    }

    return dp[0][n - 1];
}
```

## Example

For:

```text
p = [10, 20, 30]
```

There are two matrices:

```text
A1 = 10 x 20
A2 = 20 x 30
```

The cost is:

```text
10 * 20 * 30 = 6000
```

Therefore:

```text
dp[0][2] = 6000
```

## Complexity

```text
Time:  O(n^3)
Space: O(n^2)
```

## Important Revision Points

- `p.size()` is one greater than the number of matrices.
- Initialize every new interval with `INT_MAX`.
- Use `dp[i][k] + dp[k][j]`, not `dp[i][j] + dp[k][j]`.
- The multiplication cost is `p[i] * p[k] * p[j]`.
- The split index must satisfy `i < k < j`.
- A single matrix has cost `0`.
