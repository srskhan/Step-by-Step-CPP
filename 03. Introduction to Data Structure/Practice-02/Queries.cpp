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


void delete_at_head(Node* &head, Node* &tail)
{
    if(head == NULL){
        return;
    }
    
    Node* deletenode = head;
    head = head->next;
    delete deletenode;

    if(head == NULL){
        tail = NULL;
    }
}

void delete_at_any_position(Node* head, int idx)
{
    Node* tmp = head;
    if(head == NULL){
        return;
    }
    for(int i=1;i<idx;i++)
    {
        tmp = tmp->next;
    }
    Node* deletenode = tmp->next;
    tmp->next = tmp->next->next;
    delete deletenode;
    
}

void delete_at_tail(Node* head, Node* &tail, int idx)
{
    Node* tmp = head;
    for(int i=1;i<idx;i++)
    {
        tmp = tmp->next;
    }
    Node* deletenode = tmp->next;
    tmp->next = tmp->next->next;
    delete deletenode;
    tail = tmp;
    
}

int size_of_linked_list(Node* head)    //O(N)
{
    Node* temp = head;
    int count=0;
    while (temp!= NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
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

    
            
    int q;
    cin>>q;
    while(q--)
    {
        int x, v;
        cin>>x>>v;

        int sz = size_of_linked_list(head);

        if(x == 0)
        {
            insert_at_head(head,tail,v);
        }
        else if(x == 1)
        {
            insert_at_tail(head,tail,v);
        }
        else if(x == 2)
        {
            if(v>=sz)
            {
                print_linked_list(head);
                continue;
            }
            else if(v==0)
            {
                delete_at_head(head,tail);
            }
            else if(v==sz-1)
            {
                delete_at_tail(head,tail,v);
            }

            else
            {
                delete_at_any_position(head,v);
            }
        }
        print_linked_list(head);
        
    }
}