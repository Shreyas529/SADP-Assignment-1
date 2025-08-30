#include "jee_fillin_factory.h"

Question* JEE_fillin_Factory::createQuestion()
{
    return new JEE_fillin_eval();
}
