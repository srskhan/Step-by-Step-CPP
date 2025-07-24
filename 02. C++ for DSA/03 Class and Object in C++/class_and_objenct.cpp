#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    double gpa;
};

// int main()
// {
//     Student sadik,fatu;
//     cin>>sadik.name>>sadik.roll>>sadik.gpa;
//     cin>>fatu.name>>fatu.roll>>fatu.gpa;
    
//     cout<<sadik.name<< " "<<sadik.roll<<" "<<sadik.gpa;
//     cout<<fatu.name<< " "<<fatu.roll<<" "<<fatu.gpa;
//     return 0;
// }

//for getting full name
int main()
{
    Student sadik,fatu;
    cin.getline(sadik.name,100);
    cin>>sadik.roll>>sadik.gpa;
    cin.ignore();
    cin.getline(fatu.name,100);
    cin>>fatu.roll>>fatu.gpa;
    
    cout<<sadik.name<< " "<<sadik.roll<<" "<<sadik.gpa<<endl;
    cout<<fatu.name<< " "<<fatu.roll<<" "<<fatu.gpa<<endl;
    return 0;
}


