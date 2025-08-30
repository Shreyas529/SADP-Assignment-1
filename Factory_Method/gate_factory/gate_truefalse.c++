#include "gate_truefalse_factory.h"

Question* GATE_truefalse_Factory::createQuestion()
{
    return new GATE_truefalse_eval();
}
