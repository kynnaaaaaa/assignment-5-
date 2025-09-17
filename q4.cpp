#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
Node* head = NULL;


void insert(int x) {
    Node* n = new Node;
    n->data = x;
    n->next = head;
    head = n;
}


void reverseList() {
    Node* prev = NULL;
    Node* curr = head;
    Node* nxt = NULL;
    while (curr != NULL) {
        nxt = curr->next;   
        curr->next = prev;  
        prev = curr;       
        curr = nxt;         
    }
    head = prev;
}


void display() {
    Node* t = head;
    while (t != NULL) {
        cout << t->data << " ";
        t = t->next;
    }
    cout << "\n";
}

int main() {
    insert(1); insert(2); insert(3); insert(4);
    cout << "Original: "; display();
    reverseList();
    cout << "Reversed: "; display();
}
