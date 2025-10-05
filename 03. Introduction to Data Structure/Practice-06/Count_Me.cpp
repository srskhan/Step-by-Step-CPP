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
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        map<string,int> mp;
        string sentence;
        getline(cin,sentence);
        stringstream ss(sentence);
        string word;
        int mx_count = INT_MIN;
        string mx_word;
        while(ss>>word)
        {
            mp[word]++;

            if(mp[word] > mx_count)
            {
                mx_count = mp[word];
                mx_word = word;
            }
        }

        // for(auto it=mp.begin(); it != mp.end(); it++)
        // {
        //     cout<< it->first << " " << it->second << endl;
        // }

        cout<< mx_word << " " << mx_count <<endl;
    }
    return 0;
}