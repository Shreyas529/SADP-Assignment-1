#include "neetFactory.h"

Question* NEET_Factory::createMCQQuestion() {
    return new NEETMCQQuestion();
}



Question* NEET_Factory::createNumericalQuestion() {
    return new NEETNumericalQuestion();
}

Question* NEET_Factory::createTrueFalseQuestion() {
    return new NEETTrueFalseQuestion();
}

Question* NEET_Factory::createFillInQuestion() {
    return new NEETFillInQuestion();
}
