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

void insert_at_head(Node* &head, int val)
{
    Node* newnode = new Node(val);
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

int size_of_list(Node* head)    //O(N)
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
    
}


int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int x;
    while (cin>>x)
    {
        insert_at_tail(head, tail, x);
    }

    insert_at_head(head, 0);
    insert_at_tail(head,tail, 50);
    insert_at_any_pos(head,3, 100);

    int s = size_of_list(head);
    cout<<s<<endl; 
    
    print_linked_list(head);
    cout<<endl;
    cout<<size_optimized(head)<<endl;
}