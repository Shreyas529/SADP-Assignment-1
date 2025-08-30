#include <string>
#include "neetQuestion.h"
using namespace std;
string NEET_mcq_eval::evaluate(string response) {
    string out = "Evaluated " + response + " as per NEET MCQ Question.";
    return out;
}

string NEET_fillin_eval::evaluate(string response) {
    string out = "Evaluated " + response + " as per NEET Fill-in-the-blank Question.";
    return out;
}


string NEET_numerical_eval::evaluate(string response) {
    string out = "Evaluated " + response + " as per NEET Numerical Question.";
    return out;
}

string NEET_truefalse_eval::evaluate(string response) {
    string out = "Evaluated " + response + " as per NEET True/False Question.";
    return out;
}