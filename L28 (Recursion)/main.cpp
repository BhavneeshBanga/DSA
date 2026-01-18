// **Multiple calls*

// Fibbo of a number
// #include<iostream>
// using namespace std;
// int fibbo(int n){
//     if(n==1 || n==0){
//         return 1;
//     }
//     else{
//         return fibbo(n-1) + fibbo(n-2);
//     }
// }
// int main(){
//     cout<<fibbo(6);
// }

// power function (Logatathmic)   kiya nahi yeh wala🥲
// #include<iostream>
// using namespace std;
// int pow(int x,int n){
//     if(n==1){
//         return x;
//     }
//     else if(n%)
//     int ans = pow(x, n/2);
//     return ans*ans;
// }
// int main(){
//     cout<<pow(2,8);
// }

// Stair case
// #include<iostream>
// using namespace std;
// int StairCase(int n){
//     if(n==2) return 2;
//     if(n==1) return 1;
//     return StairCase(n-1) + StairCase(n-2);
// }
// int main(){
//     cout<<StairCase(6)<<endl;
// }

// maze Path    same hai pnc se already kiya hua hai maine
// #include<iostream>
// using namespace std;
// int maze(int sr,int sc,int er,int ec ){
//     if(sr>er || sc>ec) return 0;
//     if(sr==er && sc==ec) return 1;
//     int RightWays = maze(sr,sc+1,er,ec );
//     int LeftWays = maze(sr+1,sc,er,ec );
//     int totalWays = RightWays + LeftWays;
//     return totalWays;
// }
// void printpath(int sr,int sc,int er,int ec, string s){
//     if(sr>er || sc>ec) return;
//     if(sr==er && sc==ec){
//         cout<<s<<endl;
//         return;
//     }
//     printpath(sr,sc+1,er,ec, s+'R');
//     printpath(sr+1,sc,er,ec, s+'D');
// }
// int maze2(int row, int col){
//     if(row<1 ||col<1) return 0;
//     if(row==1 && col==1) return 1;
//     int RightWays = maze2(row, col-1);
//     int LeftWays = maze2(row-1, col);
//     int totalWays = RightWays + LeftWays;
//     return totalWays;
// }
// int main(){
//     // cout<<maze(0, 0, 4, 5);
//     // printpath(0, 0, 5, 5, "");
//     cout<<maze2(3, 4);
// }

// PRE IN POST  important concept hai
// #include<iostream>
// using namespace std;
// void pip(int n){
//     if(n==0) return;
//     cout<<"Pre "<<n<<endl;
//     pip(n-1);
//     cout<<"In "<<n<<endl;
//     pip(n-1);
//     cout<<"Post "<<n<<endl;
// }
// int main(){
//     pip(3);
// }

// Print zig Zag
#include<iostream>
using namespace std;
int main(){
    
}