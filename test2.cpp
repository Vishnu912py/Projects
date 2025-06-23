#include <iostream>
#include <vector>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    cout << "hello" << endl; // Added endl for a newline after "hello"
    int arr[5] = {10, 34, 2, 56, 32};

    // Calculate the number of elements in the array
    // This is a safer way to get the array size in C-style arrays
    int n = sizeof(arr) / sizeof(arr[0]); 

    // Outer loop for passes
    for (int i = 0; i < n - 1; i++) {
        // Inner loop for comparisons and swaps
        // The -i-1 ensures we don't compare already sorted elements at the end
        for (int j = 0; j < n - i - 1; j++) {
            // For ascending order, if the current element is greater than the next
            if (arr[j] > arr[j+1]) { 
                // Swap the elements
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout << "Sorted array (ascending):" << endl;
    // Loop to print the sorted array
    for (int i = 0; i < n; i++) {
        cout <<"The elements are"<< arr[i] << endl;
    }

    int number;
    cin>>number;
    if (number %2 ==0){
        cout<<"The number is even"<<endl;

    }
    else {
        cout<<"The number is odd"<<endl;
    }
    int flag =0;
    for(int i=2;i<(int)sqrt(number);i++){
        if (number%i == 0){
            flag = 1;
            break;
        }
    }
    if (flag){
        cout<<"It is a composite number"<<endl;

    }
    else{
        cout<<"It is a prime number"<<endl;
    }
    


    return 0;
     

   
}