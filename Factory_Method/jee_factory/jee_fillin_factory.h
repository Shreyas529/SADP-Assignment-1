#ifndef JEE_FILL_IN_FACTORY_H
#define JEE_FILL_IN_FACTORY_H

#include "../factory.h"
#include "../jeeQuestion.h"

class JEE_fillin_Factory : public Factory
{
    public:
    Question* createQuestion();
};

#endif
