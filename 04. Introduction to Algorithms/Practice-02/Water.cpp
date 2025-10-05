#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <algorithm>
#include <sstream>
#include <limits.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int arr[n];
        for(int i=0;i<n;i++){
            cin>> arr[i];
        }

        long long int max_height = 0;
        int i = 0;
        int j = n-1;
        int ai = 0, aj = 0;

        while(i<j)
        {
            long long int height = min(arr[i],arr[j]);
            if(height > max_height){
                max_height = height;
                ai = i;
                aj = j;
            }
            
            if(arr[i] < arr[j])
                i++;
            else
                j--;
        }

        cout<< ai << " " << aj <<endl;
    }
    return 0;
}