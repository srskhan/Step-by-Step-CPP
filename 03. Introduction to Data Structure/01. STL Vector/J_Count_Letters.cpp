#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <limits.h>
using namespace std;

int main()
{
    string st;
    cin>>st;
    vector<int> freq(26,0);

    for(int i=0; i<st.size();i++){
        freq[st[i]-'a']++;
    }

    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            cout<< (char)(i+'a')<< " : "<< freq[i]<<endl;
        }
    }
    return 0;
}