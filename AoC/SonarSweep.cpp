/* SonarSweep.cpp - Source code for Day 1 of Advent of Code 2021, "Sonar Sweep"
 * Written by startimes.
 * Takes a "sonar sweep" file and evaluates how many times the depth increases compared to the previous.
 */

#include <iostream>
#include <fstream>
#include <vector>
#include "SonarSweep.h"

using namespace std;

vector<int> ConvertFileToVectorInt();

int Day1Part1()
{
	ifstream input("day1input.txt");

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
	return counter;
}

int Day1Part2()
{
	int scan = 0;
	int prevScan = 0;

	int counter = 0;

	vector<int> input = ConvertFileToVectorInt();

	for (int i = 0; i < input.size(); i++)
	{
		if (i < input.size() - 2)
		{
			scan = input[i] + input[i + 1] + input[i + 2];
			if (i != 0 && scan > prevScan)
			{
				counter++;
			}
			prevScan = scan;
		}
	}

	return counter;
}

void Day1()
{
	cout << "Answer for part 1: " << Day1Part1() << endl;

	cout << "Answer for part 2: " << Day1Part2() << endl;
}

vector<int> ConvertFileToVectorInt()
{
	ifstream input("day1input.txt");

	vector<int> fileVector;

	int scan;
	while (input >> scan)
	{
		fileVector.resize(fileVector.size() + 1);
		fileVector[fileVector.size() - 1] = scan;
	}

	return fileVector;
}