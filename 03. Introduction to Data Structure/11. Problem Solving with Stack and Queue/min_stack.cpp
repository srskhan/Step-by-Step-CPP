#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{	
	public:
		stack<int> st;
		stack<int> min_st;
		
		// Constructor
		minStack() 
		{}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			st.push(num);
			if(min_st.empty() == true){
				min_st.push(num);
			}
			else if(num<= min_st.top()){
				min_st.push(num);
			}
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			if(st.empty() == true) return -1;
			int val = st.top();
			st.pop();
			if(val == min_st.top()){
				min_st.pop();
			}
			return val;
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			if(st.empty() == true)
				return -1;
			else
				return st.top();
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			if(min_st.empty() == true)
				return -1;
			else
				return min_st.top();
		}
};