// Shivangi Singh
// 24070123148
// B3

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Function to insert node at the end
void insert_end(Node*& head, int val) {
    Node* new_node = new Node(val);

    if (head == NULL) {   // if list is empty
        head = new_node;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {   // traverse to last node
        temp = temp->next;
    }
    temp->next = new_node;   // link new node at end
}

// Function to display linked list
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;  // initially list is empty

    insert_end(head, 10);
    insert_end(head, 20);
    insert_end(head, 30);
    insert_end(head, 40);

    cout << "Linked List after inserting at end:" << endl;
    display(head);

    return 0;
}
/*Output
Linked List after inserting at end:
10 -> 20 -> 30 -> 40 -> NULL


*/
