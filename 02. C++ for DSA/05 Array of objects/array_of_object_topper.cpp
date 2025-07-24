#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <limits.h>
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
        cin>> arr[i].name >> arr[i].roll >> arr[i].marks;
    }

    Student topper=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i].marks>topper.marks){
            topper= arr[i];
        }
        else if(arr[i].marks==topper.marks){
            if(arr[i].roll<topper.roll){
                topper=arr[i];
            }
        }
    }
    cout<<topper.name<<" "<<topper.roll<<" "<<topper.marks<<endl;

    return 0;
}