#include <bits/stdc++.h> 
queue<int> reverseElements(queue<int> q, int k)
{
    queue<int> ans_q;
    stack<int> st;

    for(int i=0;i<k;i++){
        st.push(q.front());
        q.pop();
    }
    
    while(!st.empty()){
        ans_q.push(st.top());
        st.pop();
    }

    while(!q.empty()){
        ans_q.push(q.front());
        q.pop();
    }
    return ans_q;
}
