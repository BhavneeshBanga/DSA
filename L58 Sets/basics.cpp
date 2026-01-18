// #include <iostream>
// #include <unordered_set>
// using namespace std;

// int main() {
//     unordered_set<int> s;
//     s.insert(1);
//     s.insert(2);
//     s.insert(3);
//     s.insert(4);
//     s.insert(5);
//     s.insert(2);
//     s.insert(3);
//     s.insert(4);
//     s.insert(5);
//     s.erase(2);

//     int target = 40;
//     // s.find() -> it searches in the set and if it is not found then it returns the last element
//     if(s.find(target)!=s.end()){    //target exists
//         cout<<"Exists!!"<<endl;        //O(1) mai hi hota hai
//     }
//     else{
//         cout<<"Does not exists!!"<<endl;
//     }
//     cout<<s.size()<<endl;
//     for(int ele : s){
//         cout<<ele<<" ";
//     }
//     return 0;
// }

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> m;
    pair<string, int> p1;
    p1.first = "Bhavneesh";
    p1.second = 23;
    
    m.insert(p1);
    
    m["Bhavi"] = 24;
    m["raheja"] = 0;
    m["masti"] = 11;
    m["paisa"] = 99;




    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    
    return 0;
}