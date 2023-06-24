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
void input_linked_list(Node *&head, Node *&tail, int val)
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
void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void reverse_linked_list(Node *&head, Node *curr)
{
    if (curr->next == NULL)
    {
        head = curr;
        return;
    }
    reverse_linked_list(head, curr->next);
    curr->next->next = curr;
    curr->next = NULL;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        input_linked_list(head, tail, v);
    }
    print_linked_list(head);
    reverse_linked_list(head, head);
    print_linked_list(head);
    return 0;
}