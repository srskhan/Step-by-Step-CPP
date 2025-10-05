#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <sstream>
#include <limits.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node *newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    tail->next = newnode;
    newnode->prev = tail;
    newnode->next = NULL;
    tail = newnode;
}

int size_of_doubly(Node* tmp)
{
    int cnt=0;
    while(tmp!=nullptr)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;

}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;

    while(true)
    {
        int val;
        cin>>val;
        if(val == -1)
        {
            break;
        }
        
        insert_at_tail(head1, tail1 , val);
    }
    
    Node *head2 = NULL;
    Node *tail2 = NULL;

    while(true)
    {
        int val;
        cin>>val;
        if(val == -1)
        {
            break;
        }

        insert_at_tail(head2, tail2 , val);
    }

    int sz1 = size_of_doubly(head1);
    int sz2 = size_of_doubly(head2);

    Node* tmp1 = head1;
    Node* tmp2 = head2;
    int flag = 1;


    if(sz1 != sz2)
    {
        flag = 0;
    }
    else
    {
        while(tmp1 != nullptr && tmp2 != nullptr)
        {
            if(tmp1->val!=tmp2->val)
            {
                flag = 0;
                break;
            }
            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
        }
    }

    if(flag ==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}