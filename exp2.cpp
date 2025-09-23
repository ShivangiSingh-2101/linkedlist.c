//Shivangi Singh
//2407013148
//B3
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int num) {
        data = num;
        next = NULL;
    }
};

void insert_head(Node*& head, int data) {
    Node* new_node = new Node(data);
    new_node->next = head;
    head = new_node;
}

void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";  
        temp = temp->next;
    }
    cout << "NULL" << endl;  
}

int main() {
    Node* head = NULL;

    insert_head(head, 1);  
    display(head);

    insert_head(head, 2); 
    display(head);

    insert_head(head, 3);  
    display(head);

    return 0;
}
/*Output
1->NULL
2->1->NULL
3->2->1->NULL
*/
