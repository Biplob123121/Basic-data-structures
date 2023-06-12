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
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void print_link_list(Node *head)
{
    cout << "Your Link list: " << endl;
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
        cout << "Option 1: Inert at tail" << endl;
        cout << "Option 2: Print the Link List" << endl;
        cout << "Option 3: Close the program" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            int val;
            cin >> val;
            insert_at_tail(head, val);
        }
        else if (op == 2)
        {
            print_link_list(head);
        }
        else if (op == 3)
        {
            break;
        }
    }
    return 0;
}