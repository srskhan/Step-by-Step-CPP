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
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> runningSum(n);
    runningSum[0]=nums[0];
    for(int i=1;i<n;i++){
        runningSum[i]= runningSum[i-1] + nums[i];
    }

    for(int i=0;i<n;i++){
        cout<<runningSum[i];
        if(i != n-1) cout<< " ";
    }
    return 0;
}