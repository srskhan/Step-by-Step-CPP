#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <limits.h>
using namespace std;

int main()
{
    string names;
    getline(cin, names);
    stringstream ss(names);
    string nam;
    int flag = 0;
    while (ss>>nam)
    {
        if(nam == "Jessica"){
            flag=1;
        }
        
    }
    if(flag == 1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}