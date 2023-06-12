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
        newNode->next = head;
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
void print_linked_list(Node *head)
{
    cout << "Your Linked list : ";
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
    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
            break;
        else
        {
            insert_linked_list(head, n);
        }
    }
    print_linked_list(head);
    return 0;
}