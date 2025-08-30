#ifndef GATE_TRUEFALSE_H
#define GATE_TRUEFALSE_H

#include "../QuestionTypes/truefalseQuestion.h"

class GATETrueFalseQuestion : public TrueFalseQuestion {
public:
    string evaluate(string response) override;
};

#endif // GATE_TRUEFALSE_H
