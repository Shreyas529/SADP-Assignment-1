#include "./gate_factory/gate_fillin_factory.h"
#include "./gate_factory/gate_mcq_factory.h"
#include "./gate_factory/gate_numerical_factory.h"
#include "./gate_factory/gate_truefalse_factory.h"

#include "./jee_factory/jee_fillin_factory.h"
#include "./jee_factory/jee_mcq_factory.h"
#include "./jee_factory/jee_numerical_factory.h"
#include "./jee_factory/jee_truefalse_factory.h"

#include "./neet_factory/neet_fillin_factory.h"
#include "./neet_factory/neet_mcq_factory.h"
#include "./neet_factory/neet_numerical_factory.h"
#include "./neet_factory/neet_truefalse_factory.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    //Initializing all the factories

    vector<Factory*> factories;

    factories.push_back(new JEE_mcq_Factory());
    factories.push_back(new JEE_numerical_Factory());
    factories.push_back(new JEE_truefalse_Factory());
    factories.push_back(new JEE_fillin_Factory());

    factories.push_back(new GATE_mcq_Factory());
    factories.push_back(new GATE_numerical_Factory());
    factories.push_back(new GATE_truefalse_Factory());
    factories.push_back(new GATE_fillin_Factory());

    factories.push_back(new NEET_mcq_Factory());
    factories.push_back(new NEET_numerical_Factory());
    factories.push_back(new NEET_truefalse_Factory());
    factories.push_back(new NEET_fillin_Factory());

    string response = "Sample_Response";
    for (auto factory : factories) {
        cout << factory->createQuestion()->evaluate(response) << endl;
    }

    return 0;
}