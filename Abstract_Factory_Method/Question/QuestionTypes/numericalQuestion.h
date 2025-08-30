#ifndef NUMERICALQUESTION_H
#define NUMERICALQUESTION_H

#include "question.h"

class NumericalQuestion : public Question {
public:
    virtual string evaluate(string response) = 0;
};

#endif // NUMERICALQUESTION_H
