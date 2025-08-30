#ifndef NEET_TRUEFALSE_FACTORY_H
#define NEET_TRUEFALSE_FACTORY_H

#include "../factory.h"
#include "../neetQuestion.h"

class NEET_truefalse_Factory : public Factory
{
    public:
    Question* createQuestion();
};

#endif