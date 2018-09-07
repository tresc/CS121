//Tres Cope
//CS121
//August 28 2018


#include <cmath>
#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;
using std::setw;

//Functions for Program 2
double cels_to_far( double cels ) {
    return cels * (9.0/5.0) + 32.0;
}
double cels_to_kel( double cels ) {
    return cels + 273.15;
}


int main(void)
{
  //Program 1  Translate the following three algebraic equations into C/C++ code
  double x;
  double y;
  // R = 3x^2 + 5x + 1
  x = 3.73;
  double R = 3*pow(x,2)+5*x+1;
  printf("3x^2 + 5x + 1 = %f ", R );

  //S = (x^2 - 12x +27)/(x - 6)^2
  x = 9.385;
  double S = (pow(x,2) - 12*x + 27)/pow(x-6,2);
  printf("\n(x^2 - 12x +27)/(x - 6)^2 = %f ", S );

  //T = (x^2 + 3)/y^3 + (x + 2)/y^2 + 1/y
  x = 2.25;y = 3.50;
  double T = ((pow(x,2)+3)/pow(y,3))+((x+2)/pow(y,2))+1/y;
  printf("\n(x^2 + 3)/y^3 + (x + 2)/y^2 + 1/y = %f ", T );

  //Program 2 Write a program that creates a table of temperatures in Celsius,
  // Fahrenheit and Kelvin
  double tempc;
  double incr;
  double max_c;
  cout << "\n\nEnter a starting temperature in degrees Celsius.\n";
  cin >> tempc;
  cout << "Enter an ending temperature in degrees Celsius.\n";
  cin >> max_c;
  cout << "Enter the increment value: " << '\n';
  cin >> incr;
  cout << "\n         #      Cels      Fahr       Kel      \n";
    for ( int i = 0; tempc < max_c; ) {
        cout << setw(10) << ++i << std::fixed << std::setprecision(2)
            << setw(10) << tempc
            << setw(10) << cels_to_far(tempc)
            << setw(10) << cels_to_kel(tempc) << std::endl;;
        tempc += incr;
    }

//Program 3 Calculate the average of a series of homework grades (0 - 100)
//entered one at a time. In this case the lowest score will be
//dropped and the average computed with the remaining grades.

float score,avg, lowest;
    int i = 0;
    int scores = 0;
    cout << "How many scores will you enter";
    cin >> scores;
    while(i < scores)
    {
        cout << "Please enter test score (Please enter value between 1 and 100): ";
        cin >> score;
        if (score > 0 && score < 100)
        {
           avg = avg + score;
           if (score < lowest)
           lowest = score;
           i++;
        }
        else
        {
            cout<< "ERROR: Please enter Test score values 0 to 100!" <<endl;
        }
    }
    avg = avg - lowest;
    avg = avg/scores;

    cout << "Average is" << avg <<endl;

    return 0;


}
