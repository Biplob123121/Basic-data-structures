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
void descending_sort(Node *&head)
{
    Node *temp = head;
    for (Node *i = temp; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val < j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
}
int count_length(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void middle_element(Node *head)
{
    int size = count_length(head);
    if (size == 1)
    {
        cout << head->val;
        return;
    }
    int mid = size / 2;
    Node *temp = head;
    for (int i = 0; i < mid - 1; i++)
    {
        temp = temp->next;
    }
    if (size % 2 == 0)
    {
        cout << temp->val << " " << temp->next->val << endl;
    }
    else
    {
        cout << temp->next->val << endl;
    }
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
    descending_sort(head);
    middle_element(head);
    return 0;
}