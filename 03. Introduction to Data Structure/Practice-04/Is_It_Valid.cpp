#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <sstream>
#include <limits.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        stack<char> stk;
        string s;
        cin>>s;

        for(char c: s){
            if(stk.empty()==true){
                stk.push(c);
            }
            else if(stk.top()== '0' && c == '1'){
                if(!stk.empty())
                    stk.pop();
            }
            else if(stk.top()== '1' && c == '0'){
                if(!stk.empty())
                    stk.pop();
            }
            else{
                stk.push(c);
            }
        }
        if(stk.empty()==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}