/* 
A Data Structure is a way to organize data inorder for efficiently accesing te data and avoiding wastage of computer memory
An Algorithm is a way to perform different operations in a data structure 


*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Example of a vector data structure
    vector<int> numbers = {1, 2, 3, 4, 5};

    // Accessing elements in the vector
    cout << "Elements in the vector: ";
    // this is a for-each loop to iterate through the vector
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    // inorder to check the size of the vector
    cout << "Size of the vector: " << numbers.size() << endl;
    // Adding an element to the vector
    numbers.push_back(6);
    cout << "After adding an element: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}