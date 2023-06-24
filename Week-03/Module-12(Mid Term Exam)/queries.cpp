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
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insert_at_tail(Node *&head, Node *&tail, int val)
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
void insert_at_any_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next->prev = newNode;
    temp->next = newNode;
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
void print_linked_list(Node *head)
{
    Node *temp = head;
    if (temp != NULL)
    {
        cout << "L -> ";
    }
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void print_reverse(Node *tail)
{
    Node *temp = tail;
    if (temp != NULL)
    {
        cout << "R -> ";
    }
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int query;
    cin >> query;
    while (query--)
    {
        int x, v;
        cin >> x >> v;
        int size = count_length(head);
        if (x == 0)
        {
            insert_at_head(head, tail, v);
        }
        else if (x == size)
        {
            insert_at_tail(head, tail, v);
        }
        else if (x > 0 && x < size)
        {
            insert_at_any_position(head, x, v);
        }
        else if (x > size)
        {
            cout << "Invalid" << endl;
        }

        if (x >= 0 && x <= size)
        {
            print_linked_list(head);
            print_reverse(tail);
        }
    }
    return 0;
}