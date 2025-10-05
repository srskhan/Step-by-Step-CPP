#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <sstream>
#include <limits.h>
using namespace std;

int main()
{
    stack<int> st;
    stack<int> st_copy;

    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    while(!st.empty())
    {
        st_copy.push(st.top());
        st.pop();
    }

    while(!st_copy.empty())
    {
        cout <<st_copy.top()<<" ";
        st_copy.pop();
    }
    return 0;
}