#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int *p;

// checking that when function return the value, it erase the value from stack memory.
// void fun()
// {
//     int x= 10;
//     p=&x;
//     cout<< "Func--> "<< *p <<endl;
// }

// int main()
// {
//     fun();
//     cout<<"Main -> "<< *p <<endl;
//     return 0;
// }


//checking that dynamic memory store in the heap memory. when function return value to the main function, it does not delete the value.
void fun()
{
    int *x= new int;
    *x= 10;
    p=x;
    cout<< "Func--> "<< *p <<endl;
}

int main()
{
    fun();
    cout<<"Main -> "<< *p <<endl;
    delete p;
    return 0;
}