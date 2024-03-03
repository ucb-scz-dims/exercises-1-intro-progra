#include <excercises.h>
#include <gtest/gtest.h>

TEST(DivTest, TestDiv) {
  testing::internal::CaptureStdout();

  exercise_3(10, 2);

  std::string stdou_output = testing::internal::GetCapturedStdout();
  ASSERT_EQ(stdou_output, "5\n");
}

TEST(DivTest, TestDiv2) {
  testing::internal::CaptureStdout();

  exercise_3(3, 5);

  std::string stdou_output = testing::internal::GetCapturedStdout();
  ASSERT_EQ(stdou_output, "0\n");
}

TEST(DivTest, TestDivZero) {
  testing::internal::CaptureStdout();

  exercise_3(11, 0);

  std::string stdou_output = testing::internal::GetCapturedStdout();
  ASSERT_EQ(stdou_output, "Impossible\n");
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}