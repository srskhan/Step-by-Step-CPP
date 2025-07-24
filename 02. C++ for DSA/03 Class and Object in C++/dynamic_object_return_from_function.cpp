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

    Student(int roll, int cls,double gpa){
        this->roll=roll;
        this->cls= cls;
        this->gpa= gpa;
    }
};

Student* func(){
    Student* sadik = new Student(1, 10, 5.00);
    return sadik;
}

int main()
{
    Student* p= func();
    cout<<p->roll<< " "<<p->cls<< " "<<p->gpa<<endl;
    return 0;
}