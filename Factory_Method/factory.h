#ifndef FACTORY_H
#define FACTORY_H

#include "question.h"
#include <string>
using namespace std;

class Factory
{
    public:
    virtual Question* createQuestion() = 0;
};

#endif

