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

int main()
{
    int n;
    cin>>n;
    Student arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].name>>arr[i].roll>>arr[i].marks;
    }

    Student mn;
    mn.marks = INT_MAX;
    for(int i=0;i<n;i++){
        if(mn.marks>arr[i].marks){
            mn=arr[i];
        }
    }

    cout<<mn.name<<" "<<mn.roll<<" "<<mn.marks<<endl;
    return 0;
}