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
    Node* next;
    Node* prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }

};

void insert_at_tail(Node* &head, Node* &tail, int val)
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
    newnode->next = NULL;
    tail = newnode;
}

void reverse_doubly(Node *head, Node *tail)
{
    for(Node *i= head,*j = tail; i!=j && i->prev!= j;i=i->next,j=j->prev)
    {
        swap(i->val,j->val);
    }
}

void print_linked_list(Node* head)
{
    Node *tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->val<< " ";
        tmp = tmp->next;
    }
    cout<<endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while(1)
    {
        int val;
        cin>>val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    reverse_doubly(head,tail);
    print_linked_list(head);

    cout<<head->val<<endl;
    cout<<tail->val<<endl;
    
    return 0;
}