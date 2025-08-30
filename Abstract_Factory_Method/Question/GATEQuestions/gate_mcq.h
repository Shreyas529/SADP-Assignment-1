#ifndef GATE_MCQ_H
#define GATE_MCQ_H

#include "../QuestionTypes/mcqQuestion.h"

class GATEMCQQuestion : public MCQQuestion {
public:
    string evaluate(string response) override;
};

#endif // JEE_MCQ_H
