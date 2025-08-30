#include "gate_fillin_factory.h"

Question* GATE_fillin_Factory::createQuestion()
{
    return new GATE_fillin_eval();
}
