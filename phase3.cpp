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



#include <iostream>
#include <string>

using namespace std;

int main()
{
	string action;
	string object;
	int now_row;
	int now_collumn;
	int rows;
	int collumns;

	now_collumn = 0;
	now_row = 0;
	rows = 6;
	collumns = 5;

	cout << "				  ae\n";
	cout << "                          .___   ]@@\n";
	cout << "                      _zza@@@@@bd@@@ _\n";
	cout << "                ]@L._d@@@@@@@@@@@@@@a[\n";
	cout << "                `@@@@@@@@@@@@@@@@@@@@[\n";
	cout << "             __zd@@@@@@@@@@@@@@@@@@@@\n";
	cout << "             \"~]@@@@@@zzd@@@@@@@@@@@@\n";
	cout << "               q@@@@~_a@@@@@@~@@@@@@@,\n";
	cout << "               ]@@~ _a@@@@@~@b ]@@@@@\n";
	cout << "              _@]bz@~\"     _@@ ]@@@~\n";
	cout << "              @~UCL______z%~  .a@@@,\n";
	cout << "              qz \"~~~~~~\"    _a@@@@L\n";
	cout << ".___,          `z_,        _d@@@@@@@bL____\n";
	cout << "dC~~-zz_ ._    ]d@@@z_   .d@@@@@@@@@@@@@@@@L\n";
	cout << "`~@zL_\"~-@]b_,z@@@@@@@b__a@@@@@@@@@@@@@@@@@@,\n";
	cout << "   `~~aza'  `~@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@[\n";
	cout << "       ][    .d@-@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
	cout << "      .%    ]a@z__\"~~@@@@@@@@@@@@@@@@@@@@@@@@,\n";
	cout << "      d'  .d@@@@@@@zz__~~-@@@@@@@@@@@@@@@@@@@'\n";
	cout << "     ]P  ]@@@@@@@@@@@@@@z__\"~-@@@@@@@@@@@@@@@,\n";
	cout << "    dr  )@@@@@@@@@@@@@@@@@@@zz_`~~@@@@@@@@@@@L\n";
	cout << "   d'   d@@@@@@@@@@@@@@@@@@@@@@@bzL=~~@@@@@@@L\n";
	cout << "  d'    a@@@@@' `@@@@@@@@@@@@@@@@@@@@zz_~~~@@@~-zz_\n";
	cout << " d'    ]@@@@@'   ]@@@@@@@@@@@@@@@@@@@@@@@zz_]r.% _~a_         _d~-_\n";
	cout << ".[     a@@@~     ]@@@@@@@@@@@@@@@@@@@@@@@@@@@Ld'.[.%az__  __z=\"   ~-_\n";
	cout << "][    )@@@'      `@@@@@@@@@@@@@@@@@@@@@@@@~~~@@_d'aCC`~~~~~\"  ____ `~z_\n";
	cout << "]'    a@@        .@@@@@@@@@@@@@@@@@@@@@@P     `]@~~~~~zz     `@=~~@z_`~z@,\n";
	cout << "]    d@~'        ]@@@@@@@@@@@@@@@@@@@@@@      _r       qL      ~-z_]7-z_~@\n";
	cout << "],._d'          .a@@@@@@@@@@@@@@@@@@@@@[    _d'        `a  )zzL_,`~U@z@bza\n";
	cout << "]b~~            d@@@@@@@@@@@@@@@@@@@@@@@__zd~'          ]L  a_`~~-zL\"~z  ~\n";
	cout << "                a@@@@@@@@@@@@@@@@@@@@@@@~\"               a, \"~-z_`-z--=-\n";
	cout << "               .@@@@@@@@@@@@@@@@@@@@@@@@b                `L__  `~-d@z\n";
	cout << "               ]@@@@@@@@@@@@@@@@@@@@@@@@@,                \"~~~~-zz_\"`L\n";
	cout << "              ]@@@@@@@@@@@@@@@@@@@@@@@@@@L                      `~K~~~'\n";
	cout << "             .@@@@@@@@@@@@@@@@@@@@@@@@@@@@b_\n";
	cout << "                `~~~~~~~~-@@@@@@@@@@@@@@@@@@bL\n";
	cout << "                               ~~~~~~~~~@@@@@@@L \n";
	cout << "              Credit for image: KANGAROO of http://ascii-art.de\n\n\n";

	cout << "\t\t\tWelcome human, TO HELL!\n\n";
	cout << "The exact year is unknown, but it is estimated to be the early 21st century. You \n";
    cout << "wake up in a cavern; You heard a deep rumbling voice announce your arrival in hell.\n";
    cout << "Your objective is to find the in your posession an door that leads back into the \n";
    cout << "open the final door. You will encounter creatures that will try to deter \n";
    cout << "human world. You will need to find four artifacts to [i.e EAT!] you. Do not try to  \n";
    cout << "defeat the demons, rather you should avoid them at all costs. As the you progress through the \n";
    cout << "map you will find random items and memorabilia from your past\n\n";
	cout << "\t\t\tInstructions\n\n";
	cout << "'GO' is your movement command";
	cout << "'Take ~item name~' to pick up items\n";


	cout <<"\nWhat do you want to do? ";
	cin >> action >> object;
	cout << endl;

	cout << "Command is: "<< action << " " << object << endl;
}