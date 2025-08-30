#ifndef GATE_FACTORY_H
#define GATE_FACTORY_H

#include "examFactory.h"
#include "../Question/GATEQuestions/gate_mcq.h"
#include "../Question/GATEQuestions/gate_numerical.h"
#include "../Question/GATEQuestions/gate_truefalse.h"
#include "../Question/GATEQuestions/gate_fillin.h"
#include "../Question/GATEQuestions/gate_multiCorrect.h"

class GATE_Factory : public ExamFactory {
public:
    Question* createMCQQuestion() override;
    Question* createNumericalQuestion() override;
    Question* createTrueFalseQuestion() override;
    Question* createFillInQuestion() override;
    Question* createMultiCorrectQuestion() override;
};

#endif // GATE_FACTORY_H
