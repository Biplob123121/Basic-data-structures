#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *inputTree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *lft;
        Node *rgt;
        if (l == -1)
            lft = NULL;
        else
            lft = new Node(l);
        if (r == -1)
            rgt = NULL;
        else
            rgt = new Node(r);

        p->left = lft;
        p->right = rgt;

        if (p->left != NULL)
            q.push(p->left);
        if (p->right != NULL)
            q.push(p->right);
    }
    return root;
}

void levelNodes(Node *root, int x)
{
    queue<pair<Node *, int>> q;
    vector<int> v;
    if (root)
        q.push({root, 0});

    while (!q.empty())
    {
        pair<Node *, int> pr = q.front();
        q.pop();
        Node *f = pr.first;
        int level = pr.second;

        if (level == x)
        {
            v.push_back(f->val);
        }

        if (f->left != NULL)
            q.push({f->left, level + 1});
        if (f->right != NULL)
            q.push({f->right, level + 1});
    }
    if (v.empty())
    {
        cout << "Invalid" << endl;
    }
    else
    {
        for (int val : v)
        {
            cout << val << " ";
        }
    }
}
int main()
{
    Node *root = inputTree();
    int x;
    cin >> x;
    levelNodes(root, x);
    return 0;
}