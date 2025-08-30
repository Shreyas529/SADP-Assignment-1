
#ifndef NEET_FILLIN_H
#define NEET_FILLIN_H

#include "../QuestionTypes/fillinQuestion.h"

class NEETFillInQuestion : public FillInQuestion {
public:
	string evaluate(string response) override;
};

#endif // NEET_FILLIN_H
