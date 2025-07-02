#include <iostream>

// Using namespace std is generally fine for small programs and competitive programming,
// but for larger projects, it's often recommended to qualify names (e.g., std::cout).
using namespace std;

// Represents a single node in the linked list
class Node {
public:
    int data;     // The data stored in the node
    Node* next;   // Pointer to the next node in the list

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        next = nullptr; // Initialize next to nullptr by default
    }
};

// Represents the linked list itself
class LinkedList {
private: // It's good practice to make member variables private
    Node* head; // Pointer to the first node in the list
    Node* tail; // Pointer to the last node in the list

public:
    // Constructor to initialize an empty linked list
    LinkedList() {
        head = nullptr; // Both head and tail are null for an empty list
        tail = nullptr;
    }

    // Method to add a new node to the front of the list
    void push_front(int val) {
        // Create a new node with the given value
        Node* n1 = new Node(val);

        // Case 1: The list is currently empty
        if (head == nullptr) { // Corrected: Used '==' for comparison
            head = n1; // The new node is both the head and the tail
            tail = n1;
            return;    // Exit the function
        }
        // Case 2: The list is not empty
        else {
            n1->next = head; // The new node points to the current head
            head = n1;       // The new node becomes the new head
        }
    }

    // Method to print all elements in the linked list
    void printl() {
        Node* temp = head; // Start from the head of the list

        // Loop through the list until temp becomes nullptr (i.e., beyond the last node)
        while (temp != nullptr) { // Corrected: Loop until temp is nullptr to print the last element
            cout << temp->data << " "; // Print the data of the current node
            temp = temp->next;         // Move to the next node
        }
        cout << endl; // Print a newline character at the end for better formatting
    }

    void push_back(int val){
        Node* n1 = new Node(val);

        if (head == nullptr){
            head = n1;
            tail = n1;
            return;
        }
        else {
            tail->next = n1;
            tail = n1;
        }
    }

    void pop_front(){
        Node* temp = head;
        if (head == nullptr){
            cout << "No element to be removed" << endl;

        }
        else {
            int pop_no = head->data;
           
            head = head->next;
            temp->next = nullptr;

        }
    }

    void pop_back(){
        Node* temp = head;
        if (head == nullptr){
            cout << "No element to be removed" << endl;
        }
        else {
            
            while(temp->next != tail){
            
                temp = temp->next;
            }
            temp->next = NULL;
            delete tail;
            tail = temp;
        }
    }
    
    void insert(int val,int pos){
        Node* newNode = new Node(val);
        Node* temp = head;
        if(pos <0) {
            cout << "Invalid index acccesed" << endl;
        }
        else if (pos ==0) {
            push_front(val);
        }
        else {
            for(int i=0;i<pos-1;i++){
                if (temp == NULL){
                    cout << "Invalid pos assigned" << endl;
                    return;
                }
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        }
        
    }
    
    int search(int key){
        Node* temp = head;
        int index = 0;
        while(temp->next != NULL){
            if (temp->data == key){
                cout << "The key has been found" << endl;
                return index;
            }
            index++;
            temp = temp->next;
        }
        if (temp->next == NULL){
            if(temp->data == key){
                cout << "The key has been found" << endl;
                return index++;
            }
        }
        else{
            cout << "The key not found" <<endl;
            return 0;
        }
        
        
    }

    int size(){
        Node* temp = head;
        int length = 0;
        while(temp->next != NULL){
            length++;
            temp = temp->next;
            
        }
        return length+1;

    }
    // Destructor to free allocated memory when the LinkedList object is destroyed
    // This prevents memory leaks.
    ~LinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* next_node = current->next;
            delete current;
            current = next_node;
        }
        head = nullptr; // Ensure head and tail are null after deletion
        tail = nullptr;
    }
};

int main() {
    LinkedList l1;

    cout << "Pushing elements to the front:" << endl;
    l1.push_front(2); // List: 2
    l1.push_front(3); // List: 3 -> 2
    l1.push_front(4); // List: 4 -> 3 -> 2
    l1.push_front(5); // List: 5 -> 4 -> 3 -> 2
    l1.push_back(10);
    l1.push_front(80);
    l1.insert(11,3);
    int number;
    cout << "Enter Number to be searched" << endl;
    cin >> number;
    cout << l1.search(number) << endl;
    cout << "The size of the LinkedList is: " << l1.size() << endl;

    cout << "Printing the linked list:" << endl;
    l1.printl(); // Expected output: 5 4 3 2

    return 0;
}