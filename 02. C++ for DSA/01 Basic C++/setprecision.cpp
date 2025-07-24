#include<iostream>
#include<iomanip>  //input output manipulation for set precision
using namespace std;

int main()
{
    double d= 20.1767383;
    cout<<fixed<< setprecision(2)<<d<<endl;
    cout<< fixed <<setprecision(4) << d << endl;
    return 0;
}