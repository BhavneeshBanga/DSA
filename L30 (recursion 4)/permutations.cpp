// leetcode 60
#include <iostream>
using namespace std;
void permutationss(string ans, string str){
    if(str == ""){
        cout<<ans<<endl;
        return;
    } 
    for (int i = 0 ; i<str.length() ; i++){
        char ch = str[i];
        string left = str.substr(0, i);
        string right = str.substr(i+1);
        permutationss(ans+ch, left + right);
    }
}
int main() {
    string str = "1234";
    permutationss("", str);
}


// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str = "";
//     int n = 3;
//     for(int i = 1 ; i<=n ; i++){
//         str += to_string(i);
//     }
//     cout<<str;
//     return 0;
// }