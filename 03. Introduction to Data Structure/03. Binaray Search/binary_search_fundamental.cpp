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
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int val;
    cin>>val;
    int flag = 0;

    int l=0;
    int r=n-1;
    while(l<=r)
    {
        int mid_indx=(l+r)/2;
        if(arr[mid_indx]==val){
            flag =1;
            break;
        }
        else if(arr[mid_indx]<val){
            l = mid_indx +1;
        }
        else{
            r = mid_indx -1;
        }
    }

    if(flag ==1){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    return 0;
}