#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// In this module, we will learn how to call constructor using string constructor.
int main()
{
    //string s = "Hello";     //normally we work in this way

    //way-1
    //string s("Hello Piku");

    //way-2
    //string s("Hello Tammu",7);   // first 7 letter will be printed

    //way-3
    // string t= "Hi Mimuu";
    // string s(t, 4);     // first 4 letter will be removed and print the remaining letter. 
    
    //way-4
    string s(10, 'C');      //10 times print the letter C.
    cout<< s<<endl;
    return 0;
}