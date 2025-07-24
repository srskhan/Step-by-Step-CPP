#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    char ch;
    cin>> ch;
    if(ch>='0'&& ch<='9'){
        cout<<"IS DIGIT";
    }
    else
    {
        if(ch>='a' && ch<= 'z')
        {
            cout<< "ALPHA" <<endl <<"IS SMALL";
        }
        if(ch>='A' && ch<= 'Z'){
            cout<< "ALPHA" <<endl <<"IS CAPITAL";
        }
    }

    return 0;
}