// Personality Pattern Tester.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "dblPointQuestions.h"
#include "sngPointQuestions.h"
#include "displayPersonality.h"
using namespace std;

char answerKey[51][4] =
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



int main()
{

    std::cout << "Hello World!\n";
}