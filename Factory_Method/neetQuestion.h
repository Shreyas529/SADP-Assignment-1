#ifndef NEET_QUESTION_H
#define NEET_QUESTION_H
#include "question.h"

#include <string>
using namespace std;


class NEET_mcq_eval: public Question
{
    string evaluate(string response);
};

class NEET_fillin_eval: public Question
{
    string evaluate(string response);
};

class NEET_numerical_eval: public Question
{
    string evaluate(string response);
};

class NEET_truefalse_eval: public Question
{
    string evaluate(string response);
};

#endif