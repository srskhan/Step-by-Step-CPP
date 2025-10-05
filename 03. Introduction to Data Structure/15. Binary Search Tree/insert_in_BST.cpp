#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <sstream>
#include <limits.h>
using namespace std;

class Node 
{
public:
    int val;
    Node* left;
    Node* right;

    Node(int val)
    {
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }

};

Node* input_tree()
{
    int val;
    cin>>val;
    Node* root;
    if(val == -1)
        root = nullptr;
    else
        root = new Node(val);

    queue<Node*> q;
    if(root)
        q.push(root);

    while(!q.empty())
    {
        Node* p = q.front();
        q.pop();

        int l,r;
        cin>>l>>r;

        Node* myleft;
        Node* myright;

        if(l == -1)
            myleft = nullptr;
        else
            myleft = new Node(l);

        if(r == -1)
            myright = nullptr;
        else
            myright = new Node(r);

        p->left = myleft;
        p->right = myright;

        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);

    }
    return root;
}

bool Search(Node* root, int x)
{
    if(root == nullptr)
        return false;
    if(root->val == x)
        return true;

    if(x < root->val)
        return Search(root->left, x);
    else
        return Search(root->right, x);
}

void insert(Node* root, int val)
{
    if(root == nullptr)
    {
        root = new Node(val);
        return;
    }

    if(val< root->val)
    {
        if(root->left == nullptr)
            root->left = new Node(val);
        else
            insert(root->left, val);
    }
    else
    {
        if(root->right == nullptr)
            root->right = new Node(val);
        else
            insert(root->right, val);
    }
}

void level_order_print(Node* root)
{
    queue<Node*> q;
    if(root)
        q.push(root);
    
    while(!q.empty())
    {
        Node* f= q.front();
        q.pop();

        cout<< f->val<<" ";
    
        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
        
    }
}

int main()
{
    Node* root = input_tree();

    int val;
    cin>>val;
    insert(root,val);
    insert(root,11);

    level_order_print(root);
    return 0;
}