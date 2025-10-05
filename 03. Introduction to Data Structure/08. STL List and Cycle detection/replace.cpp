#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <sstream>
#include <limits.h>
using namespace std;

int main()
{
    list<int> l = {10, 20, 30, 35, 20, 40,20};

    replace(l.begin(),l.end(), 20, 100);

    for(int val:l)
    {
        cout<<val<<" ";
    }
    return 0;
}