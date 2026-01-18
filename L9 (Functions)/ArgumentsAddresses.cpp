// #include<iostream>
// using namespace std;
// int func(int x, int y){                     //Formal Parameters
//     cout<<"Address of main x "<<&x<<endl;    
//     cout<<"Address of main y "<<&y<<endl;
// }
// int main(){
//     int x = 8;
//     int y;
//     cout<<"Address of main x "<<&x<<endl;    
//     cout<<"Address of main y "<<&y<<endl;
//     func(x, y);                             //Actual PRAMETERS
// }


// #include<iostream>
// using namespace std;
// int func(int x = 4, int y =  6){                     
//     cout<<x<<" "<<y;
// }
// int main(){
//     func();                            
// }

// #include<iostream>
// using namespace std;
// int func(int x = 4, int y =  6){                     
//     cout<<x<<" "<<y;
// }
// int main(){
//     func(6, 4);                            
// }

// #include<iostream>
// using namespace std;
// int func(int x = 4, int y =  6){                     
//     cout<<x<<" "<<y;
// }
// int main(){
//     func(7);                            
// }
//Error aa jayege kyuki agar hum ek ko initialize
//  kar rhe hai toh baakion ko bhi intiialize krne hota hai
// #include<iostream>
// using namespace std;
// int func(int x = 4, float y){        
//     cout<<x<<" "<<y;
// }
// int main(){
//     func(7, 9);                            
// }


// #include<iostream>
// using namespace std;
// int func(int x = 4, float y = 9.9){        
//     cout<<x<<" "<<y;
// }
// int main(){
//     func(7, 9.09);                            
// }


#include<iostream>
using namespace std;
int func(int x = 3, bool y = true){        
    cout<<x<<" "<<y;
}
int main(){
    func(false);                            
}