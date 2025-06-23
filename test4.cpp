#include <iostream>
using namespace std;
// It prevents name conflicts in different packages (::) This is known as scope resolution operator
namespace first {
    int x = 2;
};

namespace second {
    int x = 7;
};

class Box{
public:
    int length;
    int breadth;
    int height;
    // Parametrised constructor
    Box(int len,int bre,int hei){
        length = len;
        breadth = bre;
        height = hei;
    } 

    
    // Method 
    void volume(){
        int volume = this->length*this->breadth*this->height;
        cout << "The Volume of the Box is: " << volume << endl;
    }
};
// this is a pointer which you can used to refer the instance
int main(){
    Box b1(10,20,40);
    cout << b1.length <<endl;
    cout << b1.breadth <<endl;
    cout << b1.height <<endl;
    cout << first::x << endl;
    cout << second::x << endl;
    b1.volume();

    return 0;
}