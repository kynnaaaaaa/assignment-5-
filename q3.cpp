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


void findMiddle() {
    Node* slow = head;
    Node* fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;          
        fast = fast->next->next;   
    }
    if (slow != NULL)
        cout << "Middle: " << slow->data << "\n";
}

int main() {
    insert(5); insert(4); insert(3); insert(2); insert(1);
    findMiddle();
}
