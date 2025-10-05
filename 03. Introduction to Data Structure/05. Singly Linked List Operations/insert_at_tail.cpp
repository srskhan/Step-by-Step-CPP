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

void insert_at_tail(Node* &head, int val)
{
    Node* tail_node = new Node(val);
    
    if(head == NULL)
    {
        head = tail_node;
        return;
    }

    Node* temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    } 
    temp->next = tail_node;
}

void print_linked_list(Node* head)
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
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a;
    a->next = b;

    insert_at_tail(head, 40);
    insert_at_tail(head, 50);
    print_linked_list(head);
}