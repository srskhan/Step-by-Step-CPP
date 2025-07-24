#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    double gpa;


    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student func()
{
    Student sadik(1, 10, 5);
    return sadik;
}

int main()
{
    
    Student obj = func();
    cout<< obj.roll<<" "<<obj.cls<< " "<<obj.gpa<<endl;

    
    return 0;
}