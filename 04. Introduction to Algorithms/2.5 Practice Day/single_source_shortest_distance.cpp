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

    int source,destination;
    cin>>source>>destination;
    
    bfs(source);
    // for(int i=0;i<n;i++)
    // {
    //     cout<< i << " -> " << level[i] << endl;
    // }

    cout<< level[destination]<<endl;
    return 0;
}