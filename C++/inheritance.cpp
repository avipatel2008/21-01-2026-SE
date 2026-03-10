#include <iostream>
using namespace std;

class Animal {
    public:
    void canMove(){
        cout << "Animal is moving" << endl;
    }
    void canBreathe(){
        cout << "Animal is breathing" << endl;
    }
};

class cat : public Animal {
    public:
    void canMeow(){
        cout << "cat is Meowing" << endl;
    }
};

class Fish {
    public:
    void canSwim(){
        cout << "Fish is swimming" << endl;
    }
    void canMove(){
        cout << "Animal is moving" << endl;
    }
    void canBreathe(){
        cout << "Animal is breathing" << endl;
    }
}

// less code
// code reuability
// maintainability

int main(){

}
