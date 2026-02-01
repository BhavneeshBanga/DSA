// Greatesst commomn divisior 36:50
#include <iostream>
using namespace std;
int hcf(int a, int b){
    int reminder = max(a, b) % min(a, b);
    if(reminder==0) return min(a, b);
    else {
        hcf(reminder, min(a, b));
    }
}
int gcd(int a, int b){      // Time complexity is O(log(a+b))
    if(a==0) return b;
    else return gcd(b%a ,a);
}
int main() {
    int a = 27;
    int b = 45;
    // cout<<hcf(a, b);
    cout<<gcd(a, b);        //kisi bhi order mai de do numbers koi farq nahi padta
    return 0;
}