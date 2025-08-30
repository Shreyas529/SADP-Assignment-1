#ifndef GATE_MCQ_FACTORY_H
#define GATE_MCQ_FACTORY_H

#include "../factory.h"
#include "../gateQuestion.h"

class GATE_mcq_Factory : public Factory
{
    public:
    Question* createQuestion();
};

#endif
