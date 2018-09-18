//Tres Cope
//CS121
//September 13 2018
//Programming assignment 2 - Program 3
#include<iostream>

using namespace std;

void convert(string str)
{

    int hour = (int)str[1] - '0';
    int minute = (int)str[0] - '0';
    int hh = (minute * 10 + hour % 10);

    if (str[8] == 'A')
    {
        if (hh == 12)
        {
            cout << "00";
            for (int i=2; i <= 7; i++)
                cout << str[i];
        }
        else
        {
            for (int i=0; i <= 7; i++)
                cout << str[i];
        }
    }


    else
    {
        if (hh == 12)
        {
            cout << "12";
            for (int i=2; i <= 7; i++)
                cout << str[i];
        }
        else
        {
            hh = hh + 12;
            cout << hh;
            for (int i=2; i <= 7; i++)
                cout << str[i];
        }
    }
}

int main()
{
   //string str;
   //cout << "Enter a time to convert in this format --> 07:05:45PM. : ";
   //cin >> str;
   //convert(str);
   convert("05:30:00PM");
   cout << endl;
   convert("06:45:50PM");
   cout << endl;
   convert("12:32:30AM");
   cout << endl;
   convert("12:15:18PM");
   cout << endl;
   convert("01:02:22PM");
   return 0;
}
