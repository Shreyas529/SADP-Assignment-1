#include <string>
#include "gateQuestion.h"
using namespace std;

string GATE_mcq_eval::evaluate(string response)
{
    string out = "Evaluated "+response+" as per GATE MCQ question";
    return out;
}

string GATE_fillin_eval::evaluate(string response)
{
    string out = "Evaluated "+response+" as per GATE Fill-in-the-blank question";
    return out;
}

string GATE_numerical_eval::evaluate(string response)
{
    string out = "Evaluated "+response+" as per GATE Numerical question";
    return out;
}

string GATE_truefalse_eval::evaluate(string response)
{
    string out = "Evaluated "+response+" as per GATE True/False question";
    return out;
}

string GATE_multicorrect_eval::evaluate(string response)
{
    string out = "Evaluated "+response+" as per GATE Multiple Correct Answers question";
    return out;
}