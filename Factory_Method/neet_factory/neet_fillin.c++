#include "neet_fillin_factory.h"

Question* NEET_fillin_Factory::createQuestion() {
    return new NEET_fillin_eval();
}