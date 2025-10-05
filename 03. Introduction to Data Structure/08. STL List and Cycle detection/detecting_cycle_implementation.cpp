#include<iostream>
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




int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* tail = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next= tail;
    tail->next = b;


    int flag = false;

    Node* fast=head;
    Node* slow = head;

    while(fast!= NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
        {
            flag = true;
            break;
        }
    }

    if(flag==true)
        cout<< "Cycle detected";
    else
        cout<< "No Cycle";
}