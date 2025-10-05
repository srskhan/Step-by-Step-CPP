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

// int size_of_doubly(Node* tmp)
// {
//     int cnt=0;
//     while(tmp!=nullptr)
//     {
//         cnt++;
//         tmp = tmp->next;
//     }
//     return cnt;
// }

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;

}

void reverse_linked_list(Node* &head, Node* &tail)
{
    for(Node *i=head,*j=tail; i!=j && i->prev!=j; i=i->next,j=j->prev)
    {
        swap(i->val,j->val);
    }
    
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while(true)
    {
        int val;
        cin>>val;
        if(val == -1)
        {
            break;
        }
        
        insert_at_tail(head, tail , val);
    }

    reverse_linked_list(head, tail);
    print_linked_list(head);
}