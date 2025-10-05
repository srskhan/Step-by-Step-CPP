#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <algorithm>
#include <sstream>
#include <limits.h>
using namespace std;

int main()
{
    set<int> s;
    int n;
    cin>>n;
    while(n--)
    {
        int val;
        cin>>val;
        s.insert(val);
    }

    for(auto it=s.begin(); it != s.end(); it++){
        cout<< *it <<endl;
    }

    if(s.count(5))
        cout<<"Present"<<endl;
    else
        cout<<"Not Present" <<endl;


    return 0;
}