#include <iostream>
// #include <ordered_map>
#include<map>
using namespace std;

int main() {
    ordered_map<int, int> map;
    map[1] = 1;
    map[2] = 2;
    map[3] = 3;
    map[4] = 4;

    for(auto x : map){
        cout<<x.first<<" "<<x.second<<endl;
    }
}