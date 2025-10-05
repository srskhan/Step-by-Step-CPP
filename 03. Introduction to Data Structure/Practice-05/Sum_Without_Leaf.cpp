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
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree()
{
    int val;
    cin>>val;
    Node* root;
    if(val == -1)
        return nullptr;
    else
        root = new Node(val);

    queue<Node*> q;
    if(root)
        q.push(root);

    while(!q.empty())
    {
        // pop the parent node from queue
        Node* p = q.front();
        q.pop();

        // working on the parent node and connect with child node
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

        //push the child node to the queue
        if(p->left)
            q.push(p->left);
        
        if(p->right)
            q.push(p->right);

    }  
    return root;
}

void level_order_traversal(Node* root)
{
    if(root == nullptr) return;

    queue<Node*> q;
    if(root)
        q.push(root);

    while(!q.empty())
    {
        Node* f = q.front();
        q.pop();

        cout<< f->val<<" ";

        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }
}

int sum_without_leaf(Node* root)
{
    if(root == nullptr) 
        return 0;

    int sum = 0;

    if(root->left == nullptr && root->right == nullptr) return 0;

    if(root->left != nullptr || root->right != nullptr)
    {
        sum += root->val;
    }

    sum += sum_without_leaf(root->left);
    sum += sum_without_leaf(root->right);

    return sum;
}


int main()
{
    Node *root = input_tree();
    int s = sum_without_leaf(root);
    cout<< s<<endl;
    return 0;
}