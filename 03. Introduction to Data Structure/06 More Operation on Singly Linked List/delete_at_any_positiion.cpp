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

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val)
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

void delete_at_head(Node* &head)
{
    Node* deletenode = head;
    head = head->next;
    delete deletenode;
}

void delete_at_any_position(Node* head, int idx)
{
    Node* tmp = head;
    for(int i=1;i<idx;i++)
    {
        tmp = tmp->next;
    }
    Node* deletenode = tmp->next;
    tmp->next = tmp->next->next;
    delete deletenode;
    
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


    while (1)
    {
        int x;
        cin>>x;
        if(x==-1){
            break;
        }
        insert_at_tail(head, tail, x);
    }
    
    // delete_at_head(head);
    // delete_at_head(head);
    
    delete_at_any_position(head, 3);
    
    print_linked_list(head);
    

    return 0;
}

