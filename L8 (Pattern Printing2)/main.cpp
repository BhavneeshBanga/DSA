// Rhombus
// #include<iostream>
// using namespace std;
// int main(){
//     int rows;
//     cout<<"Enter rows\n>>";
//     cin>>rows;
//     int Columns;
//     cout<<"Enter Columns\n>>";
//     cin>>Columns;
//     for(int i = 1; i<=rows ; i++){
//         for(int j= 1 ; j<=rows-i; j++){
//             cout<<" ";
//         }
//         for(int k = 1 ; k<=Columns; k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// Star Pyramid
// #include<iostream>
// using namespace std;
// int main(){
//     int rows;
//     cout<<"Enter rows\n>>";
//     cin>>rows;
//     for(int i = 1; i<=rows ; i++){
//         for(int j= 1 ; j<=rows-i; j++){
//             cout<<" ";
//         }
//         for(int k = 1 ; k<=2*i-1; k=k+1){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// Star triangle NST NSP
// #include<iostream>
// using namespace std;
// int main(){
//     int rows;
//     cout<<"Enter rows\n>>";
//     cin>>rows;
//     int nst = 1;
//     int nsp = rows-1;
//     for(int i = 1; i<=rows ; i++){
//         for(int j = 1 ; j<=nsp; j++){
//             cout<<" ";
//         }
//         nsp--;
//         for(int k = 1; k<=nst ; k++){
//             cout<<"*";
//         }
//         nst = nst+2;
//         cout<<endl;
//     }
// }

// Number pyramid palindrome
// #include<iostream>
// using namespace std;
// int main(){
//     int rows;
//     cout<<"Enter rows\n>>";
//     cin>>rows;
//     for(int i = 1; i<=rows ; i++){
//         for(int k = 1 ; k<=rows-i; k++){
//             cout<<" ";
//         }
//         for(int j = 1; j<=i ; j++){
//             cout<<j;
//         }
//         for(int z = i-1 ; z>=1 ; z--){
//             cout<<z;
//         }
//         cout<<endl;
//     }
// }

// Star Diamoind
// #include<iostream>
// using namespace std;
// int main(){
//     int rows;
//     cout<<"Enter rows\n>>";
//     cin>>rows;
//     int nst = 1;
//     int nsp = rows-1;
//     for(int i = 1 ; i<=(2*rows)-1 ; i++){
//         for(int q = 1 ; q<=nsp ; q++){
//             cout<<" ";
//         }
//         if(i<rows-1) nsp -=1;
//         else nsp+=1;
//         for(int j = 1 ; j<=nst ; j++){
//             cout<<"*";
//         }
//         if(i<rows-1) nst+=2;
//         else nst-=2;
//         cout<<endl;
//     }
// }

// Star Bridge
// #include<iostream>
// using namespace std;
// int main(){
//     while(true){
//         int rows;
//         cout<<"Enter rows\n>>";
//         cin>>rows;
//         for(int z = 1 ; z<=2*rows-1 ; z++){
//             cout<<"*";
//         }
//         cout<<endl;
//         int m = rows-1;
//         int nsp = 1;
//         for(int i  =1 ; i<=m ; i++){
//             for(int j = 1 ; j<=m+1-i ; j++){
//                 cout<<"*";
//             }
//             for(int k = 1 ; k<=nsp ; k++){
//                 cout<<" ";
//             }
//             nsp+=2;
//             for(int j = 1 ; j<=m+1-i ; j++){
//                 cout<<"*";
//             }
//             cout<<endl;
//         }
//     }
// }

// Number Bridge
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter number of rows: ";
//     cin>>n;
//     int m = n - 1;
//     for(int i = 1 ; i<=2*n-1 ; i++){
//         cout<<i;
//     }
//     cout<<endl;
//     int nsp = 1;
//     for(int i  =1 ; i<=m ; i++){
//         int a = 1;
//         for(int j = 1 ; j<=m+1-i ; j++){
//             cout<<a;
//             a++;
//         }
//         for(int k = 1 ; k<=nsp ; k++){
//             cout<<" ";
//             a++;
//         }
//         nsp+=2;
//         for(int j = 1 ; j<=m+1-i ; j++){
//             cout<<a;
//             a++;
//         }
//         cout<<endl;
//     }
// }

// Number Spiral    //using pseudo variables
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number\n>>";
//     cin>>n;
//     for(int i = 1; i<=2*n-1 ; i++){
//         for(int j = 1; j<=2*n-1 ; j++){
//             int a = i;
//             int b = j;
//             if(a>n) a = (2*n) - i;            
//             if(b>n) b = (2*n) - j;  
//             int z = min(a, b);        
//             cout<<(n-z+1)<<" "; 
//         }
//         cout<<endl;
//     }
// }
