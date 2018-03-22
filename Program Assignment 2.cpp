	/*******************************************************************
	*   CS 121 Programming Assignment 1
	*   File: Program Assignment 1
	*   Author: Tres Cope
	*   Desc: a C++ program that asks the user for a positive integer 
	*		N and generates the Fibonacci series from 0 up to N as output. 
	*   Date: 3/15/2018
	*
	*   I attest that this program is entirely my own work
	*******************************************************************/

// F_n = F_(n-1) + F_(n-2) 

#include<iostream>
 
using namespace std;
 
int main()
{
   int a, b, d = 0, e = 1, f;
 
   cout << "Enter a number" << endl;
   cin >> a;
 
   cout << "The first " << a << " numbers of the Fibonacci sequence are: " << endl;
 
   for ( b = 0 ; b < a ; b++ )
   {
      if ( b <= 1 )
         f = b;
      else
      {
         f = d + e;
         d = e;
         e = f;
      }
      cout << f << endl;
   }
 
   return 0;
}