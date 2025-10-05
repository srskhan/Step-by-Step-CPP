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

    for(int i=0;i<n;i++){
        int left_side_sum = 0;
        int right_side_sum = 0;

        for(int j=0;j<i;j++){
            left_side_sum+=arr[j];
        }

        for(int j=i+1;j<n;j++){
            right_side_sum+=arr[j];
        }

        if(left_side_sum==right_side_sum){
            cout<<i<<endl;
        }
    }

    return 0;
}