#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Student
{
    public:
    int roll;
    string name;
    char section;
    int math_marks;
    int cls;
   
};
int main()
{   
    int n;
    cin>>n;
    Student topper;
    for(int i=0;i<n;i++){
        Student temp;
        cin>>temp.roll>>temp.name>>temp.section>>temp.math_marks>>temp.cls;

        if(i==0){
            topper = temp;
        }
        else{
            if(temp.math_marks>topper.math_marks){
            topper=temp;
            }
            else if(temp.math_marks==topper.math_marks){
                if(temp.roll<topper.roll){
                    topper=temp;
                }
            }
        }
        
    }
    cout<< topper.roll<<" "<<topper.name<< " "<<topper.section<< " "<< topper.math_marks<<" "<< topper.cls<<endl;
}