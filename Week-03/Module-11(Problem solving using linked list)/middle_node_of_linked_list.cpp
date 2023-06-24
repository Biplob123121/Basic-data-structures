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
int ListLength(ListNode *head)
{
    ListNode *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
ListNode *middleNode(ListNode *head)
{
    int size = ListLength(head);
    int mid = size / 2;
    ListNode *temp = head;
    for (int i = 1; i <= mid; i++)
    {
        temp = temp->next;
    }
    return temp;
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
    ListNode *midNode = middleNode(head);
    cout << midNode->val << endl;
    return 0;
}