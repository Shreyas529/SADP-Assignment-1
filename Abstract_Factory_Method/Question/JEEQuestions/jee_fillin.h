#ifndef JEE_FILLIN_H
#define JEE_FILLIN_H

#include "../QuestionTypes/fillinQuestion.h"

class JEEFillInQuestion : public FillInQuestion {
public:
    string evaluate(string response) override;
};

#endif // JEE_FILLIN_H
