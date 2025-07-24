#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long int* sort_it(int n){
    long long int *arr= new long long int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n,greater<int>());
    return arr;
}

int main()
{
    int n;
    cin>>n;
    long long int *arr2= sort_it(n);
    
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
    delete[] arr2;
    
    return 0;
}