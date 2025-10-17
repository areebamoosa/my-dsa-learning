# Stack

Stack is a linear data structure that follows LIFO (Last In First Out) Principle, the last element inserted is the first to be popped out.

The LIFO principle means that the last element added to a stack is the first one to be removed.

- New elements are always pushed on top.
- Removal (pop) also happens only from the top.

### Real-world examples of LIFO:

**Stack of plates** – The last plate placed on top is the first one you pick up.

**Shuttlecock box** – The last shuttlecock inserted is the first one taken out, since both operations happen from the same end.

### Basic Terminologies of Stack

**Top:** The position of the most recently inserted element. Insertions (push) and deletions (pop) are always performed at the top.

**Size:** Refers to the current number of elements present in the stack.

## Types of Stack:

### Fixed Size Stack

- A fixed size stack has a predefined capacity.
- Once it becomes full, no more elements can be added (this causes overflow).
- If the stack is empty and we try to remove an element, it causes underflow.
- Typically implemented using a static array.

**Example:** Declaring a stack of size 10 using an array.

### Dynamic Size Stack

- A dynamic size stack can grow and shrink automatically as needed.
- If the stack is full, its capacity expands to allow more elements.
- As elements are removed, memory usage can shrink as well.
- Can be implemented using:

1. **Linked List** → grows/shrinks naturally.

2. **Dynamic Array** (like vector in C++ or ArrayList in Java) → resizes automatically.

**Example:** Stack implementation using linked list or resizable array.

## Common Operations on Stack:

In order to make manipulations in a stack, there are certain operations provided to us.

**push()** to insert an element into the stack.

**pop()** to remove an element from the stack.

**top()** Returns the top element of the stack.

**isEmpty()** returns true if stack is empty else false.

**size()** returns the size of the stack.

## Implementations of Stack

### Stack - Array Implementation

A stack is a linear data structure that follows the Last-In-First-Out (LIFO) principle.

It can be implemented using an array by treating the end of the array as the top of the stack.

#### Declaration of Stack using Array

A stack can be implemented using an array where we maintain:

- An integer array to store elements.
- A variable capacity to represent the maximum size of the stack.
- A variable top to track the index of the top element. Initially, top = -1 to indicate an empty stack.

```
top = -1;

This initializes the top index of the stack.

top keeps track of the position of the last inserted element.

At the beginning, the stack is empty, so top = -1.

When you push the first element, top becomes 0.
```

### Stack - Linked List Implementation

A stack is a linear data structure that follows the Last-In-First-Out (LIFO) principle.

It can be implemented using a linked list, where each element of the stack is represented as a node. The head of the linked list acts as the top of the stack.

#### Declaration of Stack using Linked List
A stack can be implemented using a linked list where we maintain:

- A Node structure/class that contains:

 data → to store the element & next → pointer/reference to the next node in the stack.

- A pointer/reference top that always points to the current top node of the stack.
Initially, top = null to represent an empty stack.

## Pseudocode of Stack

```
Initialize:
    Stack S
    Top = -1
    MaxSize = N

Algorithm Push(x):
    if Top == MaxSize - 1:
        print "Stack Overflow"
    else:
        Top = Top + 1
        S[Top] = x

Algorithm Pop():
    if Top == -1:
        print "Stack Underflow"
        return None
    else:
        x = S[Top]
        Top = Top - 1
        return x

Algorithm Peek():
    if Top == -1:
        print "Stack is Empty"
        return None
    else:
        return S[Top]

Algorithm isEmpty():
    return Top == -1

Algorithm isFull():
    return Top == MaxSize - 1
```
