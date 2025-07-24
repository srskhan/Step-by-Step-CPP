#include <iostream>
#include <vector>
#include <algorithm>
#include<sstream>
#include<limits.h>

using namespace std;

int main()
{
    string st;
    getline(cin, st);
    stringstream ss(st);
    string word;
    ss>>word;
    reverse(word.begin(),word.end());
    cout<<word;
    while (ss>>word)
    {
        reverse(word.begin(),word.end());
        cout<<" "<<word;
    }
    
    return 0;
}