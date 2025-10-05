#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <sstream>
#include <limits.h>
#include <queue>
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
    Node* root = nullptr;
    if(val != -1)
        root = new Node(val);
    queue<Node *> q;
    if(root != nullptr) 
        q.push(root);
    
    while(!q.empty())
    {
        // pop the parent node
        Node *p = q.front();
        q.pop();

        //work on the parent node
        int l,r;
        cin>>l>>r;
        Node *myleft, *myright;
        if(l==-1)
            myleft = nullptr;
        else 
            myleft = new Node(l);

        if(r == -1)
            myright = nullptr;
        else
            myright = new Node(r);
        
        p->left = myleft;
        p->right = myright;

        //push children to the queue
        if(p->left)
            q.push(p->left);

        if(p->right)
            q.push(p->right);
    }
    return root;
}

int count_node(Node *root)
{
    if(root == nullptr)
        return 0;
    
    int l = count_node(root->left);
    int r = count_node(root->right);
    return l+r+1;
}

int main()
{
    Node *root = input_tree();
    cout<<count_node(root);
    
    return 0;
}