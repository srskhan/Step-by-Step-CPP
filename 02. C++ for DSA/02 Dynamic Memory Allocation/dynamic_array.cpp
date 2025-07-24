#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int *arr = new int[5];
    for(int i=0;i<5;i++){
        cin>> arr[i];
    }
    for(int i=0;i<5;i++){
        cout<< arr[i]<< " ";
    }

    delete[] arr;
    arr = nullptr;

    return 0;
}