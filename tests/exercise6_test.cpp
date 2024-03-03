#include <excercises.h>
#include <gtest/gtest.h>

TEST(DaysTest, TestCorrectDay) {
  testing::internal::CaptureStdout();

  exercise_6(1);

  std::string stdou_output = testing::internal::GetCapturedStdout();
  ASSERT_EQ(stdou_output, "Monday\n");
}

TEST(DaysTest, TestCorrectDay4) {
  testing::internal::CaptureStdout();

  exercise_6(4);

  std::string stdou_output = testing::internal::GetCapturedStdout();
  ASSERT_EQ(stdou_output, "Thursday\n");
}

TEST(DaysTest, TestInCorrectDay) {
  testing::internal::CaptureStdout();

  exercise_6(-1);

  std::string stdou_output = testing::internal::GetCapturedStdout();
  ASSERT_EQ(stdou_output, "Invalid input\n");
}

TEST(DaysTest, TestInCorrectDay2) {
  testing::internal::CaptureStdout();

  exercise_6(1000);

  std::string stdou_output = testing::internal::GetCapturedStdout();
  ASSERT_EQ(stdou_output, "Invalid input\n");
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}