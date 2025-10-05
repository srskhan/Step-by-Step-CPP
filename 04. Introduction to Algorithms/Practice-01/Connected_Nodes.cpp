#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <algorithm>
#include <sstream>
#include <limits.h>
using namespace std;
vector<int> adj_list[1005];

int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    int q;
    cin>>q;

    while(q--)
    {
        int x;
        cin>>x;

        vector<int> connected;

        for(int node: adj_list[x]){
            connected.push_back(node);
        }

        if(connected.empty()){
            cout<< -1 <<endl;
            continue;
        }

        sort(connected.begin(),connected.end(), greater<int>());

        for(int c: connected){
            cout<< c << " ";
        }
        cout<<endl;
    }
    return 0;
}