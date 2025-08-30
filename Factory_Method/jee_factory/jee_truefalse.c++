#include "jee_truefalse_factory.h"

Question* JEE_truefalse_Factory::createQuestion()
{
    return new JEE_truefalse_eval();
}
