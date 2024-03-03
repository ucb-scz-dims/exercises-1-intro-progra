#include <excercises.h>
#include <gtest/gtest.h>

TEST(CharTest, TestUpperChars) {
  testing::internal::CaptureStdout();

  exercise_5('C');

  std::string stdou_output = testing::internal::GetCapturedStdout();
  ASSERT_EQ(stdou_output, "upper-case alphabet\n");
}

TEST(CharTest, TestLowerChars) {
  testing::internal::CaptureStdout();

  exercise_5('z');

  std::string stdou_output = testing::internal::GetCapturedStdout();
  ASSERT_EQ(stdou_output, "lower-case alphabet\n");
}

TEST(CharTest, TestIncorrectChars) {
  testing::internal::CaptureStdout();

  exercise_5(' ');

  std::string stdou_output = testing::internal::GetCapturedStdout();
  ASSERT_EQ(stdou_output, "not an alphabet\n");
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}