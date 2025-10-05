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


int count_linked_list(Node *head)
{
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        tmp = tmp->next;
        cnt++;
    }
    return cnt;
}

int max_find(Node *head)
{
    int mx = INT_MIN;
    Node *tmp = head;
    while (tmp != NULL)
    {
        mx = max(tmp->val, mx);
        tmp = tmp->next;
    }
    return mx;
}

int min_find(Node *head)
{
    int mn = INT_MAX;
    Node *tmp = head;
    while (tmp != NULL)
    {
        mn = min(tmp->val, mn);
        tmp = tmp->next;
    }
    return mn;
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
    
    cout << max_find(head)-min_find(head) << endl;
    return 0;
}