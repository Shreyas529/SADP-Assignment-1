#ifndef GATE_FILLIN_H
#define GATE_FILLIN_H

#include "../QuestionTypes/fillinQuestion.h"

class GATEFillInQuestion : public FillInQuestion {
public:
    string evaluate(string response) override;
};

#endif // JEE_FILLIN_H
