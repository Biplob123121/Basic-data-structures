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
void min_max(Node *head)
{
    Node *temp = head;
    int mn = INT_MAX;
    int mx = INT_MIN;
    for (Node *i = temp; i != NULL; i = i->next)
    {
        if (mn > i->val)
        {
            mn = i->val;
        }
        if (mx < i->val)
        {
            mx = i->val;
        }
    }
    cout << mn << " " << mx << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
            break;
        input_linked_list(head, tail, n);
    }
    min_max(head);
    return 0;
}