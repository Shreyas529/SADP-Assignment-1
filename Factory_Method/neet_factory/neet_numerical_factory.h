#ifndef NEET_NUMERICAL_FACTORY_H
#define NEET_NUMERICAL_FACTORY_H

#include "../factory.h"
#include "../neetQuestion.h"

class NEET_numerical_Factory : public Factory
{
    public:
    Question* createQuestion();
};

#endif