#ifndef JEE_TRUEFALSE_H
#define JEE_TRUEFALSE_H

#include "../QuestionTypes/truefalseQuestion.h"

class JEETrueFalseQuestion : public TrueFalseQuestion {
public:
    string evaluate(string response) override;
};

#endif // JEE_TRUEFALSE_H
