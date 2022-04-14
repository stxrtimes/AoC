#include <iostream>
#include "SonarSweep.h"
#include "Dive.h"

#ifdef _WIN32
#include <conio.h>
#endif

#ifdef __unix__
#include <ncurses.h>
#define _getch() getch()
#endif

using namespace std;

int main()
{
	cout << "Day 1 - Sonar Sweep:" << endl;
	Day1();
	cout << endl;

	cout << "Day 2 - Dive!:" << endl;
	Day2();

	_getch();

	return 0;
}