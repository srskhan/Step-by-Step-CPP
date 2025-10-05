#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <limits.h>
using namespace std;

int main()
{
    //type-01
    // vector<int> v;
    // cout<<v.size();
    
    //type-02
    // vector<int> v(10);
    // cout<<v.size();
    // return 0;

    //type-03
    // vector<int> v(10,-1);
    // for(int i=0;i<v.size();i++){
    //     cout<< v[i]<<" ";
    // }

    //type-04
    // vector<int> v1(10,1);
    // vector<int> v(v1);
    // for(int i=0;i< v.size();i++){
    //     cout<< v[i]<<" ";
    // }

    //type-05
    // int a[5] = {1,2,3,4,5};
    // vector<int> v(a,a+5);
    // for(int i=0;i< v.size();i++){
    //     cout<< v[i]<<" ";
    // }

    //type-06
    vector<int> v = {1,2,3,4,5,6};
    for(int i=0;i< v.size();i++){
        cout<< v[i]<<" ";
    }


}