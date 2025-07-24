#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ith=0;
    int jth=n-1;
    int is_palindrome=1;
    while (jth>ith)
    {
        ith++;
        jth--;
        if(arr[ith]!=arr[jth]){
            is_palindrome=0;
            break;
        }
    }
    
    cout<<(is_palindrome? "YES" : "NO");
    return 0;
}