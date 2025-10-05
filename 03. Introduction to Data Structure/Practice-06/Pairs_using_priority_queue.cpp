#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <algorithm>
#include <sstream>
#include <limits.h>
using namespace std;

class Person
{
public:
    string name;
    int unique_val;

    Person(string name, int unique_val)
    {
        this->name = name;
        this->unique_val = unique_val;
    }
};

class cmp
{
public:
    bool operator()(Person l, Person r)
    {
        if(l.name > r.name)
            return true;
        else if( l.name < r.name)
            return false;
        else{
            return l.unique_val < r.unique_val;
        }
    }
};

int main()
{
    int n;
    cin>>n;
    priority_queue<Person, vector<Person>, cmp > pq;
    while(n--)
    {
        string name;
        int unique_val;
        cin>>name>>unique_val;
        Person obj(name, unique_val);
        pq.push(obj);
    }

    while(!pq.empty())
    {
        cout<< pq.top().name << " " << pq.top().unique_val <<endl;
        pq.pop();
    }

    return 0;
}