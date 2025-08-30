#include "neet_truefalse_factory.h"

Question* NEET_truefalse_Factory::createQuestion() {
    return new NEET_truefalse_eval();
}