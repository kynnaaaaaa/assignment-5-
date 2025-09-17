#include <iostream>
using namespace std;


struct Node {
    int data;     
    Node* next;   
};

Node* head = NULL;


void insertEnd(int x) {
    Node* n = new Node;  
    n->data = x;
    n->next = NULL;
    if (head == NULL) {  
        head = n;        
    } else {
        Node* t = head;
        while (t->next != NULL) { 
            t = t->next;
        }
        t->next = n;      
    }
}


void deleteVal(int x) {
    Node* t = head;
    Node* p = NULL;
    while (t != NULL && t->data != x) { 
        p = t;
        t = t->next;
    }
    if (t == NULL) { 
        cout << "Not Found\n";
    } else {
        if (p == NULL) head = t->next;   
        else p->next = t->next;         
        delete t;
        cout << "Deleted\n";
    }
}


void searchVal(int x) {
    Node* t = head;
    while (t != NULL) {
        if (t->data == x) {
            cout << "Found\n";
            return;
        }
        t = t->next;
    }
    cout << "Not Found\n";
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
    int ch, x;
    while (1) {
        cout << "\n1.Insert 2.Delete 3.Search 4.Display 5.Exit\n";
        cin >> ch;
        if (ch == 1) { cin >> x; insertEnd(x); }
        else if (ch == 2) { cin >> x; deleteVal(x); }
        else if (ch == 3) { cin >> x; searchVal(x); }
        else if (ch == 4) display();
        else return 0;
    }
}
