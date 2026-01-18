// #include<iostream>
// #include<sstream>
// using namespace std;
// int main(){
//     string str = "Bhavneesh is a student at PW";
//     stringstream ss(str);
//     string temp;
//     while(ss>>temp){
//         cout<<temp<<endl;
//     }
// }


//string stream
// #include<iostream>
// #include<sstream>
// using namespace std;
// int main(){
//     // string str = "I love Physics";
//     string str;
//     cout<<"Enter sentence\n</> ";
//     getline(cin, str);
//     stringstream ss(str);
//     string temp;
//     while(ss>>temp){
//         cout<<temp<<endl;
//     }
// }


// highest frequency sentence
//Most occuring word 
// #include<iostream>
// #include<string>
// #include<vector>
// #include<sstream>
// #include<algorithm>
// using namespace std;
// int main(){
//     string str;
//     cout<<"Enter sentence\n</> ";
//     getline(cin, str);
//     stringstream ss(str);
//     string temp;
//     vector<string> v;
//     while(ss>>temp){
//         // couta<<temp;
//         v.push_back(temp);
//     }
//     sort(v.begin(), v.end());
//     int maxcount = 1;
//     int count = 1;
//     for(int  i = 1 ; i<v.size() ; i++){
//         if(v[i] == v[i-1]) count++;
//         else count = 1;
//         maxcount = max(maxcount , count);
//     }
//     cout<<maxcount<<endl;
// }

// 
// #include<iostream>
// #include<string>
// #include<vector>
// #include<sstream>
// #include<algorithm>
// using namespace std;
// int main(){
//     string str;
//     cout<<"Enter sentence\n</> ";
//     getline(cin, str);
//     stringstream ss(str);
//     string temp;
//     vector<string> v;
//     while(ss>>temp){
//         v.push_back(temp);
//     }
//     sort(v.begin(), v.end());
//     int maxcount = 1;
//     int count = 1;
//     for(int  i = 1 ; i<v.size() ; i++){
//         if(v[i] == v[i-1]) count++;
//         else count = 1;
//         maxcount = max(maxcount , count);
//     }
//     count = 1;
//     for(int  i = 1 ; i<v.size() ; i++){
//         if(v[i] == v[i-1]) count++;
//         else count = 1;
//         if(count == maxcount){
//             cout<<v[i]<<" "<<maxcount<<endl;
//         }
//     }
// }


// stoi and stoll
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     // string str = "123456789";
//     // int x = stoi(str);
//     // cout<<x<<endl;
//     // x++;
//     // cout<<x<<endl;
//     // 
//     // stoll
//     string str2 = "123456789566";
//     long long x2 = stoll(str2);
//     cout<<x2;
// }


// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     // string str = "123456789";
//     string str = "000012345";       //long long initaiate ke zeros ko uda deta hai
//     long long x = stoll(str);
//     x++;
//     cout<<x<<endl;
//     x++;
//     cout<<x<<endl;
// }




// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
//     string arr[] = {"0123", "0023", "456", "00182", "940", "2901"};
//     int max = stoi(arr[0]); 
//     for(int i = 0 ; i<= 5 ; i++){
//         int x = stoi(arr[i]);
//         if(x>max) max = x;
//     }
//     cout<<max;
// }

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string arr[] = {"0123", "0023", "456", "00182", "940", "2901"};
    int max = stoi(arr[0]); 
    string maxString = arr[0];
    for(int i = 0 ; i<= 5 ; i++){
        int x = stoi(arr[i]);
        if(x>max){
            max = x;
            maxString = arr[i];
        }
    cout<<max<<endl<<maxString;
    }
}