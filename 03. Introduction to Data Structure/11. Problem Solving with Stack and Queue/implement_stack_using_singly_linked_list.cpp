class Stack
{
    Node* head = NULL;
    int sz = 0;

public:
    Stack()
    {
        //Write your code here
    }

    int getSize()
    {
        return sz;
    }

    bool isEmpty()
    {
        return sz==0;
    }

    void push(int data)
    {
        sz++;
        Node* newtop = new Node(data);
        if(head == NULL)
        {
            head = newtop;
            return;
        }
        newtop->next = head;
        head = newtop;
        
    }

    void pop()
    {
        if(head == NULL) return;

        Node *deltenode = head;
        head = head->next;
        delete deltenode;
        sz--;

    }

    int getTop()
    {
        if(head!=NULL)
            return head->data;
        else
            return -1;
    }
};