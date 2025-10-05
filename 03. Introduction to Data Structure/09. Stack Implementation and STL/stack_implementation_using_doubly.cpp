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
    int sz=0;

    void push(int val)
    {
        sz++;
        Node* newnode = new Node(val);
        if(head == nullptr){
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
        tail->next = nullptr;
    }
    void pop()
    {
        sz--;
        Node* deletenode = tail;
        tail = tail->prev;
        delete deletenode;
        if(tail == nullptr)
        {
            head = nullptr;
            return;
        }
        tail->next = nullptr;

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
    myStack st;
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }

    while (!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}