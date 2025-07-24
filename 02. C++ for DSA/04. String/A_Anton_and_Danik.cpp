#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int a_count=0;
    int d_count=0;

    for(int i=0;i<n;i++){
        if(arr[i]=='A'){
            a_count++;
        }
        else if(arr[i]=='D'){
            d_count++;
        }
    }

    if(a_count>d_count){
        cout<<"Anton"<<endl;
    }
    else if(d_count>a_count){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
    return 0;
}