#ifndef JEE_FACTORY_H
#define JEE_FACTORY_H

#include "examFactory.h"
#include "../Question/JEEQuestions/jee_mcq.h"
#include "../Question/JEEQuestions/jee_numerical.h"
#include "../Question/JEEQuestions/jee_truefalse.h"
#include "../Question/JEEQuestions/jee_fillin.h"
#include "../Question/JEEQuestions/jee_multiCorrect.h"

class JEE_Factory : public ExamFactory {
public:
    Question* createMCQQuestion() override;
    Question* createNumericalQuestion() override;
    Question* createTrueFalseQuestion() override;
    Question* createFillInQuestion() override;
    Question* createMultiCorrectQuestion() override;
};

#endif // JEE_FACTORY_H
