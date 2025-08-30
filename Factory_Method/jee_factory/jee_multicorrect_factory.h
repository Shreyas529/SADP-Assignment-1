#ifndef JEE_MULTICORRECT_FACTORY_H
#define JEE_MULTICORRECT_FACTORY_H

#include "../factory.h"
#include "../jeeQuestion.h"
class JEE_multicorrect_Factory : public Factory
{
    public:
    Question* createQuestion();
};
#endif