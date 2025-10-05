#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <sstream>
#include <limits.h>
using namespace std;

int main()
{
    queue<string> q;
    int queries;
    cin>>queries;
    while(queries--)
    {
        int command;
        cin>>command;
        
        if(command == 0)
        {
            string name;
            cin>>name;
            q.push(name);
        }
        else if(command == 1)
        {
            if(q.empty()==true){
                cout<<"Invalid"<<endl;
            }
            else{
                cout<<q.front()<<endl;
                q.pop();
            }
        }
    }
    return 0;
}