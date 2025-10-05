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

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a;
    a->next = b;
    // b->next = NULL;          // not needed because we set Null at begining. 

    cout<< head->val <<endl;
    cout<< a->val<<endl;
    cout<<b->val<<endl;

    return 0;
}