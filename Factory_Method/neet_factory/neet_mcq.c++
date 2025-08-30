#include "neet_mcq_factory.h"

Question* NEET_mcq_Factory::createQuestion() {
    return new NEET_mcq_eval();
}
