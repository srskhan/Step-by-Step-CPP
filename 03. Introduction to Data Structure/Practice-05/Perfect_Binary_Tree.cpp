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

int count_node(Node *root)
{
    if(root == NULL)
        return 0;
    
    int l = count_node(root->left);
    int r = count_node(root->right);
    return l+r+1;
}

int max_depth(Node *root)
{
    if(root == NULL)
        return 0;
    
    if(root->left == NULL && root->right == NULL)
        return 1;

    int l = max_depth(root->left);
    int r = max_depth(root->right);

    return max(l,r)+1;
}

int main()
{
    Node *root = input_tree();
    int number_of_nodes = count_node(root);
    int mx_dpt = max_depth(root);

    if(number_of_nodes == pow(2, mx_dpt)-1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    
    return 0;
}