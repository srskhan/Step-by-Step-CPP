#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <algorithm>
#include <sstream>
#include <limits.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];

void dfs(int src)
{
    // cout<< src << " ";
    vis[src] = true;

    for(int child: adj_list[src]){
        if(vis[child]==false){
            dfs(child);
        }
    }
}

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

    memset(vis,false,sizeof(vis));

    int src;
    cin>> src;
    dfs(src);

    int number_of_nodes=0;

    for(int i=0;i<n;i++){
        if(vis[i] == true){
            number_of_nodes++;
        }
    }


    cout<< number_of_nodes << endl;
    return 0;
}