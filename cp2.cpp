/* 
A Data Structure is a way to organize data inorder for efficiently accesing te data and avoiding wastage of computer memory
An Algorithm is a way to perform different operations in a data structure 


*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Example of a vector data structure(dynamic array)
    vector<int> numbers = {1, 2, 3, 4, 5};
    int *start = &numbers[0];
    int *end = &numbers[numbers.size() - 1];
    
    // Accessing elements in the vector
    cout << "Elements in the vector: ";
    // this is a for-each loop to iterate through the vector
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    // inorder to check the size of the vector
    cout << "Size of the vector: " << numbers.size() << endl;
    /*
    all the methods inside the vector class
    1. push_back() - adds an element to the end of the vector
    2. pop_back() - removes the last element of the vector
    3. size() - returns the number of elements in the vector
    4. clear() - removes all elements from the vector
    5. empty() - checks if the vector is empty
    6. at() - accesses an element at a specific index
    7. front() - accesses the first element of the vector
    8. back() - accesses the last element of the vector
    9. insert() - inserts an element at a specific position
    10. erase() - removes an element at a specific position
    11. resize() - changes the size of the vector
    12. reserve() - reserves space for a certain number of elements
    13. shrink_to_fit() - reduces the capacity of the vector to fit its size
    14. swap() - swaps the contents of two vectors
    15. begin() - returns an iterator to the first element
    16. end() - returns an iterator to the past-the-end element
    17. rbegin() - returns a reverse iterator to the last element
    18. rend() - returns a reverse iterator to the element before the first element
    19. assign() - assigns new values to the vector
    20. front() - returns a reference to the first element
    21. back() - returns a reference to the last element
    22. data() - returns a pointer to the underlying array
    23. capacity() - returns the number of elements that can be held in the currently
    // allocated storage
    24. max_size() - returns the maximum number of elements that the vector can hold
    25. emplace() - constructs an element in-place at a specific position
    26. emplace_back() - constructs an element in-place at the end of the
    vector
    */
    // Adding an element to the vector
    numbers.push_back(6);
    cout << "After adding an element: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}