#ifndef JEE_MCQ_FACTORY_H
#define JEE_MCQ_FACTORY_H

#include "../factory.h"
#include "../jeeQuestion.h"

class JEE_mcq_Factory : public Factory
{
    public:
    Question* createQuestion();
};

#endif
