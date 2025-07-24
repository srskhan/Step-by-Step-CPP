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

    swap(arr[0].marks, arr[3].marks);

    for(int i=0;i<n;i++){
        cout<< arr[i].name<<" "<<arr[i].roll<< " " <<arr[i].marks<<endl;
    }

    
    return 0;
}