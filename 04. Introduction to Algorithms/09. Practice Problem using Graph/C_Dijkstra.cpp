#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <queue>
#include <algorithm>
#include <sstream>
#include <limits.h>
#define ll long long int
using namespace std;
vector<pair<ll,ll>> adj_list[100005];
ll dis[100005];
ll parent[100005];

void dijkstra(int src)
{
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>, greater<pair<ll,ll>>> pq;
    pq.push({0,src});
    dis[src] = 0;

    while(!pq.empty())
    {
        pair<ll,ll> par = pq.top();
        pq.pop();
        ll par_node = par.second;
        ll par_cost = par.first;

        for(auto child: adj_list[par_node]){
            ll child_node = child.first;
            ll child_cost = child.second;
            if(par_cost + child_cost < dis[child_node]){
                dis[child_node] = par_cost + child_cost;
                pq.push({dis[child_node], child_node});
                parent[child_node] = par_node;
            }
        }
    }

}

int main()
{
    ll n,e;
    cin>>n>>e;
    while(e--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        adj_list[a].push_back({b,c});
        adj_list[b].push_back({a,c});
    }

    for(ll i=1;i<=n;i++){
        dis[i] = LLONG_MAX;
        parent[i] = -1;
    }

    dijkstra(1);

    
    if(dis[n] == LLONG_MAX)
        cout<< -1 <<endl;
    else{
        ll node = n;
        vector<ll> path;
        while(node != -1){
            path.push_back(node);
            node = parent[node];
        }
        reverse(path.begin(),path.end());

        for(auto x: path)
            cout<< x << " ";
        cout<< endl;
    }

    return 0;
}