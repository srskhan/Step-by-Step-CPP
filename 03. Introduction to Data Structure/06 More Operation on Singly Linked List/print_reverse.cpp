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

void reverse_print(Node* head)
{
    Node* tmp = head;
    if(tmp== NULL)
    {
        return;
    }

    reverse_print(tmp->next);
    cout<< tmp->val<<" ";
    
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
    reverse_print(head);
    
    return 0;
}