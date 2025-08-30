#ifndef JEE_QUESTION_H
#define JEE_QUESTION_H
#include "question.h"

#include <string>
using namespace std;

class JEE_mcq_eval: public Question
{
    string evaluate(string response);
};

class JEE_fillin_eval: public Question
{
    string evaluate(string response);
};

class JEE_numerical_eval: public Question
{
    string evaluate(string response);
};

class JEE_truefalse_eval: public Question
{
    string evaluate(string response);
};

class JEE_multicorrect_eval: public Question
{
    string evaluate(string response);
};

#endif