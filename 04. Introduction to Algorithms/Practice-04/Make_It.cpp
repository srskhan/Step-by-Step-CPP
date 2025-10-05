#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <algorithm>
#include <sstream>
#include <cstring>
#include <limits.h>
using namespace std;
int dp[100005];
bool rec(int n)
{
    if(n == 1)
        return true;
    if(n <= 0)
        return false;

    if(dp[n] != -1)
        return dp[n];

    bool l = false;
    bool r = false;

    l = rec(n - 3);
    if(n%2 == 0)
        r = rec(n / 2);

    dp[n] = l || r;
    return dp[n];
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        memset(dp,-1,sizeof(dp));
        int n;
        cin>>n;
        if(rec(n))
            cout<< "YES"<<endl;
        else
            cout<< "NO" <<endl;
    }
    return 0;
}