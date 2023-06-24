#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string name;
    Node *prev;
    Node *next;
    Node(string name)
    {
        this->name = name;
        this->prev = NULL;
        this->next = NULL;
    }
};
void input_linked_list(Node *&head, Node *&tail, string name)
{
    Node *newNode = new Node(name);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
Node *visit_site(Node *head, Node *&curr, string site_name)
{
    if (head == NULL)
        return head;
    Node *temp = head;
    int flag = 0;
    while (temp != NULL)
    {
        if (temp->name == site_name)
        {
            flag = 1;
            break;
        }
        temp = temp->next;
    }
    if (flag == 1)
    {
        cout << temp->name << endl;
        curr = temp;
        return curr;
    }
    else
    {
        cout << "Not Available" << endl;
        return curr;
    }
}
Node *next_site(Node *curr)
{
    if (curr->next == NULL)
    {
        cout << "Not Available" << endl;
        return curr;
    }
    else
    {
        cout << curr->next->name << endl;
        return curr->next;
    }
}
Node *prev_site(Node *curr)
{
    if (curr->prev == NULL)
    {
        cout << "Not Available" << endl;
        return curr;
    }
    else
    {
        cout << curr->prev->name << endl;
        return curr->prev;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        string name;
        cin >> name;
        if (name == "end")
            break;
        input_linked_list(head, tail, name);
    }
    int query;
    cin >> query;
    cin.ignore();
    Node *curr = head;
    while (query--)
    {
        string cmd;
        getline(cin, cmd);
        int length = cmd.size();
        string visitcmd;
        string siteName;
        if (length > 5)
        {
            stringstream ss(cmd);
            ss >> visitcmd;
            ss >> siteName;
        }
        if (length > 5 && visitcmd == "visit")
        {
            curr = visit_site(head, curr, siteName);
        }
        else if (cmd == "next")
        {
            curr = next_site(curr);
        }
        else if (cmd == "prev")
        {
            curr = prev_site(curr);
        }
    }
    return 0;
}