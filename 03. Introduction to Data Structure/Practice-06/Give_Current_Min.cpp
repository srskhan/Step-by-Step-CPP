#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <algorithm>
#include <sstream>
#include <limits.h>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int> > pq;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        pq.push(val);
    }

    int q;
    cin>>q;
    while(q--)
    {
        int command;
        cin>>command;
        if(command == 0){
            int x;
            cin>>x;
            pq.push(x);
            cout<< pq.top()<<endl;;
        }
        else if(command == 1){
            if(pq.empty())
                cout<<"Empty"<<endl;
            else
                cout<< pq.top()<<endl;
        }
        else if(command == 2)
        {
            if(pq.empty())
                cout<< "Empty"<<endl;
            else{
                pq.pop();
                if(!pq.empty())
                    cout<< pq.top()<<endl;
                else
                    cout<<"Empty"<<endl;;
            }
        }
    }
    return 0;
}