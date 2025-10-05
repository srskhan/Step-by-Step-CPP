#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <sstream>
#include <limits.h>
#include <queue>
#include <cmath>
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
        root = NULL;
    else
        root =new Node(val);

    queue<Node*> q;
    if(root!= NULL) q.push(root);

    while(!q.empty())
    {
        // pop parent node from queue
        Node* p = q.front();
        q.pop();

        // work on parent node
        int l,r;
        cin>>l>>r;

        Node *myleft, *myright;

        if(l == -1) 
            myleft = NULL;
        else
            myleft = new Node(l);

        if(r == -1)
            myright = NULL;
        else
            myright = new Node(r);

        p->left = myleft;
        p->right = myright;

        // push the children of the parent on queue
        if(p->left) 
            q.push(p->left);

        if(p->right)
            q.push(p->right);
    }
    return root;
}

void left_tree(Node* root_left)
{
    if(root_left == NULL)
        return;

    if(root_left->left)       // if left node present then go to the left node else right node
        left_tree(root_left->left);
    else
        left_tree(root_left->right);

    cout<< root_left->val<<" ";
}

void right_tree(Node* root_right)
{
    if(root_right == NULL)
        return;

    cout<<root_right->val<<" ";

    if(root_right->right)       //if right node present then go to the right node else left node
        right_tree(root_right->right);
    else
        right_tree(root_right->left);
}

int main()
{
    Node *root = input_tree();
    
    left_tree(root->left);
    cout<<root->val<<" ";
    right_tree(root->right);

    return 0;
}