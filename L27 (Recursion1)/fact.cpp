// factorial of a number
// #include<iostream>
// using namespace std;
// int fact(int n){
//     if(n==0 || n==1 ) return 1;
//     else{
//         return n * fact(n-1);
//     }  
// }
// int main(){
//     cout<<fact(5);
// }

// Print n to 1
// #include<iostream>
// using namespace std;
// int printt(int n){
//     if(n==0) return 1;
//     cout<<n<<endl;
//     printt(n-1);
// }
// int main(){
//     cout<<printt(6);
// }

// Print 1 to n
// #include<iostream>
// using namespace std;
// int printt(int n){
//     if(n==0) return 1;
//     printt(n-1);
//     cout<<n<<endl;
// }
// int main(){
//     cout<<printt(6);
// }

// sum 1 to n
// #include<iostream>
// using namespace std;
// void Sum1toN(int sum, int n){
//     if(n==0){
//         cout<<sum<<endl;
//         return;
//     }
//     Sum1toN(sum+n, n-1);
// }
// int main(){
//     Sum1toN(0, 10);
// }

// Sum 1 to n return type       **Important hai**
// #include<iostream>
// using namespace std;
// int summ(int n){
//     if(n==1) return 1;
//     else {
//         return n + summ(n-1);
//     }
// }
// int main(){
//     cout<<summ(4);
// }

// a raise to power b
// #include<iostream>
// using namespace std;
// int func(int a, int b){
//     if(b==0) return 1;
//     else return a * func(a, b-1);
// }
// int main(){
//     cout<<func(2, 9);
// }

