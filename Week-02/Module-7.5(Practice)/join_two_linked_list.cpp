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
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
            break;
        input_linked_list(head, tail, n);
    }
    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
            break;
        input_linked_list(head2, tail2, n);
    }
    cout << "First list :";
    print_linked_list(head);
    cout << "Second list :";
    print_linked_list(head2);
    tail->next = head2;
    tail = tail2;
    cout << "Joined list :";
    print_linked_list(head);
    return 0;
}