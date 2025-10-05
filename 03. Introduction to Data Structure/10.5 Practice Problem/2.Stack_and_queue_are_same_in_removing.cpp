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
    queue<int>q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }

    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }

    int flag = 1;
    if(st.size()!= q.size())
    {
        flag = 0;
    }
    else
    {
        while (!st.empty())
        {
            if( st.top() != q.front())
            {
                flag = 0;
                break;
            }
            st.pop();
            q.pop();
        }
    }

    if(flag == 1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}