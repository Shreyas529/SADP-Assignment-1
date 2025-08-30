#ifndef JEE_MULTICORRECT_H
#define JEE_MULTICORRECT_H

#include "../QuestionTypes/multiCorrectQuestion.h"

class JeeMultiCorrect : public MultiCorrectQuestion {
public:
    virtual string evaluate(string response);
};

#endif // JEE_MULTICORRECT_H
