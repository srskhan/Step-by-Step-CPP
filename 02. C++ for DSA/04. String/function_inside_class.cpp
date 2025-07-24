#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
    int math_marks;
    int english_marks;

    Student(string name, int roll, int math_marks, int english_marks){
        this->name=name;
        this->roll=roll;
        this->math_marks=math_marks;
        this->english_marks= english_marks;
    }

    void Total(){
        cout<<"Total Marks of "<< name << " = "<<math_marks+english_marks<<endl;
    }

};

int main()
{
    Student piku("Priyash Ahmed", 19, 85, 92);
    Student tammu("Tamim Khan", 10,95, 89);
    piku.Total();
    tammu.Total();
    return 0;
}