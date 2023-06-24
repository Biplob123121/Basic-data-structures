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
void reverse_linked_list(Node *&head, Node *curr)
{
    if (curr->next == NULL)
    {
        head = curr;
        return;
    }
    reverse_linked_list(head, curr->next);
    curr->next->next = curr;
    curr->next = NULL;
}
void isPalindrome(Node *head, Node *newHead)
{
    Node *temp1 = head;
    Node *temp2 = newHead;
    int flag = 1;
    while (temp1 != NULL)
    {
        if (temp1->val != temp2->val)
        {
            flag = 0;
            break;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
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
    Node *newHead = NULL;
    Node *newTail = NULL;
    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
            break;
        input_linked_list(head, tail, n);
    }
    Node *temp = head;
    while (temp != NULL)
    {
        input_linked_list(newHead, newTail, temp->val);
        temp = temp->next;
    }
    reverse_linked_list(newHead, newHead);
    isPalindrome(head, newHead);
    return 0;
}