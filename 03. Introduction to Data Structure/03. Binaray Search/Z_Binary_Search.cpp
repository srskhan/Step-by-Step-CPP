#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <limits.h>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr.begin(),arr.end());

    while (q--)
    {
        int val;
        cin>>val;
        
        int flag = 0;
        int l = 0;
        int r = n-1; 

        while (l<=r)
        {
            int mid_idx = (l+r)/2;
            if(arr[mid_idx]==val){
                flag =1;
                break;
            } 
            else if(arr[mid_idx]<val){
                l = mid_idx +1;
            }
            else{
                r= mid_idx -1;
            }
        }
        if(flag ==1){
            cout<<"found"<<endl;
        }
        else{
            cout<<"not found"<<endl;
        }

    }
    
    return 0;
}