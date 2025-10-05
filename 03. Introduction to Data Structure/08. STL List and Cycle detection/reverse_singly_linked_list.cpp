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
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail,int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = tail->next;
}

void reverse_linked_list(Node* &head, Node * &tail, Node* tmp)
{
    if(tmp->next == NULL)
    {
        head = tmp;
        return;
    }
    reverse_linked_list(head, tail, tmp->next);
    tmp->next->next = tmp;
    tmp->next = NULL;
    tail = tmp;
    
}

void print_linked_list(Node* &head)
{
    Node* temp = head;
    while (temp!= NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
        
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    
    int val;
    while (1)
    {
        cin>>val;
        if(val == -1){
            break;
        }
        insert_at_tail(head,tail,val);
    }
    reverse_linked_list(head,tail, head);
    print_linked_list(head);
    
    return 0;
}