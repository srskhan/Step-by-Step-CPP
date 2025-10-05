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
    string val;
    Node *next;
    Node *prev;

    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, string val)
{
    Node *newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    newnode->next = NULL;
    tail = newnode;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while(tmp!= NULL)
    {
        cout<< tmp->val<<" ";
        tmp= tmp->next;
    }
    cout<<'\n';
}

void visit_address(Node* head, Node* &current, string address)
{
    Node* tmp = head;
    while (tmp!= nullptr)
    {
        if(tmp->val == address){
            current = tmp;
            cout<<tmp->val<<endl;
            return;
        }
        tmp = tmp->next;
    }
    cout<<"Not Available"<<endl;
    
}

void next_address(Node* head, Node* &current)
{
    if(current->next== nullptr){
        cout<<"Not Available"<<endl;
    }
    else{
        current = current->next;
        cout<<current->val<<endl;
    }

}

void prev_address(Node* head, Node* &current)
{
    if(current->prev == nullptr){
        cout<<"Not Available"<<endl;
    }
    else{
        current = current->prev;
        cout<<current->val<<endl;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *current = head;

    while(true)
    {
        string web;
        cin>>web;
        if(web == "end")
        {
            break;
        }
        insert_at_tail(head,tail,web);
    }

    int q;
    cin>>q;
    while(q--)
    {
        string command;
        cin>>command;
        
        if(command == "visit"){
            string address;
            cin>>address;
            visit_address(head,current, address);
        }
        else if(command == "next")
        {
            next_address(head, current);
        }
        else if(command == "prev")
        {
            prev_address(head, current);
        }

    }

}