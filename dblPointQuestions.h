#include <string>
using namespace std;

#pragma region Data
char dblAnswerKey[13][4];
string dblQuestions[13][3];
#pragma endregion

void doublePointQuestions(int& bucket1, int& bucket2, int& bucket3, int& bucket4)
{// Asks the user 13 2-point questions and adds the scored points to the correct collumn
	char userAnswer;
	bool needData;
	for (int i = 0; i < 13; i++)
	{
		do
		{
			cout << dblQuestions[i][0] << endl;
			cout << dblQuestions[i][1] << endl;
			cout << dblQuestions[i][2] << endl;
			cout << "   -> ";
			cin >> userAnswer;

			if (toupper(userAnswer) == dblAnswerKey[i][0])
			{
				bucket1 += 2;
				needData = false;
			}
			else if (toupper(userAnswer) == dblAnswerKey[i][1])
			{
				bucket2 += 2;
				needData = false;
			}
			else if (toupper(userAnswer) == dblAnswerKey[i][2])
			{
				bucket3 += 2;
				needData = false;
			}
			else if (toupper(userAnswer) == dblAnswerKey[i][3])
			{
				bucket4 += 2;
				needData = false;
			}
			else
			{
				cout << "Please enter a valid option." << endl << endl;
				needData = true;
			}
		} while (needData);
		cout << endl;
	}
}