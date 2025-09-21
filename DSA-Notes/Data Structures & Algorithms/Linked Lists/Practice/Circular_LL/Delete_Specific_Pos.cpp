// Delete at Position
// Delete the node at a given position.
// Example: 10 → 20 → 30 → 40 → (back to 10) → delete at pos 2:  10 → 20 → 40 → (back to 10).

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

    // Delete at specific position function
    void delete_val(int pos)
    {

        Node *temp = head;

        if (head == NULL)
        {
            cout << "The linkedlist is empty" << endl;
            return;
        }
        if (pos < 0)
        {
            cout << "Invalid position" << endl;
            return;
        }
        if (pos == 0)
        {
            if (head == tail)
            {
                delete head;
                head = tail = NULL;
                return;
            }

            tail->next = temp->next;
            head = temp->next;
            temp->next = NULL;
            delete temp;
            return;
        }
        if (pos > 0)
        {
            for (int i = 0; i < pos - 1; i++)
            {
                temp = temp->next;
                // If we looped back to head, pos is invalid
                if (temp == head)
                {
                    cout << "Position out of range" << endl;
                    return;
                }
            }
            Node *delNode = temp->next;
            temp->next = delNode->next;
            if (delNode == tail)
            {
                tail = temp;
            }
            delete delNode;
        }
        // If we deleted the tail, update tail
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

    // Print ll function
    void print_ll()
    {
        Node *temp = head;

        do
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);

        cout << "(back to " << head->data << " )" << endl;
    }
};

int main()
{
    linkedList ll;
    ll.push_front(40);
    ll.push_front(30);
    ll.push_front(20);
    ll.push_front(10);

    cout << "Original linked list : " << endl;
    ll.print_ll();

    cout << "After deleting the node at position 2, Now the linkedlist is : " << endl;
    ll.delete_val(2);

    ll.print_ll();

    return 0;
}