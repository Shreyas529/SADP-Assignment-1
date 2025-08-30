#include "gateFactory.h"

Question* GATE_Factory::createMCQQuestion() {
    return new GATEMCQQuestion();
}

Question* GATE_Factory::createNumericalQuestion() {
    return new GATENumericalQuestion();
}

Question* GATE_Factory::createTrueFalseQuestion() {
    return new GATETrueFalseQuestion();
}

Question* GATE_Factory::createFillInQuestion() {
    return new GATEFillInQuestion();
}
