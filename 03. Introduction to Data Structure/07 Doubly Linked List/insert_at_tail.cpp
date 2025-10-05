#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <limits.h>
using namespace std;

class Node 
{
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_head(Node *&head,Node *tail,int val)
{
    Node *newnode = new Node(val);
    if(head == tail)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

void print_forward(Node *head)
{
    Node *tmp = head;
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
    while(tail!= NULL)
    {
        cout<<tail->val<<" ";
        tail = tail->prev;
    }
    cout<<"\n";
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);
    
    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;

    // insert_at_head(head,tail,100);
    insert_at_tail(head,tail,200);
    insert_at_tail(head,tail,300);
    
    print_forward(head);
    print_reverse(tail);
    return 0;
}