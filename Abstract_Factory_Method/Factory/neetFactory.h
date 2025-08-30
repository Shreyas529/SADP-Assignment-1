#ifndef NEET_FACTORY_H
#define NEET_FACTORY_H

#include "examFactory.h"
#include "../Question/NEETQuestions/neet_mcq.h"
#include "../Question/NEETQuestions/neet_numerical.h"
#include "../Question/NEETQuestions/neet_truefalse.h"
#include "../Question/NEETQuestions/neet_fillin.h"

class NEET_Factory : public ExamFactory {
public:
    Question* createMCQQuestion() override;
    Question* createNumericalQuestion() override;
    Question* createTrueFalseQuestion() override;
    Question* createFillInQuestion() override;
};

#endif // NEET_FACTORY_H
