#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <limits.h>
using namespace std;
class Student
{
    public:
    string nm;
    int cls;
    string sec;
    int id;

};

int main()
{
    int n;
    cin>>n;
    Student arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].nm>>arr[i].cls>>arr[i].sec>>arr[i].id;
    }
    int i=0, j=n-1;
    while (i<j)
    {
        swap(arr[i].sec, arr[j].sec);
        i++;
        j--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i].nm<<" "<<arr[i].cls<<" "<<arr[i].sec<<" "<<arr[i].id<<endl;
    }
    return 0;
}