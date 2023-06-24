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
bool hasCycle(ListNode *head)
{
    bool flag = false;
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            flag = true;
            break;
        }
    }
    return flag;
}
int main()
{
    ListNode *head = new ListNode(3);
    ListNode *a = new ListNode(2);
    ListNode *b = new ListNode(0);
    ListNode *c = new ListNode(-4);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = a;
    cout << hasCycle(head) << endl;
    return 0;
}