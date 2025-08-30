#ifndef GATE_FILL_IN_FACTORY_H
#define GATE_FILL_IN_FACTORY_H

#include "../factory.h"
#include "../gateQuestion.h"

class GATE_fillin_Factory : public Factory
{
    public:
    Question* createQuestion();
};

#endif
