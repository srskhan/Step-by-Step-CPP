#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <algorithm>
#include <sstream>
#include <limits.h>
using namespace std;
vector<int> adj_matrix[1005];
bool visited[1005];
int level[1005];

void bfs(int source)
{
    queue <int> q;
    q.push(source);
    visited[source] = true;
    level[source]= 0;

    while(!q.empty())
    {
        int par = q.front();
        q.pop();

        for(int child: adj_matrix[par]){
            if(!visited[child]){
                q.push(child);
                visited[child] = true;
                level[child] = level[par]+1;
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
        adj_matrix[a].push_back(b);
        adj_matrix[b].push_back(a);
    }

    memset(visited,false,sizeof(visited));
    memset(level, -1, sizeof(level));
    
    bfs(0);

    int l;
    cin>>l;
    vector<int> nodes_at_level;
    for(int node = 0;node<1005;node++){
        if(level[node] == l){
            nodes_at_level.push_back(node);
        }
    }

    sort(nodes_at_level.begin(),nodes_at_level.end(), greater<int>());

    for(int node: nodes_at_level){
        cout<< node << " ";
    }
    return 0;
}