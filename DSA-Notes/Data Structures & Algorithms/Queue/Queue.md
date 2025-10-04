# Queue

Queue is a linear data structure that follows FIFO (First In First Out) Principle, so the first element inserted is the first to be popped out.

So, Queue is like a line of people waiting to purchase tickets, where the first person in line is the first person served. (i.e. First Come First Serve).

### Basic Terminologies of Queue

**Front:** Position of the entry in a queue ready to be served, that is, the first entry that will be removed from the queue, is called the front of the queue. It is also referred as the head of the queue.

**Rear:** Position of the last entry in the queue, that is, the one most recently added, is called the rear of the queue. It is also referred as the tail of the queue.

**Size:** Size refers to the current number of elements in the queue.

**Capacity:** Capacity refers to the maximum number of elements the queue can hold.


### Queue Operations

**Enqueue:** Adds an element to the end (rear) of the queue. If the queue is full, an overflow error occurs.

**Dequeue:** Removes the element from the front of the queue. If the queue is empty, an underflow error occurs.

**Peek/Front:** Returns the element at the front without removing it.

**Size:** Returns the number of elements in the queue.

**isEmpty:** Returns true if the queue is empty, otherwise false.

**isFull:** Returns true if the queue is full, otherwise false.

---

- Insertion is allowed only at the rear (back).
- Deletion is allowed only from the front.
- Can be implemented using a linked list or a circular array.

## Implementation of Linear Queue

### Declaration of Queue using Linked List
To implement a queue with a linked list, we maintain:

1. A Node structure/class that contains:

- data → to store the element.
- next → pointer/reference to the next node in the queue.

2. Two pointers/references:

- front → points to the first node (head of the queue).
- rear → points to the last node (tail of the queue).

### Declaration of Queue Using Array:

To implement a queue with an array, we maintain:

- A fixed-size array arr[] to store the elements.

- A variable size to track the current number of elements in the queue.
- A variable capacity to represent the maximum number of elements the queue can hold.

## Implementation of Circular Queue Using Arrays

A circular queue is a linear data structure that overcomes the limitations of a simple queue. 

In a normal array implementation, dequeue() can be O(n) or we may waste space. Using a circular array, both enqueue() and dequeue() can be done in O(1).

