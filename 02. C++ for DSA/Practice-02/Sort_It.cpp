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
    char sec;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp(Student l, Student r)
{
    if(l.math_marks+l.eng_marks== r.math_marks+r.eng_marks){
        return l.id< r.id;
    }
    else{
        return l.math_marks+l.eng_marks > r.math_marks+r.eng_marks;
    }
}

int main()
{
    int n;
    cin>>n;
    Student arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].nm>>arr[i].cls>>arr[i].sec>>arr[i].id>>arr[i].math_marks>>arr[i].eng_marks;
    }

    sort(arr,arr+n, cmp);

    for(int i=0;i<n;i++){
        cout<<arr[i].nm<<" "<<arr[i].cls<<" "<<arr[i].sec<<" "<<arr[i].id<<" "<< arr[i].math_marks<< " " << arr[i].eng_marks <<endl;
    }
    return 0;
}