#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;   // you need not mention size
    //inseritng / input do not use []
    v.push_back(5);
    cout<<v.capacity()<<endl;
    v.push_back(4);
    cout<<v.capacity()<<endl;
    // v[1] = 4;            //not the rihgt way(gaarbage value) 
    v.push_back(7);
    cout<<v.capacity()<<endl;
    v.push_back(10); 
    cout<<v.capacity()<<endl;       

    //if you want yo update / access
    // cout<<v[0]<<" ";
    // cout<<v[1]<<" ";
    // cout<<v[2]<<" ";
    // cout<<v[3]<<" ";
}