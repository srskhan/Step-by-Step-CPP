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

void insert_at_head(Node *&head,Node *&tail,int val)
{
    Node *newnode = new Node(val);
    if(head == nullptr)
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

void delete_at_head(Node* &head, Node* &tail)
{
    Node* delete_node = head;
    head = head->next;
    delete delete_node;
    if(head == NULL)
    {
        tail = NULL;
        return;
    }
    head->prev = NULL;
}

void delete_at_tail(Node *&head,Node *&tail)
{
    Node *deletenode = tail;
    tail = tail->prev;
    delete deletenode;
    if(tail == NULL)
    {
        head = NULL;
        return;
    }
    tail->next = NULL;
}

void delete_at_any_position(Node* head,int idx)
{
    Node* tmp = head;
    for(int i=0;i<idx-1;i++)
    {
        tmp= tmp->next;
    }
    Node* deletenode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;
    delete deletenode;
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
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = new Node(50);
    
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    c->next = tail;
    tail->prev = c;

    // insert_at_head(head,tail,100);
    // insert_at_tail(head,tail,200);
    // insert_at_tail(head,tail,300);
    // insert_at_any_position(head,2,100);
    // delete_at_head(head,tail);
    // delete_at_head(head,tail);
    // delete_at_head(head,tail);

    // delete_at_tail(head,tail);
    delete_at_any_position(head,2);
    
    print_forward(head);
    // print_reverse(tail);
    return 0;
}