#ifndef EXAM_FACTORY_H
#define EXAM_FACTORY_H
#include "../Question/question.h"
class ExamFactory{
public:
    virtual Question* createMCQQuestion() = 0;
    virtual Question* createNumericalQuestion() = 0;
    virtual Question* createTrueFalseQuestion() = 0;
    virtual Question* createFillInQuestion() = 0;
};

#endif // EXAM_FACTORY_H
