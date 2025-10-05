#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <algorithm>
#include <sstream>
#include <limits.h>
using namespace std;
vector<int> adj_mat[1005];
bool visited[1005];
int parent[1005];

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

    int src, dst;
    cin >> src >> dst;
    bfs(src);
    
    vector<int> path;
    int node = dst;
    while(node != -1){
        path.push_back(node);
        node = parent[node];
    }
    reverse(path.begin(),path.end());
    for(int x: path){
        cout<< x << " ";
    }
    
    return 0;
}