// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i = 0; i <=n ; i++){
//         for(int j = 0; j<=i ; j++){
//             cout<<"@";
//         }
        
//         cout<<endl;
//     }
// }

#include <iostream>
using namespace std;

int main() {
    int n; // Peak number of stars
    cout<<"Enter thea number\n>>";
    cin>>n;
    // Increasing part
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Decreasing part
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
