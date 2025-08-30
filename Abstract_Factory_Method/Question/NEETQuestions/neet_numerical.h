
#ifndef NEET_NUMERICAL_H
#define NEET_NUMERICAL_H

#include "../QuestionTypes/numericalQuestion.h"

class NEETNumericalQuestion : public NumericalQuestion {
public:
	string evaluate(string response) override;
};

#endif // NEET_NUMERICAL_H
