#ifndef JEE_NUMERICAL_FACTORY_H
#define JEE_NUMERICAL_FACTORY_H

#include "../factory.h"
#include "../jeeQuestion.h"

class JEE_numerical_Factory : public Factory
{
    public:
    Question* createQuestion();
};

#endif
