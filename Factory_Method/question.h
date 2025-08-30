#ifndef QUESTION
#define QUESTION

#include <string>
using namespace std;

class Question
{
    public:
    virtual string evaluate(string response) = 0;
};

#endif
