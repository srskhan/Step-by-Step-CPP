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

void bfs(int source)
{
    queue <int> q;
    q.push(source);
    visited[source] = true;

    while(!q.empty())
    {
        int par = q.front();
        q.pop();

        for(int child: adj_matrix[par]){
            if(!visited[child]){
                q.push(child);
                visited[child] = true;
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

    int source,destination;
    cin>>source>>destination;
    
    bfs(source);

    if(visited[destination] == true)
        cout<< "Can be visited." << endl;
    else
        cout<< "Cannot be visited." <<endl;
    return 0;
}