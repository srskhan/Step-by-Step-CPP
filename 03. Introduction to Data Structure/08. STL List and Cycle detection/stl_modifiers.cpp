#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <sstream>
#include <limits.h>
using namespace std;

int main()
{
    list<int> l1;
    list<int> l2= {1,2,3,4,5};
    // l1 = l2;
    // l1.assign(l2.begin(),l2.end());

    // l2.push_back(100);
    // l2.push_front(100);
    
    // l2.pop_back();
    // l2.pop_front();

    //iterator
    // cout<< *next(l2.begin(), 2);

    l2.insert(next(l2.begin(),4), 100);

    //erase
    l2.erase(next(l2.begin(),1));  //remove index 1

    //erase a range of number
    // l2.erase(next(l2.begin(),1),next(l2.begin(),3));    

    for(int val: l2)
    {
        cout<<val<<" ";
    }

    return 0;
}