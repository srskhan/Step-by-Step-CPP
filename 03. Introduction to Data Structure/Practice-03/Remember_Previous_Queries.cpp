#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <sstream>
#include <limits.h>
using namespace std;

int main()
{
    list<int> l;
    int q;
    cin>>q;
    while(q--)
    {
        int x,v;
        cin>>x>>v;

        if(x == 0){
            l.push_front(v);
        }
        else if( x == 1){
            l.push_back(v);
        }
        else if( x== 2){
            if(l.size()>v){
                l.erase(next(l.begin(),v));     // delete vth index
            }
        }

        //left to right print
        cout<<"L -> ";
        for(int x: l){
            cout<<x<<" ";
        }
        cout<<endl;

        l.reverse();   //reverse it to print right to left

        //right to left print
        cout<<"R -> ";
        for(int x: l){
            cout<<x<<" ";
        }
        cout<<endl;

        l.reverse();   //again reverse it to print left to right

    }




    return 0;
}