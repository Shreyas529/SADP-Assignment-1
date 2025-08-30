#include "gate_multicorrect_factory.h"

Question* GATE_multicorrect_Factory::createQuestion()
{
    return new GATE_multicorrect_eval();
}