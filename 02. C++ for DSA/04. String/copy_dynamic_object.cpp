#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Footballer
{
    public:
    string country;
    int jersey;

    Footballer(string country, int jersey){
        this->country=country;
        this->jersey=jersey;
    }

};


int main()
{
    Footballer *messi = new Footballer("Argentina",10);
    Footballer *ronaldo = new Footballer("Portugal", 7);
    *messi= *ronaldo;
    delete ronaldo;
    cout<< messi->country<< " "<< messi->jersey<< endl;
    return 0;
}