#include <iostream>
using namespace std;
// polymorphism - mulitple forms
class Student{
    public: 
    // method overloading - same name but different parameters
    void displayStudent(){
        cout<<"undefined";

    }
    void displayStudent(string name , int rollno){
        cout<<name << endl;
        cout<<rollno << endl;

    }
    void displayStudent(string name , int rollno ,char grade){
        cout<<name << endl;
        cout<<rollno << endl;
        cout<<grade << endl;
    }
};
int main(){
    Student jatin;
    Student man;
    Student hetarth;
    jatin.displayStudent();
    hetarth.displayStudent("hetarth", 22);
    man.displayStudent("man", 22, 'A');
}
