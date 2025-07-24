#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int* func()
{
    int *arr= new int[5];
    for(int i=0;i<5;i++){
        cin>> arr[i];
    }
    return arr;
}

int main()
{
    int *y= func();
    for(int i=0;i<5;i++){
        cout<< y[i]<< " ";
    }

    delete[] y;
    y= nullptr;
    return 0;
}