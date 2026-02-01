// palindrome using recursion
#include <iostream>
#include <string>
using namespace std;
bool ispalindrome(string str, int i, int j){
    if(i>j) return true;
    if(str[i]!=str[j]) return false;
    else return ispalindrome(str, i+1, j-1);
}

int main() {
    string str = "abcdcba";
    cout<<ispalindrome(str, 0, str.length()-1 );
    return 0;
}