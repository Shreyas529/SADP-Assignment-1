
#ifndef NEET_TRUEFALSE_H
#define NEET_TRUEFALSE_H

#include "../QuestionTypes/truefalseQuestion.h"

class NEETTrueFalseQuestion : public TrueFalseQuestion {
public:
	string evaluate(string response) override;
};

#endif // NEET_TRUEFALSE_H
