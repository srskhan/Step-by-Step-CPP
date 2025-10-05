#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <algorithm>
#include <sstream>
#include <cstring>
#include <limits.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string st1;
        string st2;
        cin>> st1>>st2;

        if(st1.size() != st2.size())
            cout<< "NO" <<endl;
        else{
            sort(st1.begin(),st1.end());
            sort(st2.begin(),st2.end());

            if(st1 == st2)
                cout<< "YES" <<endl;
            else
                cout<< "NO" <<endl;
        }
    }
    return 0;
}