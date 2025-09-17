#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
Node* head = NULL;

// Insert at head
void insert(int x) {
    Node* n = new Node;
    n->data = x;
    n->next = head;
    head = n;
}


void deleteKey(int key) {
    int cnt = 0;
   
    while (head != NULL && head->data == key) {
        head = head->next;
        cnt++;
    }
    
    Node* t = head;
    while (t != NULL && t->next != NULL) {
        if (t->next->data == key) {
            t->next = t->next->next; // bypass node
            cnt++;
        } else {
            t = t->next;
        }
    }
    cout << "Deleted " << cnt << " times\n";
}

int main() {
    
    insert(1); insert(3); insert(1); insert(2); insert(1);
    deleteKey(1);
}
