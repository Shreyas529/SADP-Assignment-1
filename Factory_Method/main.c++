#include "./gate_factory/gate_fillin_factory.h"
#include "./gate_factory/gate_mcq_factory.h"
#include "./gate_factory/gate_numerical_factory.h"
#include "./gate_factory/gate_truefalse_factory.h"

#include "./jee_factory/jee_fillin_factory.h"
#include "./jee_factory/jee_mcq_factory.h"
#include "./jee_factory/jee_numerical_factory.h"
#include "./jee_factory/jee_truefalse_factory.h"

#include <iostream>
#include <string>
#include <vector>
#include <cassert>

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

    vector<string> expectedPrints = {
        "Evaluated Sample_Response as per JEE Main MCQ question",
        "Evaluated Sample_Response as per JEE Main Numerical question",
        "Evaluated Sample_Response as per JEE Main True/False question",
        "Evaluated Sample_Response as per JEE Main Fill-in-the-blank question",
        "Evaluated Sample_Response as per GATE MCQ question",
        "Evaluated Sample_Response as per GATE Numerical question",
        "Evaluated Sample_Response as per GATE True/False question",
        "Evaluated Sample_Response as per GATE Fill-in-the-blank question"
    };

    string response = "Sample_Response";

    for(int i = 0; i < factories.size(); i++) {
        //Assert that the output matches the expected print
        assert(factories[i]->createQuestion()->evaluate(response) == expectedPrints[i]);
        cout << factories[i]->createQuestion()->evaluate(response) << endl;
    }

    return 0;
}