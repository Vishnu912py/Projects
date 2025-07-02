#include <iostream>
//  Word-RAM architecture(designed the memory)
using namespace std;
struct box {
    int length;
    int breadth;
    int height;
};

int main() {
    //& is a address operator
    //* is a valueof operator
    //declare a structure variable
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << arr << endl;
    int* index = &arr[0];
    cout << index << endl;
    struct box b1 = {10,20,30};
    cout << b1.length << endl;
    cout << b1.breadth << endl;
    cout << b1.height << endl;
    //structure pointer 
    struct box* b2 = &b1;
    int* len = &b1.length;
    int* bre = &b1.breadth;
    int* hei = &b1.height;
    cout << len << endl;
    cout << bre << endl;
    cout << hei << endl;
    cout << b2 << endl;
    cout << b2->breadth << " " << b2->height << " " << b2->length << endl;
    cout << (*b2).breadth << endl;
}