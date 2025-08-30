#include <string>
#include "jeeQuestion.h"
using namespace std;

string JEE_mcq_eval::evaluate(string response)
{
    string out = "Evaluated "+response+" as per JEE Main MCQ question";
    return out;
}

string JEE_fillin_eval::evaluate(string response)
{
    string out = "Evaluated "+response+" as per JEE Main Fill-in-the-blank question";
    return out;
}

string JEE_numerical_eval::evaluate(string response)
{
    string out = "Evaluated "+response+" as per JEE Main Numerical question";
    return out;
}

string JEE_truefalse_eval::evaluate(string response)
{
    string out = "Evaluated "+response+" as per JEE Main True/False question";
    return out;
}

// string JEE_multicorrect_eval::evaluate(string response)
// {
//     string out = "Evaluated "+response+" as per JEE Main Multiple Correct Answers question";
//     return out;
// }
