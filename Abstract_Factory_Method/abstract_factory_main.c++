#include <iostream>
#include "Factory/gateFactory.h"
#include "Factory/jeeFactory.h"

void createQuestions(ExamFactory* factory) {
    Question* mcq = factory->createMCQQuestion();
    Question* numerical = factory->createNumericalQuestion();
    Question* trueFalse = factory->createTrueFalseQuestion();
    Question* fillIn = factory->createFillInQuestion();

    string studentAnswer = "Sample Answer";
    cout << mcq->evaluate(studentAnswer) << endl;
    cout << numerical->evaluate(studentAnswer) << endl;
    cout << trueFalse->evaluate(studentAnswer) << endl;
    cout << fillIn->evaluate(studentAnswer) << endl;

    delete mcq;
    delete numerical;
    delete trueFalse;
    delete fillIn;
}

int main() {
    ExamFactory* gateFactory = new GATE_Factory();
    ExamFactory* jeeFactory = new JEE_Factory();

    createQuestions(gateFactory);

    createQuestions(jeeFactory);

    delete gateFactory;
    delete jeeFactory;

    return 0;
}
