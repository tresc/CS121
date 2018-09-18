//Tres Cope
//CS121
//September 13 2018
//Programming assignment 2 - Program 2
#include<math.h>
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    unsigned long long int n;
    for (int i=0; i<=63; i++){
        n = pow(2,i);
        cout << i <<"  "<< setw(19) << n << endl;
    }
}
