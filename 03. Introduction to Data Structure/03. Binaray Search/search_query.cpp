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
    int q;
    cin>>q;
    sort(arr.begin(),arr.end());

    while (q--)
    {
        int query_val;
        cin>>query_val;

        int l=0;
        int r= n-1;
        int flag = 0;
        while(l<=r){
            int mid_idx = (l+r)/2;
            if(arr[mid_idx]==query_val){
                flag = 1;
                break;
            }
            else if(arr[mid_idx]< query_val){
                l = mid_idx+1;
            }
            else{
                r= mid_idx -1;
            }
        }
        if(flag == 1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}