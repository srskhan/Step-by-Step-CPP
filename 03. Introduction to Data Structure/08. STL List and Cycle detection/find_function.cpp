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

    auto it = find(l.begin(),l.end(), 20);

    if(it == l.end())
    {
        cout<< "Not Found";
    }
    else
    {
        cout<<"Found";
    }
    return 0;
}