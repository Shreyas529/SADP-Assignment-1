#include "jeeFactory.h"

Question* JEE_Factory::createMCQQuestion() {
    return new JEEMCQQuestion();
}

Question* JEE_Factory::createNumericalQuestion() {
    return new JEENumericalQuestion();
}

Question* JEE_Factory::createTrueFalseQuestion() {
    return new JEETrueFalseQuestion();
}

Question* JEE_Factory::createFillInQuestion() {
    return new JEEFillInQuestion();
}

Question* JEE_Factory::createMultiCorrectQuestion() {
    return new JeeMultiCorrect();
}
