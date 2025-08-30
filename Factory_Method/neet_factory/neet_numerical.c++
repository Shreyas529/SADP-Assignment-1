#include "neet_numerical_factory.h"

Question* NEET_numerical_Factory::createQuestion() {
    return new NEET_numerical_eval();
}
