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



vector<int> leaf_node(Node* root)
{
    vector<int> v;
    if(root == NULL) 
        return v;

    queue<Node*> q;
    if(root)
        q.push(root);

    while(!q.empty())
    {
        Node* f = q.front();
        q.pop();

        if(f->left == NULL && f->right == NULL)
        {
            v.push_back(f->val);
        }

        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }
    sort(v.begin(), v.end(), greater<int>());
    return v;
}

int main()
{
    Node *root = input_tree();
    vector<int> ans = leaf_node(root);
    for(int a : ans){
        cout<< a<<" ";
    }
    return 0;
}