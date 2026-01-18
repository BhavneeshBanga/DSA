// Solid Rectqngle
// #include<iostream>
// using namespace std;
// int main(){
//     int rows;
//     cout<<"Enter the number of rows\n>>";
//     cin>>rows;
//     int columns;
//     cout<<"Enter the number of columns\n>>";
//     cin>>columns;
//     for(int i = 1; i<=rows ; i++){
//         for(int j = 1; j<=columns ; j++)
//             cout<<"* ";
//         cout<<endl;
//     }
// }

// Solid Square
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the side\n>>";
//     cin>>n;
//     for(int i = 1; i<=n ; i++){
//         for(int j = 1; j<=n ; j++)
//             cout<<"* ";
//         cout<<endl;
//     }
// }

// Number Square
// #include<iostream>
// using namespace std;
// int main(){
//     int rows;
//     cout<<"Enter rows\n>>";
//     cin>>rows;
//     int columns;
//     cout<<"Enter columns\n>>";
//     cin>>columns;
//     for(int i = 1; i<=rows ; i++){
//         for(int j = 1; j<=columns ; j++)
//             cout<<j;
//         cout<<endl;
//     }
// }

// Star triangle
// #include<iostream>
// using namespace std;
// int main(){
//     int rows;
//     cout<<"Enter rows\n>>";
//     cin>>rows;
//     for(int i = 1; i<=rows ; i++){
//         for(int j = 1; j<=i ; j++)
//             cout<<"* ";
//         cout<<endl;
//     }
// }

// // Star Triangle Reverse
// #include<iostream>
// using namespace std;
// int main(){
//     int rows;
//     cout<<"Enter rows\n>>";
//     cin>>rows;
//     for(int i = 1 ; i<= rows ; i++){
//         for(int j = 1 ; j<=rows+1-i ; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// Number Triangle
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter rows\n>>";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }

// Odd number Triangle
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter rows\n>>";
//     cin>>n;
//     for(int i = 1 ; i<= n ; i++){
//         for(int j = 1 ; j<=2*i-1 ; j=j+2){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
    // 
    // 
    // for(int i = 1 ; i<= n ; i++){
    //     int a = 1;
    //     for(int j = 1 ; j<=2*i ; j=j+2){
    //         cout<<a<<" ";
    //         a+=2;
    //     }
    //     cout<<endl;
    // }
// }

// Alphabets Square
// #include<iostream>
// using namespace std;
// int main(){
//     int rows;
//     cout<<"Enter rows\n>>";
//     cin>>rows;
//     int columns;
//     cout<<"Enter columns\n>>";
//     cin>>columns;
//     for(int i = 65 ; i<=rows+64; i++){
//         for(int j = 65 ; j<columns+64; j++){
//             cout<<(char)j;
//         }
//         cout<<endl;
//     }   
// }

// Star Plus
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the side\n>>";
//     cin>>n;
//     for(int i = 1; i<=n ; i++){
//         for(int j = 1; j<=n ; j++){
//             if(i==(n+1)/2 || j==(n+1)/2){
//                 cout<<"+";
//             }
//             else cout<<" ";
//         }
//         cout<<endl;
//     }
// }

// Star cross
// #include<iostream>
// using namespace std;
// int main(){
//     while(true){
//     int n;
//     cout<<"Enter the side\n>>";
//     cin>>n;
//     for(int i = 1; i<=n ; i++){
//         for(int j = 1; j<=n ; j++){
//             if(i==j || i+j==n+1){         //i+j==n+1
//                 cout<<"*";
//             }
//             else cout<<" ";
//         }
//         cout<<endl;
//     }
// }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter rows\n>>";
//     cin>>n;
//     int k = 1;
//     for(int i = 1 ; i<= n ; i++){
//         for(int j = 1 ; j<=i ; j++){
//             cout<<k<<" ";
//             k = k+2;
//         }
//         cout<<endl;
//     }
// }

// Floyd's triangle
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter rows\n>>";
//     cin>>n;
//     int k = 1;
//     for(int i = 1 ; i<= n ; i++){
//         for(int j = 1 ; j<=i ; j++){
//             cout<<k<<"  ";
//             k = k+1;
//         }
//         cout<<endl;
//     }
// }

// // Binary triangle
// #include<iostream>
// using namespace std;
// int main(){
//     int rows;
//     cout<<"Enter rows\n>>";
//     cin>>rows;
//     int a = 9;
//     for(int i = 1; i<=rows ; i++){
//         if(i%2!=0) a = 1;
//         else a = 0;
//         for(int j = 1; j<=i ; j++){
//             cout<<a<<" ";
//             if(a==0) a=1;
//             else a = 0;
//         }
//         cout<<endl;
//     }
// }

// Binary triangle2
// #include<iostream>
// using namespace std;
// int main(){
//     int rows;
//     cout<<"Enter rows\n>>";
//     cin>>rows;
//     int a = 9;
//     for(int i = 1; i<=rows ; i++){
//         for(int j = 1; j<=i ; j++){
//             if((i+j)%2==0){
//                 cout<<"1 ";
//             }
//             else cout<<"0 ";
//         }
//         cout<<endl;
//     }
// }

// Star Triangle Flipped
// #include<iostream>
// using namespace std;
// int main(){
//     int rows;
//     cout<<"Enter rows\n>>";
//     cin>>rows;
//     for(int i = 1 ; i<= rows ; i++){
//         for(int j = 1 ; j<=rows-i ; j++){
//             cout<<" ";
//         }
//         for(int k = 1 ; k <= i ; k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// Star Triangle Flipped2
// #include<iostream>
// using namespace std;
// int main(){
//     int rows;
//     cout<<"Enter rows\n>>";
//     cin>>rows;
//     for(int i = 1 ; i<= rows ; i++){
//         for(int j = 1 ; j<=rows ; j++){
//             if((i+j)>=(rows+1)){
//                 cout<<"*";
//             }
//             else cout<<" ";
//         }
//         cout<<endl;
// }
// }

// number Triangle Flipped
// #include<iostream>
// using namespace std;
// int main(){
//     int rows;
//     cout<<"Enter rows\n>>";
//     cin>>rows;
//     for(int i = 1 ; i<= rows ; i++){
//         for(int j = 1 ; j<=rows-i ; j++){
//             cout<<" ";
//         }
//         for(int k = 1 ; k <= i ; k++){
//             cout<<k;
//         }
//         cout<<endl;
//     }
// }