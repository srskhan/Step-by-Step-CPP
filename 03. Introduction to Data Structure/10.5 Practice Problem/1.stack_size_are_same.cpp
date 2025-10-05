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

class myStack
{
    public:
    Node* head = nullptr;
    Node* tail = nullptr;
    int sz = 0;

    void push(int val)
    {
        sz++;
        Node* newnode = new Node(val);
        if(head == nullptr){
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next=newnode;
        newnode->prev = tail;
        tail = newnode;
        tail->next = nullptr;
    }

    int pop()
    {
        sz--;
        int val = tail->val;
        Node* deletenode = tail;
        tail = tail->prev;
        delete deletenode;
        if(tail == nullptr)
        {
            head = nullptr;
        }
        else
        {
            tail->next = nullptr;
        }
        return val;
    }

    int top()
    {
        return tail->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        return sz==0;
    }
};

int main()
{
    myStack st1;
    myStack st2;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        st1.push(val);
    }

    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int val;
        cin>>val;
        st2.push(val);
    }

    int flag = 1;
    if(st1.size()!=st2.size())
    {
        flag = 0;
    }
    else
    {
        while (!st1.empty())
        {
            if(st1.pop() != st2.pop())
            {
                flag = 0;
                break;
            }
        }
        
    }
    if(flag == 1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}