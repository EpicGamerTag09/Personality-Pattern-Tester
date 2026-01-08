// Personality Pattern Tester.cpp: Designed to allow students to do a personality test without the need for paper
// Programmers: Aidan Litschi & Jensen Dries
// Start Date: 1/6/26
// Date Completed: 1/8/26

#include <iostream>
#include <algorithm>
#include "dblPointQuestions.h"
#include "sngPointQuestions.h"
#include "displayPersonality.h"
using namespace std;


int main()
{
	int Cooperator = 0;
	int Analyzer = 0;
	int Regulator = 0;
	int Energizer = 0;
	// values for the four different personality types

	part1Questions(Cooperator, Analyzer, Regulator, Energizer);
	part2Questions(Cooperator, Analyzer, Regulator, Energizer);
	part3Questions(Cooperator, Analyzer, Regulator, Energizer);

	cout << "Congratulations, you've completed the Programmer Personality Test!" << endl;

	int highestValue = max({ Cooperator, Analyzer, Regulator, Energizer });
	if (Cooperator == highestValue)
	{
		CooperatorDisplay();
	}
	else if (Analyzer == highestValue)
	{
		AnalyzerDisplay();
	}
	else if (Regulator == highestValue)
	{
		RegulatorDisplay();
	}
	else
	{
		EnergizerDisplay();
	}
}