#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <limits.h>
using namespace std;

void fun(int* &p)
{
    cout<<"In Function: "<< &p<<endl;
}

int main()
{
    int x=10;
    int* p = &x;
    fun(p);
    cout<<"In main function: "<<&p<<endl;

    return 0;
}