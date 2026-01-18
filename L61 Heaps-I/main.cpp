// max heaps
#include <iostream>
#include <queue>
using namespace std;

int main() {
    // priority_queue<int> pq;     //by default max heap
    // pq.push(2);                    
    // pq.push(10);                    
    // pq.push(-6);                    
    // pq.push(67);    
    // pq.push(8);                    
    // cout<<pq.top()<<endl;   
    // pq.pop();         
    // cout<<pq.top()<<endl;  
    priority_queue< int, vector<int>, greater<int> > pq;
    pq.push(2);                    
    pq.push(10);                    
    pq.push(-6);                    
    pq.push(67);    
    pq.push(8);                    
    cout<<pq.top()<<endl;   
    pq.pop();         
    cout<<pq.top()<<endl;  
    
    return 0;
}