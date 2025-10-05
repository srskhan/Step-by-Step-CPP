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

int max_depth(Node *root)
{
    if(root == NULL)
        return 0;
    
    if(root->left == NULL && root->right == NULL)
        return 0;

    int l = max_depth(root->left);
    int r = max_depth(root->right);

    return max(l,r)+1;
}

vector<int> desired_level(Node* root, int des_lvl)
{
    vector<int> v;
    queue<pair<Node* , int>> q;
    if(root)
        q.push({root,0});

    while (!q.empty())
    {
        pair<Node* ,int> p = q.front();
        q.pop();

        Node * node = p.first;
        int lvl = p.second;

        if(lvl == des_lvl)
        {
            v.push_back(node->val);
        }

        if(node->left)
            q.push({node->left, lvl+1});
        
        if(node->right)
            q.push({node->right, lvl+1});
    } 
    return v;
}


int main()
{
    Node *root = input_tree();
    int des_lvl;
    cin>>des_lvl;
    int d = max_depth(root);
    if(des_lvl>d)
    {
        cout<<"Invalid"<<endl;
        return 0;
    }

    vector<int> ans = desired_level(root, des_lvl);

    for(int a : ans)
    {
        cout<<a<<" ";
    }

    return 0;
}