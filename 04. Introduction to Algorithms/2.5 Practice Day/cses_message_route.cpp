#include <iostream>
#include <vector>
#include <list>
#include <map>
#include<queue>
#include <algorithm>
#include <sstream>
#include <limits.h>
#include <cstring>
using namespace std;
vector<int> adj_mat[1000000];
bool visited[1000000];
int parent[1000000];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;

    while(!q.empty())
    {
        int par = q.front();
        q.pop();

        for(int child: adj_mat[par]){
            if(!visited[child]){
                q.push(child);
                visited[child] = true;
                parent[child] = par;
            }
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
        adj_mat[a].push_back(b);
        adj_mat[b].push_back(a);
    }

    memset(visited,false,sizeof(visited));
    memset(parent,-1, sizeof(parent));

    int src=1, dst=n;
    // cin >> src >> dst;
    bfs(src);
    
    if(visited[dst] == false){
        cout<< "IMPOSSIBLE"<<endl;
        return 0;
    }
    vector<int> path;
    int node = dst;
    while(node != -1){
        path.push_back(node);
        node = parent[node];
    }
    reverse(path.begin(),path.end());
    cout<< path.size()<<endl;
    for(int x: path){
        cout<< x << " ";
    }
    
    return 0;
}