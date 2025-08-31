
#include <gtest/gtest.h>
#include "gate_factory/gate_mcq_factory.h"
#include "gate_factory/gate_fillin_factory.h"
#include "gate_factory/gate_numerical_factory.h"
#include "gate_factory/gate_truefalse_factory.h"
#include "jee_factory/jee_mcq_factory.h"
#include "jee_factory/jee_fillin_factory.h"
#include "jee_factory/jee_numerical_factory.h"
#include "jee_factory/jee_truefalse_factory.h"
#include "gateQuestion.h"
#include "jeeQuestion.h"

// GATE MCQ Factory Test
TEST(GATEFactoryTest, MCQCreation) {
    GATE_mcq_Factory factory;
    Question* q = factory.createQuestion();
    ASSERT_NE(q, nullptr);
    EXPECT_EQ(q->evaluate("A"), "Evaluated A as per GATE MCQ question");
    ;
}

// GATE Fill-in-the-blank Factory Test
TEST(GATEFactoryTest, FillinCreation) {
    GATE_fillin_Factory factory;
    Question* q = factory.createQuestion();
    ASSERT_NE(q, nullptr);
    EXPECT_EQ(q->evaluate("42"), "Evaluated 42 as per GATE Fill-in-the-blank question");
    ;
}

// GATE Numerical Factory Test
TEST(GATEFactoryTest, NumericalCreation) {
    GATE_numerical_Factory factory;
    Question* q = factory.createQuestion();
    ASSERT_NE(q, nullptr);
    EXPECT_EQ(q->evaluate("3.14"), "Evaluated 3.14 as per GATE Numerical question");
    ;
}

// GATE True/False Factory Test
TEST(GATEFactoryTest, TrueFalseCreation) {
    GATE_truefalse_Factory factory;
    Question* q = factory.createQuestion();
    ASSERT_NE(q, nullptr);
    EXPECT_EQ(q->evaluate("True"), "Evaluated True as per GATE True/False question");
    ;
}

// JEE MCQ Factory Test
TEST(JEEFactoryTest, MCQCreation) {
    JEE_mcq_Factory factory;
    Question* q = factory.createQuestion();
    ASSERT_NE(q, nullptr);
    EXPECT_EQ(q->evaluate("B"), "Evaluated B as per JEE Main MCQ question");
    ;
}

// JEE Fill-in-the-blank Factory Test
TEST(JEEFactoryTest, FillinCreation) {
    JEE_fillin_Factory factory;
    Question* q = factory.createQuestion();
    ASSERT_NE(q, nullptr);
    EXPECT_EQ(q->evaluate("99"), "Evaluated 99 as per JEE Main Fill-in-the-blank question");
    ;
}

// JEE Numerical Factory Test
TEST(JEEFactoryTest, NumericalCreation) {
    JEE_numerical_Factory factory;
    Question* q = factory.createQuestion();
    ASSERT_NE(q, nullptr);
    EXPECT_EQ(q->evaluate("2.71"), "Evaluated 2.71 as per JEE Main Numerical question");
    ;
}

// JEE True/False Factory Test
TEST(JEEFactoryTest, TrueFalseCreation) {
    JEE_truefalse_Factory factory;
    Question* q = factory.createQuestion();
    ASSERT_NE(q, nullptr);
    EXPECT_EQ(q->evaluate("False"), "Evaluated False as per JEE Main True/False question");
    ;
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
