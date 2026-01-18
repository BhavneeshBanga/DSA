#include <iostream>
#include <set>
#include <map>
using namespace std;

int main() {
    map<int, int> m;
    m[2] = 20;
    m[1] = 30;
    m[3] = 10;
    for(auto x : m){
        cout<<x.first<<" ";
        cout<<x.second<<endl;
    }
    // set<int> s;
    // s.insert(5);
    // s.insert(4);
    // s.insert(98);
    // for(int ele : s){
    //     cout<<ele<<endl;
    // }
    
    return 0;
}