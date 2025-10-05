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

    l.remove(20);
    
    l.sort();       //ascending order

    l.sort(greater<int>());     //descending order

    l.unique();         //work if list is sorted

    l.reverse();
    
    for(int val:l)
    {
        cout<<val<<" ";
    }
    return 0;
}