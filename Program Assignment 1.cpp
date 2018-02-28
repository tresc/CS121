	/*******************************************************************
	*   CS 121 Programming Assignment 1
	*   File: Program Assignment 1
	*   Author: Tres Cope
	*   Desc: The program will find the distance between three points
	*		  using the distance formula
	*   Date: 2/27/2018
	*
	*   I attest that this program is entirely my own work
	*******************************************************************/

// Formula: distance = sqrt[(x1 - x2)^2 + (y2 - y1)^2]

#include <iostream>
#include <math.h>



using namespace std;

double distance1(double x, double y, double a, double b);
double distance2(double x, double y, double foo, double bar);

int main()
{
	int ch;
	double x = 50;
	double y = 25;
	double a = 50;
	double b = 150;
	double foo = 150;
	double bar = 75;
	double answer1;
	double answer2;	

    answer1 = distance1(x, y, a, b);
    answer2 = distance2(a, b, foo, bar);
    cout << "The distance between (50,25) and (50, 150) is: " << answer1;
    cout << "\nThe distance between (50, 150) and (150,75) is: " << answer2;    
}

double distance1(double x, double y, double a, double b){
return sqrt(pow(x - a, 2) + pow(y - b, 2));
}

double distance2(double a, double b, double foo, double bar){
return sqrt(pow(a - foo, 2) + pow(b - bar, 2));
}


