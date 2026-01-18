// Different neighbouring chaaracter
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s;
//     cout<<"Enter string\n</>  ";
//     getline(cin, s);
//     cout<<s<<endl;
//     int count = 0;
//     for(int i = 0 ; s[i]!='\0' ; i++){
//         // cout<<s[i]<<" ";
//         if((s[i+1]!=s[i]) && (s[i+2] != s[i+1])){
//             count++;
//         }
//     }
//     cout<<count<<" ";
// }

// this one is correct
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s;
//     cout<<"Enter string\n</>  ";
//     cin>>s;
//     int n = s.length();
//     cout<<s<<endl;
//     int count = 0;
//     for(int i = 0 ; i<n ; i++){
//         if(n==0){
//             break;
//         }
//         if(n==2 && s[0]!=s[1]){
//             count = 1;
//             break;
//         }
//        if(i==0){
//             if(s[i]!=s[i+1]) count++;
//        }
//        else if(i==n-1){
//             if(s[i]!=s[i-1]) count++;
//        }
//        else if((s[i+1]!=s[i]) && (s[i-1] != s[i])){
//             count++;
//         }
//     }
//     cout<<count<<" ";
// }

// Soritng using in built func()
// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
//     string s;
//     cout<<"Enter string\n</>  ";
//     getline(cin,s);
//     sort(s.begin(), s.end());
//     cout<<s<<endl;
// }

//ANAGRAM
// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
//     string s;
//     cout<<"Enter string\n</>  ";
//     getline(cin,s);
//     sort(s.begin(), s.end());
//     // cout<<s<<endl;
//     //
//     string t;
//     cout<<"Enter string\n</>  ";
//     getline(cin,t);
//     sort(t.begin(), t.end());
//     // cout<<t<<endl;
//     //
//     if(s==t){
//         cout<<"Yes";
//     }
//     else cout<<"No";
// }

// highest frequency
// accha lga logic
// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
//     string s;
//     cout<<"Enter string\n</>  ";
//     getline(cin,s);
//     int n =  s.length();
//     //
//     int maax = 0;
//     for(int i = 0 ; i<n ; i++){
//         char ch = s[i];
//         int count = 1;
//         for(int j = i+1 ; j<n ; j++){
//             if(s[j]==s[i]) count++;
//         }
//         if(maax < count) maax = count;
//     }
//     for(int i = 0 ; i<n ; i++){
//         char ch = s[i];
//         int count = 1;
//         for(int j = i+1 ; j<n ; j++){
//             if(s[j]==s[i]) count++;
//         }
//         if(count==maax) {
//             cout<<ch<<" "<<maax<<endl;
//         }
//     }
// }

// Extra space ka use karke krenge
// #include<iostream>
// #include<string>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main(){
//     string s;
//     cout<<"Enter string\n</>  ";
//     getline(cin,s);
//     int n = s.length();
//     vector<int> arr(26, 0);
//     for(int i = 0 ; i<n ; i++){
//         char ch = s[i];
//         int ascii = (int)ch;
//         arr[ascii-97]++;
//     }
//     int mx = 0;
//     for(int i = 0; i<26 ; i++){
//         if(arr[i]>mx ) mx = arr[i];
//     }
//     for(int i = 0 ; i<26; i++){
//         if(arr[i] == mx ){
//             int ascii = i+ 97;
//             char ch = (char)ascii;
//             cout<<ch<<" "<<mx<<endl;
//         }
//     }  
// }