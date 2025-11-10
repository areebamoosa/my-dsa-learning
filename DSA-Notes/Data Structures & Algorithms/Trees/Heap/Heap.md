# Heap

Heap is a complete Binary Tree that satisfies a Heap's property.

There are two types of Heap :

1. Max Heap
2. Min Heap

## INSERTION - Max Heap

1. Insert the new value at the end of the heap (bottom level, far right).

2. Compare it with its parent:

- If it’s greater than the parent, swap them.

3. Repeat until:

- The element is no longer greater than its parent, or it becomes the root.

## DELETION - Max Heap

1. Replace the root or element to be deleted by the last element.

2. Delete the last element from the Heap.

3. Since, the last element is now placed at the position of the root node. So, it may not follow the heap property. Therefore, heapify the last node placed at the position of root