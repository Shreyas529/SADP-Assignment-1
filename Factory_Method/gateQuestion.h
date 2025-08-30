#ifndef GATE_QUESTION_H
#define GATE_QUESTION_H
#include "question.h"

#include <string>
using namespace std;

class GATE_mcq_eval: public Question
{
    string evaluate(string response);
};

class GATE_fillin_eval: public Question
{
    string evaluate(string response);
};

class GATE_numerical_eval: public Question
{
    string evaluate(string response);
};

class GATE_truefalse_eval: public Question
{
    string evaluate(string response);
};

class GATE_multicorrect_eval: public Question
{
    string evaluate(string response);
};
#endif