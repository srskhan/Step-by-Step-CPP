#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void ShiftZero(int arr[],int n)
{
    int non_zero_indx=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[non_zero_indx]=arr[i];
            non_zero_indx++;
        }
    }
    for(int i=non_zero_indx;i<n;i++){
        arr[i]=0;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ShiftZero(arr,n);
    return 0;
}