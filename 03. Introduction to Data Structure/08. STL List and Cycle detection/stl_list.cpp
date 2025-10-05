#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <sstream>
#include <limits.h>
using namespace std;

int main()
{
    
    list<int> l(5,5);

    //using iterator
    // for(auto it = l.begin(); it!= l.end();it++)
    // {
    //     cout<<*it<<endl;
    // }

    //using shortcut
    for(int val :l)
    {
        cout<<val <<endl;
    }
}
