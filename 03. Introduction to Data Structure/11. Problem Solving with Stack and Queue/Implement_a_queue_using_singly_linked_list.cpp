#include <bits/stdc++.h> 
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
class Queue {
public:
    Node *head = NULL;
    Node *tail = NULL;

    int sz = 0;

    Queue() {
        
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        return sz==0;
    }

    void enqueue(int data) {
        sz++;
        Node *newnode = new Node(data);
        if(head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }

        tail->next = newnode;
        newnode->next = NULL;
        tail = newnode;
    }

    int dequeue() {
        if(head == NULL) return -1;
        sz--;

        Node *deletenode = head;
        int ans = deletenode->val;
        head = head->next;
        delete deletenode;
        if(head == NULL)
            tail = NULL;

        return ans;

    }

    int front() {
        if(head!= NULL)
            return head->val;
        else
            return -1;
    }
};