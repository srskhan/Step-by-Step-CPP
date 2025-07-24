#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string st;
    while(getline(cin,st))
    {
        sort(st.begin(),st.end());

        for(int i=0;i<st.length();i++){
            if(st[i] != ' '){
                cout<<st[i];
            }
        }
        cout<<endl;
    }

    return 0;
}