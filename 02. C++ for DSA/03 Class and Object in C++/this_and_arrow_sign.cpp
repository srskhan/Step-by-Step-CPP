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

int main()
{
    Student sadik(1, 10, 5);
    Student fatu(2, 10, 5.00);
    Student nahid(3, 10, 4.99);
    cout<< sadik.roll<<" "<<sadik.cls<< " "<<sadik.gpa<<endl;
    cout<< fatu.roll<<" "<<fatu.cls<< " "<<fatu.gpa<<endl;
    cout<< nahid.roll<<" "<<nahid.cls<< " "<<nahid.gpa<<endl;
    
    return 0;
}