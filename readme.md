PROGRAM 1

Aim

To create a simple singly linked list node using a class in C++ and demonstrate the initialization of its data members.

Theory

A linked list is a linear data structure consisting of nodes where each node contains two parts:
Data: Stores the actual value.
Pointer: Points to the next node in the sequence.
A singly linked list allows traversal in only one direction, from the first node to the last node. The last node points to NULL indicating the end of the list.
In this program, we define a class Node that represents a node in the linked list. Each node stores an integer value (val) and a pointer to the next node (next). The constructor initializes the node's value and sets the next pointer to NULL.

Algorithm

- Start
- Define a class named Node with:
- An integer data member val to store the node's value.
- A pointer next of type Node* to point to the next node.
- Create a constructor for the class Node that:
- Takes an integer input data.
- Initializes val with data.
- Sets next to NULL.
- In the main function:
- Create a new node dynamically using new Node(1) with value 1.
- Print the value stored in the node (val).
- Print the next pointer (which should be NULL).
- End


PROGRAM 2


Aim

To implement a singly linked list in C++ and perform insertion at the head of the list, followed by displaying the contents of the list after each insertion.

Theory

A linked list is a dynamic data structure consisting of nodes where each node stores data and a pointer to the next node. Unlike arrays, linked lists allow efficient insertion and deletion at any position without shifting elements.
Insertion at head means adding a new node at the beginning of the list. This involves:
Creating a new node.
Making the new node’s next pointer point to the current head.
Updating the head pointer to the new node.
This operation has a time complexity of O(1) because no traversal is needed.
The program uses a class Node to define the linked list nodes and two functions:
insert_head to insert nodes at the beginning.
display to traverse and print the list.

Algorithm

- Start
- Define a class Node with:
- Integer data to store node value.
- Pointer next to the next node.
- Create a constructor for Node to initialize data and set next to NULL.
- Define insert_head function:
- Create a new node with given data.
- Set the new node’s next to the current head.
- Update head to point to the new node.
- Define display function:
- Start from head.
- Traverse each node until NULL.
- Print the node’s data followed by ->.
- At the end, print NULL.
- In main:
- Initialize head to NULL.
- Insert nodes with values 1, 2, and 3 at head.
- After each insertion, call display to show the list.
- End

Program 3
Aim
To implement insertion of a node at the end of a singly linked list in C++ and display the linked list.


Theory

A Linked List is a linear data structure where elements (nodes) are stored at non-contiguous memory locations and are connected using pointers.
Each node consists of:
Data → holds the value.
Next → pointer to the next node
In insertion at the end:
A new node is created.
If the list is empty, the new node becomes the head.
Otherwise, we traverse to the last node (where next == NULL) and link it to the new node.
The new node’s ext is set to NULL.
Time Complexity:
O(n), because we may need to traverse the entire list to reach the last node.
Space Complexity:
O(1), as we only use an extra pointer for traversal.


Algorithm 
- Create a new node with given data.
- Set new_node->next = NULL.
- If the linked list is empty (head == NULL):
- Set head = new_node.
- Stop.
- Otherwise:
- Initialize a temporary pointer temp = head.
-Traverse the list until temp->next == NULL.
- Set temp->next = new_node.
- End.
