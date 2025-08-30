#ifndef MULTICORRECTQUESTION_H
#define MULTICORRECTQUESTION_H

#include "../question.h"

class MultiCorrectQuestion : public Question {
public:
    virtual string evaluate(string response) = 0;
};

#endif // MULTICORRECTQUESTION_H