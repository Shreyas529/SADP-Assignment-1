#ifndef GATE_MULTICORRECT_FACTORY_H
#define GATE_MULTICORRECT_FACTORY_H

#include "../factory.h"
#include "../gateQuestion.h"

class GATE_multicorrect_Factory : public Factory
{
    public:
    Question* createQuestion();
};

#endif