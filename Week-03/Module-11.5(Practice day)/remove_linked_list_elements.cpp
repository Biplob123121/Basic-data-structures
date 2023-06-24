#include <bits/stdc++.h>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void input_linked_list(ListNode *&head, ListNode *&tail, int val)
{
    ListNode *newNode = new ListNode(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_linked_list(ListNode *head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
ListNode *removeElements(ListNode *head, int val)
{
    if (head == NULL)
        return head;
    if (head->val == val)
    {
        ListNode *delNode = head->next;
        head->val = head->next->val;
        head->next = head->next->next;
        delete delNode;
    }
    ListNode *temp = head;
    while (temp->next != NULL)
    {
        if (temp->next->val == val)
        {
            ListNode *delNode = temp->next;
            temp->next = temp->next->next;
            delete delNode;
        }
        if (temp->next == NULL)
            break;
        else if (temp->next->val != val)
        {
            temp = temp->next;
        }
    }
    return head;
}
int main()
{
    ListNode *head = NULL;
    ListNode *tail = NULL;
    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        input_linked_list(head, tail, v);
    }
    removeElements(head, 10);
    print_linked_list(head);
    return 0;
}