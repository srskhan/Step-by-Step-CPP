#include<iostream>
using namespace std;

int sz = 0;

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
        sz++;
        return;
    }

    newnode->next = head;
    head = newnode;
    sz++;
}

void insert_at_tail(Node* &head,Node* &tail, int val)
{
    Node* new_node = new Node(val);
    
    if(head == NULL)
    {
        head = new_node;
        tail = new_node;
        sz++;
        return;
    }

    tail->next = new_node;
    tail = tail->next;
    sz++;

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
    sz++;

}

// int size_of_list(Node* head)    //O(N)
// {
//     Node* temp = head;
//     int count=0;
//     while (temp!= NULL)
//     {
//         count++;
//         temp = temp->next;
//     }
//     return count;
// }

int size_optimized(Node* head)      //O(1)
{
    return sz;
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

    int q;
    cin>>q;
    while(q--)
    {
        int pos,value;
        cin>>pos>>value;
        int sz = size_optimized(head);

        if(pos>sz)
        {
            cout<<"Invalid\n";
            continue;
        }
        else if(pos == sz)
        {
            insert_at_tail(head,tail,value);
        }
        else if(pos == 0)
        {
            insert_at_head(head,tail,value);
        }
        else
        {
            insert_at_any_pos(head,pos,value);
        }
        print_linked_list(head);
        
    }
}