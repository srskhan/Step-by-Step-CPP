#include <iostream>
#include <vector>
#include <algorithm>
#include<limits.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int mx=INT_MIN;
    int mn= INT_MAX;
    int mx_idx;
    int mn_idx;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>mx){
            mx= arr[i];
            mx_idx=i;
        }
        if(arr[i]<mn){
            mn=arr[i];
            mn_idx=i;
        }
    }
    swap(arr[mx_idx],arr[mn_idx]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}