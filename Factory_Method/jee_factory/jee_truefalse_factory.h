#ifndef JEE_TRUE_FALSE_FACTORY_H
#define JEE_TRUE_FALSE_FACTORY_H

#include "../factory.h"
#include "../jeeQuestion.h"

class JEE_truefalse_Factory : public Factory
{
    public:
    Question* createQuestion();
};

#endif
