#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int minMeetingRooms(vector<vector <int> >&intervals){
    vector<int> start;
    vector<int> ending;
    for(auto x : intervals){
        start.push_back(x[0]);
        ending.push_back(x[1]);
    }
    sort(start.begin(), start.end());
    sort(ending.begin(), ending.end());
    int i = 0;
    int j = 0;
    int rooms = 0;
    int ans = 0;
    while(i < start.size() and j<ending.size()){
        if(start[i] < ending[j]){       //meetin is starting 
            rooms++;
            ans = max(ans, rooms);      //maximum rooms return karne hain na, isi liye max se compare karte ja rahe hai
            i++;
        }
        else if(start[i] == ending[j]){
            i++;
            j++;
        }
        else{
            rooms--;
            j++;
        }
    }
    return rooms;
}
int main() {
    vector<vector<int> > intervals = {{1, 10}, {2, 7}, {3, 19}, {8, 12}, {10, 20}, {11, 30}};
    cout<<minMeetingRooms(intervals)<<endl;
    return 0;
}


// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int minMeetingRooms(vector<vector <int> >&intervals){
//     vector<int> start;
//     vector<int> end;
//     for(int i = 0 ; i<intervals.size() ; i++){
//         start.push_back(intervals[i][0]);
//         end.push_back(intervals[i][1]);
//     }
//     sort(start.begin(), start.end());
//     sort(end.begin(), end.end());
//     int i = 0;
//     int j = 0;
//     int rooms = 0;
//     while(i < start.size()){
//         if(start[i] < end[j]){
//             rooms++;
//             i++;
//         }
//         else if(start[i] == end[j]){
//             continue;
//         }
//         else{
//             rooms--;
//             j++;
//         }
//     }
//     return rooms;
// }




// int main() {
//     vector<vector<int> > intervals = {{1, 10}, {2, 7}, {3, 19}, {8, 12}, {10, 20}, {11, 30}};
//     cout<<minMeetingRooms(intervals)<<endl;
    

    
//     return 0;
// }