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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int mn= INT_MAX;

    for(int i=0;i<n;i++){
        mn= min(arr[i],mn);
    }

    int min_count=0;

    for(int i=0;i<n;i++){
        if(arr[i]==mn){
            min_count++;
        }
    }
    if(min_count%2==0){
        cout<<"Unlucky";
    }
    else{
        cout<<"Lucky";
    }
    return 0;
}