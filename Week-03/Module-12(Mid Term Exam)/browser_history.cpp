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
void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->name << " ";
        temp = temp->next;
    }
    cout << "end" << endl;
}
void show_cmd(Node *head, string cmd)
{
    Node *temp = head;
    int length = sizeof(cmd);
    string visitCmd;
    string name;
    if (length > 5)
    {
        stringstream ss(cmd);
        string second;
        ss >> visitCmd;
        ss >> name;
    }
    if (visitCmd == "visit")
    {
        int found = 0;
        while (temp != NULL)
        {
            if (temp->name == name)
            {
                found = 1;
                break;
            }
            temp = temp->next;
        }
        if (found == 1)
            cout << temp->name << endl;
        else
            cout << "Not Available" << endl;
    }
    else if (cmd == "next")
    {
        if (temp->next != NULL)
        {
            cout << temp->next->name << endl;
        }
        else
        {
            cout << "Not Available" << endl;
        }
        temp = temp->next;
    }
    if (cmd == "prev")
    {
        if (temp->prev != NULL)
        {
            cout << temp->prev->name << endl;
        }
        else
        {
            cout << "Not Available" << endl;
        }
        temp = temp->prev;
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
    print_linked_list(head);
    int query;
    cin >> query;
    while (query--)
    {
        string cmd;
        cin.ignore();
        getline(cin, cmd);
        show_cmd(head, cmd);
    }
    return 0;
}