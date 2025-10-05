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
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_at_head(Node *&head,Node *&tail,int val)
{
    Node *newnode = new Node(val);
    if(head==NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node *newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    tail->next = newnode;
    newnode->prev = tail;
    newnode->next = NULL;
    tail = newnode;
}

void insert_at_any_position(Node* &head, int idx, int val)
{
    Node *newnode = new Node(val);

    Node* tmp = head;
    for(int i=0;i<idx-1;i++)
    {
        tmp= tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next->prev = newnode;
    tmp->next = newnode;
    newnode->prev = tmp;

}

int size_of_doubly(Node* tmp)
{
    int cnt=0;
    while(tmp!=nullptr)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void print_forward(Node *head)
{
    Node *tmp = head;
    cout<<"L -> ";
    while(tmp!= NULL)
    {
        cout<< tmp->val<<" ";
        tmp= tmp->next;
    }
    cout<<'\n';
}

void print_reverse(Node *tail)
{
    Node *tmp = tail;
    cout<<"R -> ";
    while(tail!= NULL)
    {
        cout<<tail->val<<" ";
        tail = tail->prev;
    }
    cout<<"\n";
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin>>q;

    while(q--)
    {
        int x,val;
        cin>>x>>val;

        int sz = size_of_doubly(head);
        
        if(x >sz)
        {
            cout<<"Invalid"<<endl;
            continue;
        }
        else if(x == 0)
        {
            insert_at_head(head,tail,val);
        }
        else if(x == sz)
        {
            insert_at_tail(head,tail,val);
        }
        else
        {
            insert_at_any_position(head,x,val);
        }
        print_forward(head);
        print_reverse(tail);

    }

}