#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;

    Student(string name, int roll,char section, int math_marks,int cls){
        this->name=name;
        this->roll=roll;
        this->section=section;
        this->math_marks=math_marks;
        this->cls=cls;

    }
};

int main()
{
    Student Piku("Priyash", 1,'A',75, 10);
    Student Mehedi("Mehedi",2,'B',85,9);
    Student Rakib("Rakib",3,'C',90,10);
    if(Piku.math_marks>Mehedi.math_marks && Piku.math_marks>Rakib.math_marks){
        cout<<Piku.name<<endl;
    }
    else if(Mehedi.math_marks>Piku.math_marks && Mehedi.math_marks>Rakib.math_marks){
        cout<<Mehedi.name<<endl;
    }
    else{
        cout<<Rakib.name<<endl;
    }
    return 0;
}