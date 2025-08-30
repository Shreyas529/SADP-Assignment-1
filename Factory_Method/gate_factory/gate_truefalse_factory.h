#ifndef GATE_TRUE_FALSE_FACTORY_H
#define GATE_TRUE_FALSE_FACTORY_H

#include "../factory.h"
#include "../gateQuestion.h"

class GATE_truefalse_Factory : public Factory
{
    public:
    Question* createQuestion();
};

#endif
