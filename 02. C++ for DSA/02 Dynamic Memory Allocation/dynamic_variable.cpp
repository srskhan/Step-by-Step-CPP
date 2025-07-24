#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int *x= new int;
    *x=10;
    cout<< *x <<endl;
    delete x;
    return 0;
}