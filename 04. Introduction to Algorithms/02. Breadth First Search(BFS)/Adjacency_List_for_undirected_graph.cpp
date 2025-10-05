#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <algorithm>
#include <sstream>
#include <limits.h>
using namespace std;

int main()
{
    int n,e;
    cin >> n >> e;
    vector<int> adj_list[n];
    while(e--)
    {
        int a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    for(int i=0; i<n; i++){
        cout<< i <<" -> ";
        for(int x: adj_list[i])
            cout<< x << " ";
        cout<<"\n";
    }
    
    return 0;
}