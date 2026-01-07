#include <string>
using namespace std;

#pragma region Data
char dblAnswerKey[13][4] =
{
    // Double point questions
    {'B', 'D', 'C', 'A'},// 1
    {'B', 'D', 'A', 'C'},// 2
    {'A', 'D', 'C', 'B'},// 3
    {'D', 'B', 'A', 'C'},// 4
    {'C', 'A', 'D', 'B'},// 5
    {'B', 'A', 'D', 'C'},// 6
    {'D', 'A', 'C', 'B'},// 7
    {'D', 'B', 'C', 'A'},// 8
    {'D', 'B', 'A', 'C'},// 9
    {'A', 'B', 'D', 'C'},// 10
    {'D', 'A', 'B', 'C'},// 11
    {'D', 'A', 'C', 'B'},// 12
    {'C', 'A', 'B', 'D'},// 13
};

string dblQuestions[13][3] =
{
    {"1. When I first meet someone new, I most often feel:",
     "   A. Excited                             C. Interested",
     "   B. Cautious                            D. Indifferent"},

    {"2. I most like people who:",
     "   A. Know what they want                 C. Listen and do what I say",
     "   B. Are considerate and listen          D. Think before they speak"},

    {"3. I most like working with people who:",
    "   A. Are friendly and talkative           C. Listen and do what I say",
    "   B. Appreciate my ideas                  D. Leave me alone and let me do my job"},

    {"4. It is most important to me that things be:",
     "   A. Effective                           C. Interesting",
     "   B. Accurate                            D. Personal"},

    {"5. In making decisions, I most often prefer to:",
     "   A. Have all the facts                  C. Have someone do it with me",
     "   B. Follow my feelings                  D. Do it myself"},
        
    {"6. When considering a new project, I most like to:",
     "   A. Consider all the alternatives       C. Try the most exciting alternative",
     "   B. Avoid possible consequences         D. Find a project most useful for my purposes"},

    {"7. The most important trait for me in a leader is:",
     "   A. Accuracy                            C. Control",
     "   B. Excitement                          D. Caring"},

    {"8. When talking to friends about their problems I am most often:",
     "   A. Sensitive                           C. A problem solver",
     "   B. Objective                           D. A good listener"},

    {"9. I most often get what I want by:",
     "   A. Proving my point                    C. Inspiring people",
     "   B. Using logic                         D. Being patient"},

    {"10. When working with others, I mostly:",
     "   A. Feel concern about their feelings   C. Want them to be enthused",
     "   B. Want to avoid mistakes              D. Want them to respect me"},

    {"11. In my job, I most need:",
     "   A. Stability                           C. To be in charge",
     "   B. Excitement                          D. Appreciation"},

    {"12. At work, I am most often:",
     "   A. Confident                           C. Precise",
     "   B. Enthusiastic                        D. Warm"},

    {"13. At work, I most fear:",
     "   A. Making mistakes                     C. Rejection",
     "   B. Being controlled                    D. Being ignored"},
};
#pragma endregion