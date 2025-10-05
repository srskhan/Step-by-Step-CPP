#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <limits.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int start_space_upper = 0;
    int middle_space_upper = n-2;
    
    for(int i=1;i<=n/2;i++){ //for upper  line

        for(int j=0;j<start_space_upper;j++){      //for printing starting space
            cout<<" "; 
        }
        start_space_upper++;
        cout<< "\\";                // for back slash
        for(int j=0;j<middle_space_upper;j++){        //for middle space
            cout<<" ";
        }
        middle_space_upper-=2;
        cout<<"/";                  // for forward slash
        cout<<'\n';
    }

    for(int i=1;i<=n/2;i++){
        cout<<" ";
    }
    cout<<"X"<<endl;

    int start_space_lower = n/2-1;
    int middle_space_lower = 1;

    for(int i=1;i<=n/2;i++){        //for lower line

        for(int j=0;j<start_space_lower;j++){   //for printing starting space
            cout<<" ";
        }
        start_space_lower--;

        cout<<"/";                  //for forward slash

        for(int j=0;j<middle_space_lower;j++){      //for printing middle space
            cout<<" ";
        }
        middle_space_lower+=2;
        cout<<"\\";             //for back slash
        cout<<"\n";

    }
    return 0;
}