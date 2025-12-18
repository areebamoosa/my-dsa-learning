# Linked List

In C++, a linked list is a linear data structure that allows the users to store data in non-contiguous memory locations.

A linked list is defined as a collection of nodes where each node consists of two members which represents its value and a next/previous pointer which stores the address for the next/previous node.

Basically Linked list is a collection of nodes connected by pointers.

Unlike arrays → memory is not contiguous

Allows dynamic memory allocation → linked lists can
easily grow or shrink during runtime

### Types of Linked Lists

Based on the structure of linked lists, they are classified in three types

1. Singly Linked List → Each node points to next

2. Doubly Linked List → Two pointers: next & previous

3. Circular Linked List → Last node points back to head

## 1. Singly Linked List in C++

The singly linked list is the simplest form of linked list in which the node contains two members data and a next pointer that stores the address of the next node.

Each node in a singly linked list is connected through the next pointer and the next pointer of the last node points to NULL denoting the end of the linked list.

### Representation

Singly linked list can be represented as a pointer to the first node, where each node contains:

**Data:** Actual information is stored.

**Next:** Pointer to the next node.

```cpp
// Structure to represent the Singly linked list
struct Node {

  // Data field - can be of any type
  int data;

  // Pointer to the next node
  struct Node* next;

  Node(int d){
    data = d;
    next = NULL;
  }
  //The constructor is like a shortcut tells C++ : “Whenever a new Node is made, fill in its data with the given value and set its next to NULL
}
```

## Basic Operations for Singly Linked List

| Operation Type       | Description                                                | Time Complexity | Space Complexity |
| -------------------- | ---------------------------------------------------------- | --------------- | ---------------- |
| **Insertion**        |                                                            |                 |                  |
| At Beginning         | Insert a new node at the start of a linked list.           | O(1)            | O(1)             |
| At the End           | Insert a new node at the end of the linked list.           | O(N)            | O(1)             |
| At Specific Position | Insert a new node at a specific position in a linked list. | O(N)            | O(1)             |
| **Deletion**         |                                                            |                 |                  |
| From Beginning       | Delete a node from the start of a linked list.             | O(1)            | O(1)             |
| From the End         | Delete a node at the end of a linked list.                 | O(N)            | O(1)             |
| A Specific Node      | Delete a node from a specific position of a linked list.   | O(N)            | O(1)             |
| **Traversal**        |                                                            |                 |                  |
| Traverse             | Traverse the linked list from start to end.                | O(N)            | O(1)             |
