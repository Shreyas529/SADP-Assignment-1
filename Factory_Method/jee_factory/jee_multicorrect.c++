#include "jee_multicorrect_factory.h"
Question* JEE_multicorrect_Factory::createQuestion()
{
    return new JEE_multicorrect_eval();
}