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

    cout<<l.front()<<endl;

    cout<<l.back()<<endl;

    cout<< *l.begin()<<endl;
    cout<< *l.end();  // it gives pointer after the end point so get random value
    

    return 0;
}