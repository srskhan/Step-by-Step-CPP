#include <iostream>
#include <vector>
#include <algorithm>
#include<limits.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int mn= INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]+arr[j]+j-i<mn){
                    mn= arr[i]+arr[j]+j-i;
                }
            }
        }
        cout<<mn<<endl;
    }
    return 0;
}