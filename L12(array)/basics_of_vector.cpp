// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v;   // you need not mention size
//     v.push_back(5);
//     v.push_back(4);
//     v.push_back(7);
//     v.push_back(16); 
//     v.push_back(19); 
//     v.push_back(17); 
//     v.push_back(11); 
//     v.push_back(1); 
//     v.push_back(10); 
//     v.push_back(187); 
//     v.push_back(147); 
//     v.push_back(105); 
//     v.push_back(106);
//     for(int i = 1 ; i<v.size() ; i++){
//         cout<<v[i]<<" ";
//     }
//     v.pop_back();
//     v.pop_back();
//     cout<<endl;
//     for(int i = 1 ; i<v.size() ; i++){
//         cout<<v[i]<<" ";
//     }
// }

// Capacity of vector
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v;   // you need not mention size
//     v.push_back(5);//1 2
//     v.push_back(4);//2 2
//     v.push_back(7);//
//     v.push_back(16); 
//     v.push_back(19); 
//     v.push_back(17); 
//     v.push_back(11); 
//     v.push_back(1); 
//     v.push_back(10); 
//     v.push_back(187); 
//     v.push_back(147); 
//     v.push_back(105); 
//     v.push_back(106);
//     cout<<"Size is "<<v.size()<<endl;
//     cout<<"capacity is "<<v.capacity()<<endl;
//     v.pop_back();
//     v.pop_back();
//     v.pop_back();
//     v.pop_back();
//     v.pop_back();
//     v.pop_back();
//     cout<<"Size is "<<v.size()<<endl;
//     cout<<"capacity is "<<v.capacity()<<endl;
// }

// Vector with size 
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v(5, 7);   //initial size = 5 , and each element is 7
//     cout<<v[3];         //ab error nhi aayega
// }

// Vector input
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v(5);   
//     for(int i = 0; i<5 ; i++){
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }
//     for(int i = 0; i<5 ; i++){
//         cout<<v[i]<<" ";
//     }
// }

// Vector At sort
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int> v;
//     v.push_back(6);   
//     v.push_back(5);   
//     v.push_back(4);   
//     v.push_back(3);
//     // cout<<v[2];   
//     // v.at(2) = 89;
//     // cout<<v.at(2);   
//     for(int i = 0 ; i<v.size() ; i++){
//         cout<<v.at(i)<<" ";
//     }
//     cout<<endl;
//     sort(v.begin(),v.end());
//     for(int i = 0 ; i<v.size() ; i++){
//         cout<<v.at(i)<<" ";
//     }
//     cout<<endl;
// }

// Passing vectors j to functions
// #include<iostream>
// #include<vector>        //Vectors are passed by value
// using namespace std;
// void change(vector<int> a){
//     a[0] = 100;
//     for (int i = 0 ; i<a.size() ; i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     vector<int> v ;   
//     v.push_back(9);
//     v.push_back(7);
//     v.push_back(5);
//     v.push_back(3);
//     for (int i = 0 ; i<v.size() ; i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     change(v);
//     for (int i = 0 ; i<v.size() ; i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }

// How to pass vectors by referendce
// #include<iostream>
// #include<vector>        
// using namespace std;
// void change(vector<int> &a){        //ab reference se ja rha hai
//     a[0] = 100;
//     for (int i = 0 ; i<a.size() ; i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     vector<int> v ;   
//     v.push_back(9);
//     v.push_back(7);
//     v.push_back(5);
//     v.push_back(3);
//     for (int i = 0 ; i<v.size() ; i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     change(v);
//     for (int i = 0 ; i<v.size() ; i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }

// last occurence of array
// #include<iostream>
// #include<vector>        
// using namespace std;
// int main(){ 
//     vector<int> v; 
//     v.push_back(8);
//     v.push_back(7);
//     v.push_back(6);
//     v.push_back(8);
//     v.push_back(4);
//     v.push_back(8);
//     v.push_back(7);
//     v.push_back(6);//idx = 7
//     v.push_back(8);
//     v.push_back(4);
//     int x = 8;
//     int idx = -1;
//     // for(int i = 0 ; i<v.size(); i++){        //forward loop
//     //     if(v[i]==x) idx = i;
//     // }
//     // Peeche se loop chaloa
//     for(int i = v.size()-1 ; i>=0 ; i--){
//         if(v[i]==x){
//             idx = i;
//             break;
//         }
//     }
//     cout<<idx;
// }

// Two Sum [Leetcode]
// #include<iostream>
// #include<vector>        
// using namespace std;
// int main(){ 
//     int x;
//     cout<<"Enter target: ";
//     cin>>x;
//     vector<int> v;
//     int n;
//     cout<<"Enter array size: ";
//     cin>>n;
//     cout<<"Enter aray elements: ";
//     for(int k = 0 ; k<n ; k++){
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }
//     for(int i = 0 ; i<=v.size()-2 ; i++){
//         for(int j = i+1 ; j<=v.size()-1 ; j++){
//             if((v[i] + v[j]) == x){
//             cout<<"("<<i<<","<<j<<")"<<endl;
//             }
//         }
//     }
// }

//Copy the contents of one aray into another in reverse order
// #include<iostream>
// #include<vector>        
// using namespace std;
// void display(vector<int>& a){
//     for(int i = 0 ; i<a.size() ; i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){ 
//     vector<int> v;
//     int n;
//     cout<<"Enter array size: ";
//     cin>>n;
//     cout<<"Enter aray elements: ";
//     for(int k = 0 ; k<n ; k++){
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }
//     display(v);
//     int k = v.size();
//     vector<int> v2(k);
//     for(int i = 0 ; i<v2.size(); i++){
//         v2[i] = v[v.size() - 1 - i];
//     }
//     display(v2);
// }

// reverse the araray withourt using extra array
// TWO POINTERS**
// #include<iostream>
// #include<vector>        
// using namespace std;
// void display(vector<int>& a){
//     for(int i = 0 ; i<a.size() ; i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// void ReversePart(int i , int j , vector<int>&v){
//     while(i<=j){
//         int temp = v[i];
//         v[i] = v[j];
//         v[j] = temp;
//         i++;
//         j--;
//     }
// }
// int main(){ 
//     vector<int> v;
//     int n;
//     cout<<"Enter array size: ";
//     cin>>n;
//     cout<<"Enter aray elements: ";
//     for(int k = 0 ; k<n ; k++){
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }
//     display(v);
//     // 
//     int i = 0;
//     int j = v.size() - 1;
//     // while(i<=j){
//     //     // Swap v[i] and v[j]
//     //     int temp = v[i];
//     //     v[i] = v[j];
//     //     v[j] = temp;
//     //     i++;
//     //     j--;
//     // }
//     // for(int i = 0, j=v.size()-1 ; i<=j ; i++, j--){
//     //     int temp = v[i];
//     //     v[i] = v[j];
//     //     v[j] = temp;
//     // }
//     //reverse(v.begin() , v.end()) 
//     ReversePart(1, 4, v);
//     display(v);
// }

// Reverse paart of an array
// #include<iostream>
// #include<vector>
// using namespace std;
// void display(vector<int>& a){
//     for(int i = 0 ; i<a.size() ; i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     vector<int> v;
//     int n;
//     cout<<"Enter array size: ";
//     cin>>n;
//     cout<<"Enter aray elements: ";
//     for(int k = 0 ; k<n ; k++){
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }
//     cout<<endl;
//     display(v);
//     int start;
//     cout<<"Enter starting index point: ";
//     cin>>start;
//     int ending;
//     cout<<"Enter ending index point: ";
//     cin>>ending;
//     for(int i = start, j=ending ; i<=j ; i++, j--){
//         int temp = v[i];
//         v[i] = v[j];
//         v[j] = temp;
//     }
//     display(v);
// }

// Rotate the give array 'a' by k steps, where k is non negative 
// note: k can be greater than n as well where n is the sizze of array'a '.
// #include<iostream>
// #include<vector>
// using namespace std;
// void ReversePart(int i , int j , vector<int>&v){
//     while(i<=j){
//         int temp = v[i];
//         v[i] = v[j];
//         v[j] = temp;
//         i++;
//         j--;
//     }
// }
// void display(vector<int>& a){
//     for(int i = 0 ; i<a.size() ; i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     vector<int> v;
//     int n;
//     cout<<"Enter array size: ";
//     cin>>n;
//     cout<<"Enter aray elements: ";
//     for(int k = 0 ; k<n ; k++){
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }
//     cout<<endl;
//     display(v);
//     int k;
//     cout<<"Enter the value by which you want to reverse the array: ";
//     cin>>k;
//     ReversePart(0, v.size() -1 - k, v);
//     ReversePart(v.size() - k, v.size() - 1 , v);
//     ReversePart(0 , v.size() - 1 , v);
//     display(v);
// }

// k = k % n
