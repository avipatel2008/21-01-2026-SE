#include <iostream>
using namespace std;

class Animal {
    public: 
    void speak(){
        cout << "Animal can speak";
    }
};

class cat : public Animal {
    public:
    void speak(){
        cout << "Meow it can speak english";
    }
};

int main(){
    Animal *cat = new cat();
    
    pinky->speak();
}