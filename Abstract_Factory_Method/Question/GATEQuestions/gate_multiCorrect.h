#ifndef GATE_MULTICORRECT_H
#define GATE_MULTICORRECT_H

#include "../QuestionTypes/multiCorrectQuestion.h"

class GateMultiCorrect : public MultiCorrectQuestion {
public:
    virtual string evaluate(string response);
};

#endif // GATE_MULTICORRECT_H
