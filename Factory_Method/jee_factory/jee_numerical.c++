#include "jee_numerical_factory.h"

Question* JEE_numerical_Factory::createQuestion()
{
    return new JEE_numerical_eval();
}
