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
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> suf(n);
    suf[n-1]= arr[n-1];
    for(int i=n-2;i>=0;i--){
        suf[i]= suf[i+1]+ arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<suf[i]<<" ";
    }
    return 0;
}