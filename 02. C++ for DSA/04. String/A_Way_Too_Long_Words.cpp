#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string st;
    for(int i=0;i<t;i++){
        cin>>st;
        
        if(st.length()<=10){
            cout<<st<<endl;
        }
        else{
            char first = st[0];
            int last_idx = st.length()-1;
            char last = st[last_idx];
            int middle= st.length()-2;
            cout<< first<<middle<<last<<endl;
        }
        
    }
    return 0;
}