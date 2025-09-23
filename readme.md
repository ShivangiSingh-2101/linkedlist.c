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
