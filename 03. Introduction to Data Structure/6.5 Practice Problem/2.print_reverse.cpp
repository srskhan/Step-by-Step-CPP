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

void insert_at_head(Node* &head,Node* &tail, int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    newnode->next = head;
    head = newnode;
}

void insert_at_tail(Node* &head,Node* &tail, int val)
{
    Node* new_node = new Node(val);
    
    if(head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }

    tail->next = new_node;
    tail = tail->next;

}

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

void print_reverse(Node* head, Node* tmp)
{
    if(tmp == nullptr){
        return;
    }
    print_reverse(head, tmp->next);
    cout<<tmp->val<<" ";

}

void print_linked_list(Node* head)
{
    Node* temp = head;
    while (temp!= NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<'\n';
    
}


int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    while (1)
    {
        int val;
        cin>>val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    print_reverse(head,head);
        
    
}