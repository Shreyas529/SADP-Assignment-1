#include "gate_numerical_factory.h"

Question* GATE_numerical_Factory::createQuestion()
{
    return new GATE_numerical_eval();
}
