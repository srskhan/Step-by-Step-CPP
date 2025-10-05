#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <sstream>
#include <limits.h>
using namespace std;

int main()
{
    list<int> l1= {1,2,3,4,5};
    list<int> l2(l1);

    for(int val: l2)
    {
        cout<< val<<" ";
    }

    cout<<endl;

    //array in stl list
    int arr[]= {1,2,3};
    list<int> l3(arr,arr+3);
    for(int val: l3)
    {
        cout<< val<<" ";
    }
    cout<<endl;

    //vector in stl list
    vector<int> v= {5,6,7,8,9};
    list<int> l4(v.begin(),v.end());
    for(int val: l4)
    {
        cout<< val<<" ";
    }
    
    return 0;
}