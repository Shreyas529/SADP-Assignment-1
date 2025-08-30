#ifndef TRUEFALSEQUESTION_H
#define TRUEFALSEQUESTION_H

#include "../question.h"

class TrueFalseQuestion : public Question {
public:
    virtual string evaluate(string response) = 0;
};

#endif // TRUEFALSEQUESTION_H
