#include <gtest/gtest.h>
#include "gateQuestion.h"
#include "jeeQuestion.h"
#include "gate_factory/gate_mcq_factory.h"
#include "gate_factory/gate_fillin_factory.h"
#include "gate_factory/gate_numerical_factory.h"
#include "gate_factory/gate_truefalse_factory.h"
#include "jee_factory/jee_mcq_factory.h"
#include "jee_factory/jee_fillin_factory.h"
#include "jee_factory/jee_numerical_factory.h"
#include "jee_factory/jee_truefalse_factory.h"

TEST(GATEQuestionsTest, MCQ) {
    GATE_mcq_Factory factory;
    Question* q = factory.createQuestion();
    EXPECT_EQ(q->evaluate("A"), "Evaluated A as per GATE MCQ question.");
    delete q;
}
TEST(GATEQuestionsTest, FillIn) {
    GATE_fillin_Factory factory;
    Question* q = factory.createQuestion();
    EXPECT_EQ(q->evaluate("42"), "Evaluated 42 as per GATE Fill-in-the-Blank question.");
    delete q;
}
TEST(GATEQuestionsTest, Numerical) {
    GATE_numerical_Factory factory;
    Question* q = factory.createQuestion();
    EXPECT_EQ(q->evaluate("3.14"), "Evaluated 3.14 as per GATE Numerical question.");
    delete q;
}
TEST(GATEQuestionsTest, TrueFalse) {
    GATE_truefalse_Factory factory;
    Question* q = factory.createQuestion();
    EXPECT_EQ(q->evaluate("True"), "Evaluated True as per GATE True/False question.");
    delete q;
}

TEST(JEEQuestionsTest, MCQ) {
    JEE_mcq_Factory factory;
    Question* q = factory.createQuestion();
    EXPECT_EQ(q->evaluate("A"), "Evaluated A as per JEE MCQ question.");
    delete q;
}
TEST(JEEQuestionsTest, FillIn) {
    JEE_fillin_Factory factory;
    Question* q = factory.createQuestion();
    EXPECT_EQ(q->evaluate("42"), "Evaluated 42 as per JEE Fill-in-the-Blank question.");
    delete q;
}
TEST(JEEQuestionsTest, Numerical) {
    JEE_numerical_Factory factory;
    Question* q = factory.createQuestion();
    EXPECT_EQ(q->evaluate("3.14"), "Evaluated 3.14 as per JEE Numerical question.");
    delete q;
}
TEST(JEEQuestionsTest, TrueFalse) {
    JEE_truefalse_Factory factory;
    Question* q = factory.createQuestion();
    EXPECT_EQ(q->evaluate("True"), "Evaluated True as per JEE True/False question.");
    delete q;
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
