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

    void push(int val){
        sz++;
        Node* newnode = new Node(val);
        if(head == nullptr){
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        newnode->prev = tail;
        newnode->next = nullptr;
        tail = newnode;
    }
    
    void pop(){
        sz--;
        if(tail == nullptr) return;

        Node *deletenode = tail;
        tail = tail->prev;
        delete deletenode;
        if(tail == nullptr){
            head = nullptr;
            return;
        }
        tail->next = nullptr;
    }

    int top(){
        return tail->val;
    }

    int size(){
        return sz;
    }

    bool empty(){
        return sz == 0;
    }
};

class myQueue
{
public:
    Node* head = nullptr;
    Node* tail = nullptr;
    int sz=0;

    void push(int val){
        sz++;
        Node* newnode = new Node(val);
        if(head == nullptr){
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        newnode->prev = tail;
        newnode->next = nullptr;
        tail = newnode;
    }

    void pop(){
        sz--;

        if(head == nullptr) return;

        Node* deletenode = head;
        head = head->next;
        delete deletenode;
        if(head == nullptr){
            tail = nullptr;
            return;
        }
        head->prev = nullptr;
    }

    int front(){
        return head->val;
    }

    int size(){
        return sz;
    }

    bool empty(){
        return sz == 0;
    }

};

int main()
{
    myStack st;
    myQueue q;

    int n, m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        st.push(val);
    }
   
    for(int i=0;i<m;i++){
        int val;
        cin>>val;
        q.push(val);
    }

    int flag = 1;

    if(st.size()!= q.size()){
        flag = 0;
    }
    else{
        while(!st.empty()){
            if( st.top()!= q.front()){
                flag = 0;
                break;
            }
            q.pop();
            st.pop();
        }
    }
    if(flag == 1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}