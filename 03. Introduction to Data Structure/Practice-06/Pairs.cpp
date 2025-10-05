#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <algorithm>
#include <sstream>
#include <limits.h>
using namespace std;

bool cmp(pair<string,int> l, pair<string,int> r)
{
    if(l.first < r.first)
        return true;
    else if(l.first > r.first)
        return false;
    else
        return l.second > r.second;
}

int main()
{
    vector<pair<string , int>> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string name;
        int unique_val;
        cin>>name>>unique_val;
        v.push_back({name,unique_val});
    }

    sort(v.begin(),v.end(),cmp);

    for(int i=0;i<n;i++)
    {
        cout<< v[i].first << " " << v[i].second <<endl;
    }
    return 0;
}