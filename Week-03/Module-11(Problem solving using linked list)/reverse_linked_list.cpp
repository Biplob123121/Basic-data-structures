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
void reverse_list(ListNode *&head, ListNode *curr)
{
    if (curr->next == NULL)
    {
        head = curr;
        return;
    }
    reverse_list(head, curr->next);
    curr->next->next = curr;
    curr->next = NULL;
}
ListNode *reverseList(ListNode *head)
{
    if (head == NULL)
    {
        return head;
    }
    reverse_list(head, head);
    return head;
}
void print(ListNode *head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
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
    reverseList(head);
    print(head);
    return 0;
}