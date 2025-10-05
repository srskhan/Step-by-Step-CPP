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
    int duplicate =0;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[i]+1==v[j]){
                duplicate++;
                break;
            }
        }
    }
    cout<< duplicate<<endl;
    return 0;
}