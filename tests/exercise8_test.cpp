#include <excercises.h>
#include <gtest/gtest.h>

TEST(TimeElapse, TestTimeElapse) {
  testing::internal::CaptureStdout();

  exercise_8(3870);

  std::string stdou_output = testing::internal::GetCapturedStdout();
  ASSERT_EQ(stdou_output, "01:04:30\n");
}

TEST(TimeElapse, TestTimeElapseSec) {
  testing::internal::CaptureStdout();

  exercise_8(60);

  std::string stdou_output = testing::internal::GetCapturedStdout();
  ASSERT_EQ(stdou_output, "00:01:00\n");
}

TEST(TimeElapse, HandlesComplexTime) {
  testing::internal::CaptureStdout();

  exercise_8(7200 + 360 + 10);  // 2 hours, 12 minutes, 10 seconds

  std::string stdou_output = testing::internal::GetCapturedStdout();
  ASSERT_EQ(stdou_output, "02:06:10\n");
}

TEST(TimeElapse, HandlesZeroSeconds) {
  testing::internal::CaptureStdout();

  exercise_8(0);

  std::string stdou_output = testing::internal::GetCapturedStdout();
  ASSERT_EQ(stdou_output, "00:00:00\n");
}

TEST(TimeElapse, HandlesNegativeInput) {
  testing::internal::CaptureStdout();

  exercise_8(-60);
  std::string stdou_output = testing::internal::GetCapturedStdout();

  EXPECT_EQ(stdou_output, "Error: Input seconds cannot be negative.\n");
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}