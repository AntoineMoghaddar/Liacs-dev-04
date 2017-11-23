// PM04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void mainMenu();

int main()
{
	mainMenu();
	int opt;
	cin >> opt;
	while(opt != 9) {
		switch (opt) {
		case 1: break;
		case 2: break;
		case 3: break;
		case 4: break;
		case 5: break;
		case 6: break;
		case 7: break;
		case 8: break;
		default: cout << "Rather use a valid option" << endl;  break;
		}
		mainMenu();
		cin >> opt;
	}
    return 0;
}

int print(){

}

int multiply(){

}

int count() {

}

int fibonacci() {

}

int read(){

}

int add() {

}

int make_one() {

}

int destroy(){

}

/* MainMenu
* @Definition: The xuser interface
* @improvements:  create User interface (GUI)
*/
void mainMenu() {
	cout << "__________________________________" << endl << "\t      PM04" << endl << "    What action do you demand?" << endl << "__________________________________"
		<< endl << "\n 1) print \t 5) vermenigvuldig \n 2) telop \t 6) fibonacci \n 3) leesin  \t 7) voegachter \n 4) maakeen \t 8) vernietig \n \n 9) Stoppen" << endl << "__________________________________" << endl << "Number: " << endl;
}
