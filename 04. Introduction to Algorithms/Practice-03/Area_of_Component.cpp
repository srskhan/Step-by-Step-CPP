#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <algorithm>
#include <sstream>
#include <limits.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>> d = {{1,0},{-1,0},{0,1},{0,-1}};
int n,m;

bool valid(int i,int j)
{
    if(i<0 || i>=n || j<0 || j>=m)
        return false;
    return true;
}

int dfs(int si, int sj)
{
    int cnt=1;
    vis[si][sj] = true;
    for(int i=0;i<4;i++){
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj]=='.'){
            cnt+=dfs(ci,cj);
        }
    }
    return cnt;
}

int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
        }
    }

    memset(vis,false,sizeof(vis));
    int mn = INT_MAX;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j] && grid[i][j]== '.'){
                int a = dfs(i,j);
                mn = min(mn,a);
            }
        }
    }

    if(mn == INT_MAX)
        cout<< -1 <<endl;
    else
        cout<< mn << endl;
    return 0;
}