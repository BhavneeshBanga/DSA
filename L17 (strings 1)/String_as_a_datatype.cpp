//vaise yeh class hoti hai lekin hum ise as a datatype padhenge
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     // string str = "Bhavneesh\0Banga";
//     // string str = "Bhavneesh Banga";
//     // cout<<str;
//     string s;
//     cout<<"Enter string\n</>  ";
//     // cin>>s;
//     // cout<<s;            //tab tak hi print krega jab tak koi space nhi dikh jaaati jahan spaace dikh gyi wahi stop
//     getline(cin, s);
//     cout<<s;           
// }

// If Vowel
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s;
//     cout<<"Enter string\n</>  ";
//     getline(cin, s);
//     int vowel = 0;
//     for(int i = 0 ; s[i]!= '\0' ; i++){
//         if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'|| 
//            s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' ){
//             vowel+=1;
//         }
//         // cout<<s[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"THE NUMBER OF VIWEL IN STRING IS >> "<<vowel;
//     // cout<<s;         
// }


// Updation of string 
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s;
//     cout<<"Enter string\n</>  ";
//     getline(cin, s);
//     cout<<s<<endl;
//     s[4] = 'u';
//     cout<<s<<endl;      
// }

// Built in func()
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s;
//     cout<<"Enter string\n</>  ";
//     getline(cin, s);
//     cout<<s<<endl;
//     cout<<s.size()<<endl;      //for finding length
//     cout<<s.length()<<endl;     // 0 to s.length()
// }

// Push_back and pop_back
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s;
//     cout<<"Enter string\n</>  ";        //bhav input dal ke dekho
//     getline(cin, s);
//     cout<<s<<endl;
//     s.push_back('e');
//     s.push_back('e');
//     s.push_back('s');
//     s.push_back('h');
//     // s.push_back('eesh');   //sirf ek character hi push hota hai😭
//     cout<<s<<endl;
// }

// + operator       modefy krne ka kaam hota hai
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s;
//     cout<<"Enter string\n</>  ";        
//     getline(cin, s);
//     cout<<s<<endl;
//     string t;
//     cout<<"Enter string\n</>  ";        
//     getline(cin, t);
//     cout<<t<<endl;
//     s = s + "_" + t;
//     cout<<s<<endl;
// }


// Reverse
// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
//     string s;
//     cout<<"Enter string\n</>  ";        
//     getline(cin, s);
//     cout<<s<<endl;
//     // reverse(s.begin()+2, s.end()-1);
//     reverse(s.begin()+2, s.begin()+5);      //right wale mai ek jayada dena padta hai
//     cout<<s<<endl;
// }

// Question
// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
//     string s;
//     cout<<"Enter string\n</>  ";        
//     getline(cin, s);
//     cout<<s<<endl;
//     int length = s.length();
//     reverse(s.begin() , s.begin() + (length/2));
//     cout<<s<<endl; 
// }


// 
// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
//     // s.substring(idx, length)
//     string s = "Raghav";
//     cout<<s<<endl;
//     cout<<s.substr(1)<<endl;
//     cout<<s.substr(2)<<endl;
//     cout<<s.substr(3)<<endl;
//     cout<<s.substr(4)<<endl;
//     cout<<s.substr(5)<<endl;
//     cout<<s.substr(6)<<endl;
// }


// 
// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
//     string s;
//     cout<<"Enter string\n</>  ";        
//     getline(cin, s);
//     cout<<s<<endl;
//     int idx = (int)s.length();
//     // s.substr(idx/2);
//     cout<<s.substr(idx/2)<<endl;
// }

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int x = 56745;
    string s = to_string(x);
    int length = s.length();
    cout<<s<<endl;
    cout<<length<<endl;
}