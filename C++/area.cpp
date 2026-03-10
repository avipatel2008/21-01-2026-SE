// create a class called area that has multiple constructors if given one value to constructor it should print the area of square if given two sides it should print the area of rectangle and if given three sides it should print the area of triangle.

#include <iostream>
using namespace std;

class area{
    public:

    area (int a){
        cout << " area of square " << a*4 << endl;
    }
    area ( int a, int b){
        cout << " area of rectangle " << a*b << endl;
    }
    area (int a, int b,int c){
        cout << " area of square " << a*b*c << endl;
    }
};

int main(){
    int a;
    cout << "enter square value" << endl;
    cin >> a;
    area a1(a);
    area a2(5,6);
    area a3(5,6,7);
    return 0;
}

