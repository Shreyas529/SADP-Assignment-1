#ifndef JEE_NUMERICAL_H
#define JEE_NUMERICAL_H

#include "../QuestionTypes/numericalQuestion.h"

class JEENumericalQuestion : public NumericalQuestion {
public:
    string evaluate(string response) override;
};

#endif // JEE_NUMERICAL_H
