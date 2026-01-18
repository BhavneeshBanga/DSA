#include <iostream>
using namespace std;
class Student{          //user defined data type
    public:
        string name;
        int rollno;
        float CGPA;
        Student(string name, int rollno, float CGPA){
            this->name = name;
            (*this).rollno = rollno;
            this->CGPA = CGPA;
        }  
};
void change(Student* s){
    s->name = "Bhavi";
    s->CGPA = 9.88;
}
    
    int main() {
        Student *s = new Student("Bhavneesh", 27, 9.8);
        
        cout<<"The CGPA of the student "<<s->name<<" Whose roll number is "<<s->rollno<<" is "<<s->CGPA<<endl;
        
        // Student* ptr = &s;
        // (*ptr).name = "Bhavi";
        // // (*ptr).CGPA = 9.88;
        // ptr->CGPA = 9.9;

        change(s);

        cout<<"The CGPA of the student "<<s->name<<" Whose roll number is "<<s->rollno<<" is "<<s->CGPA<<endl;
         
        return 0;


    }
     