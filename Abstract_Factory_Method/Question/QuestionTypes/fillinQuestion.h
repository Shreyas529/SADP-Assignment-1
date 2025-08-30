#ifndef FILLINQUESTION_H
#define FILLINQUESTION_H

#include "../question.h"

class FillInQuestion : public Question {
public:
    virtual string evaluate(string response) = 0;
};

#endif // FILLINQUESTION_H
