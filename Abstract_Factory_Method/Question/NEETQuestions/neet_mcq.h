
#ifndef NEET_MCQ_H
#define NEET_MCQ_H

#include "../QuestionTypes/mcqQuestion.h"

class NEETMCQQuestion : public MCQQuestion {
public:
	string evaluate(string response) override;
};

#endif // NEET_MCQ_H
