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
    middle_element(head);
    return 0;
}