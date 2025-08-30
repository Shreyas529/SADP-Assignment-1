#include "jee_mcq_factory.h"

Question* JEE_mcq_Factory::createQuestion()
{
    return new JEE_mcq_eval();
}
