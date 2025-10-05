#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <sstream>
#include <limits.h>
using namespace std;

class myStack
{
public:
    vector<int>v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
    }
};

int main()
{
    myStack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    if(!st.empty())
        st.pop();
    

    if(!st.empty())
        cout<<st.top()<<endl;

    if(!st.empty())
        st.pop();

    if(!st.empty())
        cout<<st.top()<<endl;

    


    return 0;
}