#include <bits/stdc++.h> 
string kevinStackProblem(string &s)
{
	stack<char> st;
	for(char val:s){
		st.push(val);
	}

	for(int i = 0; i < s.size(); i++) {
        s[i] = st.top();
        st.pop();
    }
    
    return s;
}