/* SonarSweep.cpp - Source code for Day 1 of Advent of Code 2021, Sonar Sweep
 * Written by startimes.
 * Takes a "sonar sweep" file and evaluates how many times the depth increases compared to the previous.
 */

#include <iostream>
#include <fstream>

using namespace std;
int main()
{
	ifstream input("input.txt");

	int scan;
	int prevScan = 0;

	int counter = 0;
	for (int i = 0; input >> scan; i++)
	{
		if (i != 0 && scan > prevScan)
		{
			counter++;
		}
		prevScan = scan;
	}
	cout << counter << endl;
}