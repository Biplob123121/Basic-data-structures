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
int maxHeight(Node *root)
{
    if (root == NULL)
        return 0;
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    return max(l, r) + 1;
}
int countNodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int cnt = 0;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        cnt++;

        if (f->left != NULL)
            q.push(f->left);
        if (f->right != NULL)
            q.push(f->right);
    }
    return cnt;
}
int main()
{
    Node *root = inputTree();
    int mxH = maxHeight(root);
    if (pow(2, mxH) - 1 == countNodes(root))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}