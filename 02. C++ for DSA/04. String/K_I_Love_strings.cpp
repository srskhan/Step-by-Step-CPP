#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <limits.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s1,s2, result;
        cin>>s1>>s2;
        
        int min_len = min(s1.length(),s2.length());
        for(int i=0;i<min_len;i++){
            result+=s1[i];
            result+=s2[i];
        }
        if(s1.length()>s2.length()){
            result.append(s1.substr(min_len));
        }
        else if(s2.length()>s1.length()){
            result.append(s2.substr(min_len));
        }
        cout<<result<<endl;
    }
    
    return 0;
}