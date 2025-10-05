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
    map<string,int> mp;

    mp["Rakib"] = 10;
    mp["Shakib"] = 40;  //O(logN)
    mp["Akib"] = 22;
    mp["Nokib"] = 33;

    for(auto it= mp.begin(); it != mp.end(); it++)   //O(NlogN)
    {
        cout<< it->first << " " << it->second <<endl;   //O(logN)
    }

    if(mp.count("Hamim"))
        cout<< "Present"<<endl;
    else
        cout<< "Not Present" <<endl;
    return 0;
}