#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <algorithm>
#include <sstream>
#include <cstring>
#include <limits.h>
using namespace std;

long long int dp[1006];

long long int fib(long long int n)
{
    if(n < 2)
        return n;
    if(dp[n] != -1)
        return dp[n];

    dp[n] = fib(n-1) + fib(n-2);

    return dp[n];
}

int main()
{
    memset(dp,-1,sizeof(dp));
    long long int n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}