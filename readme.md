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
