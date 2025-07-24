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
    while(t--){
        string sentence, target_str;
        cin>>sentence>>target_str;
        while(sentence.find(target_str)!= string::npos){
            sentence.replace(sentence.find(target_str),target_str.size(), " ");
        }
        cout<<sentence<<endl;
    }
    return 0;
}