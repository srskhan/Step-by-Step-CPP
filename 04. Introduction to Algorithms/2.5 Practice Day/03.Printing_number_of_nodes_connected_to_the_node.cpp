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
    int n, e;
    cin >> n >> e;
    vector<int> adj_list[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    int node;
    cin >> node;
    vector<int> number_of_nodes;

    for (int x : adj_list[node])
    {
        number_of_nodes.push_back(x);
    }
    cout<<number_of_nodes.size();
    return 0;
}