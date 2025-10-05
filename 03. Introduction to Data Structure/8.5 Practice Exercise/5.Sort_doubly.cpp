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

void sort_doubly(Node* head, Node* tail)
{
    for(Node* i = head; i->next != nullptr; i = i->next)
    {
        for(Node *j= i->next; j->next!= nullptr; j= j->next)
        {
            if(i->val > j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
}

void print_doubly(Node *head)
{
    Node *tmp = head;
    while(tmp!= NULL)
    {
        cout<< tmp->val<<" ";
        tmp= tmp->next;
    }
    cout<<'\n';
}



int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int val;
        cin>>val;

        if(val == -1){
            break;
        }
        insert_at_tail(head,tail,val);
    }
    sort_doubly(head,tail);
    print_doubly(head);

}