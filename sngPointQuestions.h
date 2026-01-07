#include <string>
using namespace std;

#pragma region Data
char sngAnswerKey[38][4];
string sngQuestionsPartTwo[20];
string sngQuestionsPartThree[18][2];
#pragma endregion

void part2Questions(int& pool1, int& pool2, int& pool3, int& pool4)
{// Asks the user the 20 part 2 questions and adds the scored points to the correct column
	char input;
	bool dataNeeded;
	cout << "Part 2: Select the word in each pair that best describes you." << endl;
	for (int i = 0; i < 20; i++)
	{
		cout << sngQuestionsPartTwo[i] << endl << "   -> ";
		cin >> input;
		do
		{
			if (toupper(input) == sngAnswerKey[i][0])
			{
				pool1 += 1;
				dataNeeded = false;
			}
			else if (toupper(input) == sngAnswerKey[i][1])
			{
				pool2 += 1;
				dataNeeded = false;
			}
			else if (toupper(input) == sngAnswerKey[i][1])
			{
				pool3 += 1;
				dataNeeded = false;
			}
			else if (toupper(input) == sngAnswerKey[i][1])
			{
				pool4 += 1;
				dataNeeded = false;
			}
			else
			{
				cout << "Please enter a valid option." << endl << endl;
				dataNeeded = true;
			}
		} while (dataNeeded);
		cout << endl;
	}

