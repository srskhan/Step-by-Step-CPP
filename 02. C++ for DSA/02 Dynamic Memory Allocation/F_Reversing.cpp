#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int j=n-1;
    for(int i=0;i<j;i++){
        swap(arr[i],arr[j]);
        j--;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
    return 0;
}