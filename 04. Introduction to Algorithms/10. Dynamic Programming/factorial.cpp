#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <algorithm>
#include <sstream>
#include <limits.h>
using namespace std;

int fic(int n)
{
    if(n == 1)
        return 1;

    return n * fic(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<fic(n)<<endl;
    return 0;
}