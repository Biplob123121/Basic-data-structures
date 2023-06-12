#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
void insert_at_tail(Node *head, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void insert_at_any_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << "Invalid position" << endl;
            return;
        }
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
void print_linked_list(Node *head)
{
    cout << "Your Linked list : ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void delete_head(Node *&head)
{
    if (head == NULL)
    {
        cout << "Head is not available" << endl;
        return;
    }
    Node *deletedNode = head;
    head = head->next;
    delete deletedNode;
}
void deleted_from_any_position(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << "Invalid position" << endl;
            return;
        }
    }
    if (temp->next == NULL)
    {
        cout << "Invalid position" << endl;
        return;
    }
    Node *deletedNode = temp->next;
    temp->next = temp->next->next;
    delete deletedNode;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1 : Insert at Head." << endl;
        cout << "Option 2 : Insert at Tail." << endl;
        cout << "Option 3 : Insert at any position." << endl;
        cout << "Option 4 : Print the Linked List." << endl;
        cout << "Option 5 : Delete the Head." << endl;
        cout << "Option 6 : Delete any position." << endl;
        cout << "Option 7 : Close the program." << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Enter the value : ";
            int val;
            cin >> val;
            insert_at_head(head, val);
        }
        else if (op == 2)
        {
            cout << "Enter the value : ";
            int val;
            cin >> val;
            insert_at_tail(head, val);
        }
        else if (op == 3)
        {
            int pos, val;
            cout << "Enter the position : ";
            cin >> pos;
            cout << "Enter the value : ";
            cin >> val;
            if (pos < 0)
            {
                cout << "Invalid position" << endl;
            }
            else if (pos == 0)
            {
                insert_at_head(head, val);
            }
            else
            {
                insert_at_any_position(head, pos, val);
            }
        }
        else if (op == 4)
        {
            print_linked_list(head);
        }
        else if (op == 5)
        {
            delete_head(head);
        }
        else if (op == 6)
        {
            cout << "Enter the position : ";
            int pos;
            cin >> pos;
            if (pos < 0)
            {
                cout << "Invalid position" << endl;
            }
            else if (pos == 0)
            {
                delete_head(head);
            }
            else
            {
                deleted_from_any_position(head, pos);
            }
        }
        else if (op == 7)
        {
            break;
        }
    }

    return 0;
}