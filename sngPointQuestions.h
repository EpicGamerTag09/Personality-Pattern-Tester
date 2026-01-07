#include <string>
using namespace std;

#pragma region Data
char sngAnswerKey[38][4] =
{
    // Single point questions
    {'B', 'B', 'A', 'A'},// 14
    {'A', 'B', 'B', 'A'},// 15
    {'A', 'A', 'B', 'B'},// 16
    {'A', 'B', 'B', 'A'},// 17
    {'A', 'A', 'B', 'B'},// 18
    {'B', 'B', 'A', 'A'},// 19
    {'A', 'B', 'B', 'A'},// 20
    {'B', 'A', 'A', 'B'},// 21
    {'A', 'B', 'B', 'A'},// 22
    {'B', 'B', 'A', 'A'},// 23
    {'A', 'A', 'B', 'B'},// 24
    {'A', 'B', 'B', 'A'},// 25
    {'B', 'A', 'A', 'B'},// 26
    {'B', 'B', 'A', 'A'},// 27
    {'B', 'B', 'A', 'A'},// 28
    {'A', 'A', 'B', 'B'},// 29
    {'B', 'A', 'A', 'B'},// 30
    {'A', 'B', 'B', 'A'},// 31
    {'B', 'A', 'A', 'B'},// 32
    {'B', 'B', 'A', 'A'},// 33
    {'B', 'B', 'A', 'A'},// 34
    {'A', 'B', 'B', 'A'},// 35
    {'A', 'A', 'B', 'B'},// 36
    {'A', 'B', 'B', 'A'},// 37
    {'B', 'B', 'A', 'A'},// 38
    {'A', 'B', 'B', 'A'},// 39
    {'B', 'B', 'A', 'A'},// 40
    {'A', 'B', 'B', 'A'},// 41
    {'B', 'B', 'A', 'A'},// 42
    {'A', 'B', 'B', 'A'},// 43
    {'A', 'A', 'B', 'B'},// 44
    {'B', 'A', 'A', 'B'},// 45
    {'A', 'A', 'B', 'B'},// 46
    {'A', 'B', 'B', 'A'},// 47
    {'B', 'B', 'A', 'A'},// 48
    {'B', 'A', 'A', 'B'},// 49
    {'A', 'A', 'B', 'B'},// 50
    {'A', 'B', 'B', 'A'},// 51
};

string sngQuestionsPartTwo[20] =
{ // Choose the letter that best describes you
    "14. A. Outgoing        B. Shy",
    "15. A. Sensitive       B. Logical",
    "16. A. Act             B. React",
    "17. A. Caring          B. Effective",
    "18. A. Obedient        B. Dominant",
    "19. A. Aggressive      B. Passive",
    "20. A. Warm            B. Precise",
    "21. A. Intellectual    B. Emotional",
    "22. A. Express         B. Analyze",
    "23. A. Order           B. Obey",
    "24. A. Rider           B. Driver",
    "25. A. Sympathetic     B. Reasonable",
    "26. A. Steady          B. Enthusiastic",
    "27. A. Demand          B. Appeal",
    "28. A. Risk-taker      B. Security-Seeker",
    "29. A. Liked           B. Respected",
    "30. A. Studied         B. Spontaneous",
    "31. A. Feeling         B. Factual",
    "32. A. Reserved        B. Expressive",
    "33. A. Fight           B. Avoid",
};

string sngQuestionsPartThree[18][2] =
{
    {"34. I am:",
     "A. Sexually Appealing     B. Faithful"},

    {"35. In responding to other people, I usually follow:",
     "A. My heart               B. My head"},

     {"36. I want:",
     "A. To belong              B. I don't care whether I belong or not"},

     {"37. I would rather my colleagues refer to me as:",
     "A. Sensitive              B. Reasonable"},

     {"38. I like:",
     "A. Being rebellious      B. Having discipline"},

     {"39. In delivering services, I place a higher value on:",
     "A. Feeling and creativity      B. Precision and planning"},

     {"40.I...",
     "A. Like to be different from my associates      B. Dont like being different from my associates"},

     {"41. I least like working with people who are:",
     "A. Unsympathetic      B. Unreasonable"},

     {"42. I...",
     "A. Am difficult to please      B. Like doing favors"},

     {"43. The trait I most want in my manager is:",
     "A. Caring      B. Fairness"},

     {"44. I...",
     "A. Need someone in whom I can confide Completely      B. Am selfish"},

     {"45. I have the most difficulty working with people who are:",
     "A. Too emotional      B. Not emotional"},

     {"46. I...",
     "A. Play fair      B. Am an individual"},

     {"47. I most want my coworkers to respect my:",
     "A. Feelings      B. Rights"},

     {"48. I am:",
     "A. Independent      B. Loyal"},

     {"49. My favorite people are usally:",
     "A. Reserved      B. Enthusiacstic"},

     {"50. I admire people so much that:",
     "A. I would not question their opinions      B. I do not admire anyone that much"},

     {"51. I like being known for:",
     "A. Being sensitive      B. Being the expert"},
};
#pragma endregion