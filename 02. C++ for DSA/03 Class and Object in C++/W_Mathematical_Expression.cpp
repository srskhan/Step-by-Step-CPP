#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a,b,c;
    char s, q;
    cin>>a>>s>>b>>q>>c;
    if(s=='+'){
        if(a+b==c){
            cout<<"Yes";
        }
        else{
            cout<<a+b;
        }
    }
    if(s=='-'){
        if(a-b==c){
            cout<<"Yes";
        }
        else{
            cout<<a-b;   
        }
    }
    if(s=='*'){
        if(a*b==c){
            cout<<"Yes";
        }
        else{
            cout<<a*b;
        }
    }
}