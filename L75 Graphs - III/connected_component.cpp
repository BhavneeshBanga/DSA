#include <iostream>
#include <list>
#include <vector>
#include <unordered_set>
using namespace std;

vector<list<int> > graph;
unordered_set<int> visited;
int v;  //no of vertices

void add_edge(int src, int dest, bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}
int dfs(int node, unordered_set<int> &visited){
    visited.insert(node);
    for(auto neighbor : graph[node]){
        if(!visited.count(neighbor)){
            dfs(neighbor, visited);
        }
    }
}
int conncected_component(){
    int result = 0;
    unordered_set<int> visited;
    for(int i = 0; i<v ; i++){
        // go to every node
        // if from a vertex we can initiate a dfs, we got one more cc
        if(!visited.count(i)){
            result++;
            dfs(i, visited);
        }
    }
    return result;
}
int main() {
    cin>>v;
    graph.resize(v, list<int> ());
    int e;
    cin>>e;
    visited.clear();
    while(e--){
        int s, d;
        cin>>s>>d;
        add_edge(s, d);
    }   
    cout<<"Connected components are "<< conncected_component()<<"\n";
    return 0;
}