# AVL - Tree

An AVL Tree is a self-balancing Binary Search Tree (BST).
That means it keeps itself balanced automatically after every insertion or deletion, so the tree never becomes too tall or uneven.

In a normal BST, if you keep inserting numbers in sorted order (like 1, 2, 3, 4, 5),the tree becomes unbalanced — like a linked list — which makes searching slow.

An AVL Tree fixes that by rotating nodes whenever the tree becomes unbalanced.

### Balance Factor

```
Balance Factor = height(left subtree) - height(right subtree)
```

**Allowed values:** -1, 0, or +1

If the balance factor goes beyond that (like 2 or -2), the tree performs rotations to fix itself.

There are 4 types of rotations:

1. Right Rotation (LL Case)
2. Left Rotation (RR Case)
3. Left-Right Rotation (LR Case)
4. Right-Left Rotation (RL Case)

These rotations rearrange nodes to bring the balance factor back to -1, 0, or +1.

#### Why Use AVL Tree?

Because it always stays balanced:

- Search, Insert, and Delete operations take **O(log n)** time.
- Much faster than an unbalanced BST (which can go up to **O(n)** time).

## Implementation of Insert Function

```
1. Start at the root.

2. Compare the new value with the current node.
    If less, move to the left child. If greater, move to the right child.
    Repeat until reaching a null position.

3. Insert the new node at this position.

4. Update the height of the current node.

5. Calculate the balance factor of the current node.
   If the balance factor is >1 or <-1, perform necessary rotations:

   Left-Left case: Right rotation
   Left-Right case: Left rotation on left child, then right rotation.
   Right-Right case: Left rotation
   Right-Left case: Right rotation on right child, then left rotation.

6. Repeat steps 6-8 while moving back up to the root
```

## Implementation of Delete Function

```
1. Start at the root.

2. Search for the node to delete.

   If the node is a leaf, simply remove it.
   If the node has one child, replace it with its child.
   If the node has two children:
   Find the in-order successor (minimum value in right subtree).
   Replace the node to be deleted with the in-order successor.
   Delete the in-order successor from its original position.

3. Update the height of the current node.

4. Calculate the balance factor of the current node.
If the balance factor is >1 or <-1, perform necessary rotations:

   Left-Left case: Right rotation
   Left-Right case: Left rotation on left child, then right rotation
   Right-Right case: Left rotation
   Right-Left case: Right rotation on right child, then left rotation

5.Repeat steps 6-8 while moving back up to the root.
```
