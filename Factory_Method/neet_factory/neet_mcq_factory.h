#ifndef NEET_MCQ_FACTORY_H
#define NEET_MCQ_FACTORY_H

#include "../factory.h"
#include "../neetQuestion.h"

class NEET_mcq_Factory : public Factory
{
    public:
    Question* createQuestion();
};
#endif