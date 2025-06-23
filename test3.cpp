#include <iostream>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int* ptr = arr; // ptr points to the first element (10)

    std::cout << "Value at ptr: " << *ptr << std::endl; // Output: 10

    ptr++; // ptr now points to the second element (20)
    std::cout << "Value after ptr++: " << *ptr << std::endl; // Output: 20

    ptr = ptr + 2; // ptr now points to the fourth element (40)
    std::cout << "Value after ptr + 2: " << *ptr << std::endl; // Output: 40

    int* ptr2 = &arr[0];
    std::cout << "Difference between ptr and ptr2: " << ptr - ptr2 << std::endl; // Output: 3 (ptr points to 40, ptr2 to 10)

    return 0;
}