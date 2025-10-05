#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <sstream>
#include <limits.h>
#include <queue>
#include <stack>
using namespace std;

int main()
{
    queue<int>q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        q.push(x);
    }

    stack<int> st;
    while(!q.empty())
    {
        st.push(q.front());
        q.pop();
    }

    queue<int> q_copy;
    while(!st.empty())
    {
        q_copy.push(st.top());
        st.pop();
    }

    while(!q_copy.empty())
    {
        cout<<q_copy.front()<<" ";
        q_copy.pop();
    }

    return 0;
}