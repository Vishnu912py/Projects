#include <iostream>
class Node {
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};

class LinkedList {
    Node* head;
    Node* tail;
public:
    LinkedList() {
        head = tail = nullptr;
    }
    void push_front(int val){
        
    }



}
int main() {
    
}