#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <limits.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    
    int q;
    cin>>q;
    while(q--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        
        int val;
        while (cin >> val)
        {
            if (val == -1)
            {
                break;
            }
            insert_at_tail(head, tail, val);
        }
        
        int tar_val;
        cin >> tar_val;
    
        int idx = 0;
        bool flag = false;
    
        Node *tmp = head;
        while (tmp != NULL)
        {
            
            if (tmp->val == tar_val)
            {
                cout << idx << endl;
                flag = true;
                break;
            }
            tmp = tmp->next;
            idx++;
        }
    
        if (flag == false)
        {
            cout << -1 << endl;
        }
    }


    return 0;
}