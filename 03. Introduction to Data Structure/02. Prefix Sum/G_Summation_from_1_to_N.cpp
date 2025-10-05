#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <limits.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long int sum=0;
    sum = (n*(n+1))/2;
    cout<<sum;
    return 0;
}