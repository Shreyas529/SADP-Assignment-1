#ifndef NEET_FILL_IN_FACTORY_H
#define NEET_FILL_IN_FACTORY_H

#include "../factory.h"
#include "../neetQuestion.h"

class NEET_fillin_Factory : public Factory
{
    public:
    Question* createQuestion();
};

#endif