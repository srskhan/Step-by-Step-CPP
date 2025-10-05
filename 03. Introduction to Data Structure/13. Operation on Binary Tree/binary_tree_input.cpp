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
        root = nullptr;
    else
        root =new Node(val);

    queue<Node*> q;
    if(root!= nullptr) q.push(root);

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
            myleft = nullptr;
        else
            myleft = new Node(l);

        if(r == -1)
            myright = nullptr;
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

void level_order(Node* root)
{
    if(root == nullptr){
        cout<<"NO Tree";
        return;
    }

    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node* f = q.front();
        q.pop();

        cout<<f->val<<" ";

        if(f->left) q.push(f->left);  //if left node present then push to the queue
        if(f->right) q.push(f->right);  ////if right node present then push to the queue
    }
}

int main()
{
    Node* root = input_tree();
    level_order(root);
    return 0;
}