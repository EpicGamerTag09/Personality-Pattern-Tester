#include <string>
using namespace std;

#pragma region Data
char sngAnswerKey[38][4];
string sngQuestionsPartTwo[20];
string sngQuestionsPartThree[18][2];
#pragma endregion

void part2Questions(int& bucket1, int& bucket2, int& bucket3, int& bucket4)
{// Asks the user 20 1-point questions and adds the scored points to the correct column
    char userAnswer;
    bool needData;
    cout << "Part II: Complete the following statements with the choice that best describes you." << endl;
    for (int i = 0; i < 20; i++)
    {
        do
        {
            cout << sngQuestionsPartTwo[i] << endl;
            cout << "   -> ";
            cin >> userAnswer;

            if (toupper(userAnswer) == 'A' || toupper(userAnswer) == 'B')
            {
                if (toupper(userAnswer) == sngAnswerKey[i][0])
                {
                    bucket1 += 1;
                    needData = false;
                }
                if (toupper(userAnswer) == sngAnswerKey[i][1])
                {
                    bucket2 += 1;
                    needData = false;
                }
                if (toupper(userAnswer) == sngAnswerKey[i][2])
                {
                    bucket3 += 1;
                    needData = false;
                }
                if (toupper(userAnswer) == sngAnswerKey[i][3])
                {
                    bucket4 += 1;
                    needData = false;
                }
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

