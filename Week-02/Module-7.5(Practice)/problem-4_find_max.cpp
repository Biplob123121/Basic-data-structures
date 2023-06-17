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
void find_max(Node *head)
{
    Node *temp = head;
    int mx = INT_MIN;
    while (temp != NULL)
    {
        if (temp->val > mx)
        {
            mx = temp->val;
        }
        temp = temp->next;
    }
    cout << mx << endl;
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
    find_max(head);
    return 0;
}