#include "gate_mcq_factory.h"

Question* GATE_mcq_Factory::createQuestion()
{
    return new GATE_mcq_eval();
}
