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
void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void insert_at_any_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
void print_linked_list(Node *head)
{
    cout << "Your Link List: ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1 : Insert at tail." << endl;
        cout << "Option 2: Print the Link list." << endl;
        cout << "Option 3: Close the program." << endl;
        cout << "Option 4: Insert at any position." << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            int val;
            cout << "Insert the value: ";
            cin >> val;
            insert_at_tail(head, val);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            break;
        }
        else if (op == 4)
        {
            int pos, val;
            cout << "Enter the position: ";
            cin >> pos;
            cout << "Enter the value: ";
            cin >> val;
            insert_at_any_position(head, pos, val);
        }
    }

    return 0;
}