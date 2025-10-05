#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <limits.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<long long int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<long long int>pref(n);
    pref[0]=arr[0];
    for(int i=1;i<n;i++){
        pref[i]=pref[i-1] + arr[i];
    }

    for(int i=n-1;i>=0;i--){
        cout<< pref[i]<<" ";
    }
    return 0;
}