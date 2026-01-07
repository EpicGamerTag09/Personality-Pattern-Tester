// Personality Pattern Tester.cpp: Designed to allow students to do a personality test without the need for paper
// Programmers: Aidan Litschi & Jensen Dries
// Start Date: 1/6/26
// Date Completed: N/A

#include <iostream>
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
}