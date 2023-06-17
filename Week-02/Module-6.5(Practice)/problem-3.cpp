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
void insert_linked_list(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void print_middle(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    if (count % 2 == 0)
    {
        temp = head;
        for (int i = 1; i < count / 2; i++)
        {
            temp = temp->next;
        }
        cout << temp->val<<" "<<temp->next->val << endl;
    }
    else
    {
        temp = head;
        for (int i = 1; i <= count / 2; i++)
        {
            temp = temp->next;
        }
        cout << temp->val << endl;
    }
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
        {
            break;
        }
        else
        {
            insert_linked_list(head, n);
        }
    }
    print_middle(head);
    return 0;
}