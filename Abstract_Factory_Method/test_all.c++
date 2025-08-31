#include <gtest/gtest.h>
#include "Question/GATEQuestions/gate_mcq.h"
#include "Question/GATEQuestions/gate_fillin.h"
#include "Question/GATEQuestions/gate_numerical.h"
#include "Question/GATEQuestions/gate_truefalse.h"
#include "Question/JEEQuestions/jee_mcq.h"
#include "Question/JEEQuestions/jee_fillin.h"
#include "Question/JEEQuestions/jee_numerical.h"
#include "Question/JEEQuestions/jee_truefalse.h"

TEST(GATEQuestionsTest, MCQ) {
    GATEMCQQuestion mcq;
    EXPECT_EQ(mcq.evaluate("A"), "Evaluated A as per GATE MCQ question.");
}
TEST(GATEQuestionsTest, FillIn) {
    GATEFillInQuestion fillin;
    EXPECT_EQ(fillin.evaluate("42"), "Evaluated 42 as per GATE Fill-in-the-Blank question.");
}
TEST(GATEQuestionsTest, Numerical) {
    GATENumericalQuestion numerical;
    EXPECT_EQ(numerical.evaluate("3.14"), "Evaluated 3.14 as per GATE Numerical question.");
}
TEST(GATEQuestionsTest, TrueFalse) {
    GATETrueFalseQuestion tf;
    EXPECT_EQ(tf.evaluate("True"), "Evaluated True as per GATE True/False question.");
}

TEST(JEEQuestionsTest, MCQ) {
    JEEMCQQuestion mcq;
    EXPECT_EQ(mcq.evaluate("A"), "Evaluated A as per JEE main MCQ question.");
}
TEST(JEEQuestionsTest, FillIn) {
    JEEFillInQuestion fillin;
    EXPECT_EQ(fillin.evaluate("42"), "Evaluated 42 as per JEE main Fill-in-the-Blank question.");
}
TEST(JEEQuestionsTest, Numerical) {
    JEENumericalQuestion numerical;
    EXPECT_EQ(numerical.evaluate("3.14"), "Evaluated 3.14 as per JEE main Numerical question.");
}
TEST(JEEQuestionsTest, TrueFalse) {
    JEETrueFalseQuestion tf;
    EXPECT_EQ(tf.evaluate("True"), "Evaluated True as per JEE main True/False question.");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
