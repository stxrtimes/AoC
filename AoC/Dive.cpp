/* Dive.cpp - Source code for Day 2 of Advent of Code 2021, "Dive!"
 * Written by startimes.
 * Takes a "sonar sweep" file and evaluates how many times the depth increases compared to the previous.
 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int Day2Part1()
{
	ifstream input("day2input.txt");

	string instruction;

	int currMoveValue;

	int forwardValue = 0;
	int depth = 0;

	while (input >> instruction >> currMoveValue)
	{
		if (instruction == "forward")
		{
			forwardValue += currMoveValue;
		}
		else if (instruction == "up")
		{
			depth -= currMoveValue;
		}
		else if (instruction == "down")
		{
			depth += currMoveValue;
		}
	}

	return forwardValue * depth;
}

int Day2Part2()
{
	return 0;
}

void Day2()
{
	cout << "Answer for part 1: " << Day2Part1() << endl;

	cout << "Answer for part 2: " << Day2Part2() << endl;
}