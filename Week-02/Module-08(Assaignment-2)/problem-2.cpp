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
void is_equal(Node *head, Node *head2)
{
    int size1 = count_length(head);
    int size2 = count_length(head2);
    Node *temp = head;
    Node *temp2 = head2;
    int flag = 1;
    if (size1 != size2)
    {
        flag = 0;
    }
    else
    {
        while (temp != NULL && temp2 != NULL)
        {
            if (temp->val != temp2->val)
            {
                flag = 0;
                break;
            }
            temp = temp->next;
            temp2 = temp2->next;
        }
    }
    if (flag == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
    is_equal(head, head2);
    return 0;
}