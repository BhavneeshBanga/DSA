// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"enter the number of rows\n>>";
//     cin>>x;
//     int k = 1;
//     for(int i = 0; i<x ; i++){
//         for(int j = 0 ; j<=i ; j++)
//         cout<<k<<" ";
//         k = k+1;
//         cout<<endl;
//     }

//     return 0;
// }



// #include <iostream>
// #include<math.h>
// using namespace std;
// int main() {
//     while(true){

    
//         int num, originalNum, remainder, n = 0;
//         float result = 0.0;

//         cout << "Enter an integer: ";
//         cin >> num;

//         originalNum = num;

//         // count the number of digits
//         for (originalNum = num; originalNum != 0; ++n) {
//             originalNum /= 10;
//         }

//         for (originalNum = num; originalNum != 0; originalNum /= 10) {
//             remainder = originalNum % 10;
//             result += pow(remainder, n);
//         }

//         if ((int)result == num)
//             cout << num << " is an Armstrong number.";
//         else
//             cout << num << " is not an Armstrong number.";

//             cout<<endl;
//         }

// }





// Ques 1 - Wap to print spaces and floyds triangle
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cout<<"Enter rows: ";
//   cin>>n;
//   for(int i = 1; i<=n; i++){
//     for(int j = 1; j <= n-i; j++){
//       cout<<" ";
//     }
//     for(int k = 1 ; k<=i ; k++){
//         cout<<k<<" ";
//     }
//     cout<<endl;
//   } 
// }


// ques 2 - wap to print upper triangle
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of rows (half of diamond height): ";
    cin >> n;
    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
