#include <iostream>
#include <string>
using namespace std;
class book{
    public:
        int price;
        int numberpages;
        string name;
        int countbooks(int p){
            if(price < p ) return 1;
            else return 0;

        }
        bool isBookPresent(string book){
            if(name==book) return true;
            else return false;
        }
        

};
int main() {
    book harry;
    harry.name = "harryporter";
    harry.numberpages = 456;
    cout<<harry.countbooks(800);
    cout<<harry.isBookPresent("harryporter");
    
}