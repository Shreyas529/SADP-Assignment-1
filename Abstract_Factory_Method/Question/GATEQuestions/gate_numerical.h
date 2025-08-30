#ifndef GATE_NUMERICAL_H
#define GATE_NUMERICAL_H

#include "../QuestionTypes/numericalQuestion.h"

class GATENumericalQuestion : public NumericalQuestion {
public:
    string evaluate(string response) override;
};

#endif // JEE_NUMERICAL_H
