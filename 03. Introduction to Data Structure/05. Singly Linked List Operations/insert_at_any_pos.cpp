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

void insert_at_any_pos(Node* &head, int idx, int val)
{
    Node* newnode = new Node(val);
    
    Node* temp = head;
    for(int i=1;i<idx;i++)
    {
        temp = temp->next;
        if(temp == NULL)
        {
            return;
        }
    }
    newnode->next = temp->next;
    temp->next = newnode;

}

void print_linked_list(Node* head)
{
    Node* temp = head;
    while( temp != NULL)
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
    Node* c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;

    insert_at_any_pos(head,2,100);
    insert_at_any_pos(head,2,200);
    print_linked_list(head);

    return 0;
}



