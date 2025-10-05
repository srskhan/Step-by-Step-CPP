#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <algorithm>
#include <sstream>
#include <limits.h>
using namespace std;

int par[1000005];
int group_size[1000005];

int dsu_find(int node)
{
    if(par[node] == -1)
        return node;
    
    int leader = dsu_find(par[node]);
    par[node] = leader;
    return leader;
}

void dsu_union(int node1,int node2)
{
    int leader1 = dsu_find(node1);
    int leader2 = dsu_find(node2);

    if(group_size[leader1] >= group_size[leader2]){
        par[leader2] = leader1;
        group_size[leader1] += group_size[leader2];
    }
    else{
        par[leader1] = leader2;
        group_size[leader2] += group_size[leader1];
    }
}

int main()
{
    memset(par,-1,sizeof(par));
    memset(group_size,1,sizeof(group_size));

    int n,e;
    cin>>n>>e;
    int cnt = 0;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        
        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);

        if(leaderA == leaderB)
            cnt++;
        else
            dsu_union(a,b);
    }

    cout<< cnt <<endl;

    return 0;
}