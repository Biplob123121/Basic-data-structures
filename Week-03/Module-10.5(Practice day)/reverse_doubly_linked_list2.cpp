#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *prev;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
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
    newNode->prev = tail;
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
int count_length(Node *head)
{
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
void reverse_linked_list(Node *head, Node *tail)
{
    Node *f = head;
    Node *b = tail;
    int length = count_length(head);
    for (int i = 0; i < length / 2; i++)
    {
        swap(f->val, b->val);
        f = f->next;
        b = b->prev;
    }
    // while (i != j && i->next != j)
    // {
    //     swap(i->val, j->val);
    //     i = i->next;
    //     j = j->prev;
    // }
    // swap(i->val, j->val);
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
    reverse_linked_list(head, tail);
    print_linked_list(head);
    return 0;
}