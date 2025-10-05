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
    queue<int> q;

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