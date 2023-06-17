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
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

// normal printing the linked list

// void print_linked_list(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->val << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// print linked list use recursion

// void print_use_recursion(Node *n)
// {
//     if (n == NULL)
//         return;
//     cout << n->val << " ";
//     print_use_recursion(n->next);
// }

// print reversely
void print_reverse(Node *n)
{
    if (n == NULL)
        return;
    print_reverse(n->next);
    cout << n->val << " ";
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    // print_linked_list(head);
    // print_use_recursion(head);
    print_reverse(head);
    return 0;
}