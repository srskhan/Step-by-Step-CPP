#include <iostream>
#include <vector>
#include <algorithm>
#include<limits.h>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
    int marks;
};

bool cmp(Student l, Student r)
{
    // if(l.marks>r.marks){
    //     return true;
    // }
    // else if(l.marks<r.marks){
    //     return false;
    // }
    // else{
    //     if(l.roll<r.roll){
    //         return true;
    //     }
    //     else{
    //         return false;
    //     }
    // }
    
    // shortcut

    if(l.marks==r.marks){
        return l.roll<r.roll;
    }
    else{
        return l.marks>r.marks;
    }
}

int main()
{
    int n;
    cin>>n;
    Student arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].name>>arr[i].roll>>arr[i].marks;
    }

    sort(arr, arr+n, cmp);

    for(int i=0;i<n;i++){
        cout<<arr[i].name<<" "<<arr[i].roll<<" "<<arr[i].marks<<endl;
    }
    
    return 0;
}