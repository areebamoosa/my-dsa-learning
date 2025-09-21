// Search by Value
// Check if a value exists in the CLL.
// Example: Search 20 in 10 → 20 → 30 → (back to 10) → Found.

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        data = d;
        next = NULL;
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

    // Searching a value
    int search_val(int val)
    {
        if (head == NULL)
        {
            return -1;
        }
        Node *temp = head;
        int idx = 0;

        do
        {
            if (temp->data == val)
            {
                return idx;
            }

            temp = temp->next;
            idx++;

        } while (temp != head);
        return -1;
    }

    // Push front function
    void push_front(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = tail = newNode;
            newNode->next = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
    }

    // Printing ll function
    void print_ll()
    {
        Node *temp = head;
        int idx = 0;
        do
        {
            cout << temp->data << " -> ";
            temp = temp->next;
            idx++;
        } while (temp != head);
        cout << "(back to " << head->data << ")" << endl;
    }
};

int main()
{
    linkedList ll;

    ll.push_front(30);
    ll.push_front(20);
    ll.push_front(10);

    cout << "The Nodes in linkedlist are : " << endl;
    ll.print_ll();

    int result = ll.search_val(20);

    if (result != -1)
    {
        cout << "Value found at index :  " << result << endl;
    }
    else
    {
        cout << "Value not found in the linkedlist" << endl;
    }

    return 0;
}