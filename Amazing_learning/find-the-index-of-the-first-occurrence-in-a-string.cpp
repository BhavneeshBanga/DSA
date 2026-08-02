// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/submissions/2087381822/

// T.C. - 127ms
class Solution {
public:
    bool helper(int j, string &main, string &nee,bool &f){
        for(int i=0;i<nee.length();i++){
            if(nee[i] != main[i+j]){
                return false;
            }
        }
        return true;
    }
    int strStr(string main, string nee) {
        char fd = nee[0];
        bool found = false;
        for(int i= 0; i<main.length();i++){
            if(main[i]==fd){
                if(!helper(i,main,nee,found)){
                    continue;
                }
                else return i;
            }
        }
        return -1;

        
    }
};


// Beats 100%
class Solution {
public:
    int strStr(string haystack, string needle) {
        int idx = haystack.find(needle);
        return idx;
        
    }
};


class Solution {
public:
    int strStr(string haystack, string needle) {
        size_t pos = haystack.find(needle);
        return pos == string::npos ? -1 : (int)pos;
    }
};