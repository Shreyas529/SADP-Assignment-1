#ifndef MCQQUESTION_H
#define MCQQUESTION_H

#include "question.h"

class MCQQuestion : public Question {
public:
    virtual string evaluate(string response) = 0;
};

#endif // MCQQUESTION_H