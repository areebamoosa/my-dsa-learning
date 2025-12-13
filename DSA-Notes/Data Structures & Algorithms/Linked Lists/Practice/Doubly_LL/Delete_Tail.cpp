// Delete Tail:
// Remove the last node.
// Example: 10 ⇄ 20 ⇄ 30 → delete tail → 10 ⇄ 20.

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int d)
    {
        data = d;
        prev = next = NULL;
    }
};

class linkedList
{
    Node *head;
    Node *tail;

public:
    linkedList()
    {
        head = tail = NULL;
    }

    // Push front function
    void push_front(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    // Delete at tail function
    void deleteTail()
    {

        if (head == NULL)
            return;

        if (head->next == NULL)
        {
            delete head;
            head = NULL;
            return;
        }

        Node *temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        Node *prevNode = temp->prev;
        prevNode->next = NULL;

        delete temp;
    }

    // Print ll function
    void print_ll()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ⇄ ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    linkedList ll;
    ll.push_front(30);
    ll.push_front(20);
    ll.push_front(10);

    cout << "Before deleting tail of linkedlist : " << endl;
    ll.print_ll();

    cout << "After deleting tail of linkedlist : " << endl;
    ll.deleteTail();

    ll.print_ll();

    return 0;
}