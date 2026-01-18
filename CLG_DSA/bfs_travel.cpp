#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    int node;
    int i = 0;
    queue<int>q;
    int visited[7] = {0, 0, 0, 0, 0, 0, 0};
    int a[7][7] = {
        {0, 1, 1, 1, 0, 0, 0},
        {1, 0, 1, 0, 0, 0, 0},
        {1, 1, 0, 1, 1, 0, 0},
        {1, 0, 1, 0, 1, 0, 0},
        {0, 0, 1, 1, 0, 1, 1},
        {0, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 1, 0, 0},
    }
    cout<<i;
    visited[i] = 1;
    q.push(i);
    while(q.size()>0){
        int node = q.front();
        q.pop();
        for(int j =  0 ; j<7 ; j++){
            
        }
    }
    return 0;
}