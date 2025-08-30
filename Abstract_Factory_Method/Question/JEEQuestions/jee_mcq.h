#ifndef JEE_MCQ_H
#define JEE_MCQ_H

#include "../QuestionTypes/mcqQuestion.h"

class JEEMCQQuestion : public MCQQuestion {
public:
    string evaluate(string response) override;
};

#endif // JEE_MCQ_H
