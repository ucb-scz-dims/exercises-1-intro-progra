#include <excercises.h>
#include <gtest/gtest.h>

TEST(Exercise1, TestStdOut) {
  testing::internal::CaptureStdout();

  exercise_1("milk", "milkshake", "month");

  std::string stdou_output = testing::internal::GetCapturedStdout();
  ASSERT_EQ(stdou_output, "milk");
}

TEST(Exercise1, TestCharsStrings) {
  testing::internal::CaptureStdout();

  exercise_1("c", "a", "b");

  std::string stdou_output = testing::internal::GetCapturedStdout();
  ASSERT_EQ(stdou_output, "a");
}

TEST(Exercise1, TestSimilarStrings) {
  testing::internal::CaptureStdout();

  exercise_1("fire", "fog", "wood");

  std::string stdou_output = testing::internal::GetCapturedStdout();
  ASSERT_EQ(stdou_output, "fire");
}

TEST(Exercise1, HandlesEmptyStrings) {
  testing::internal::CaptureStdout();

  exercise_1("", "apple", "banana");

  std::string actual_output = testing::internal::GetCapturedStdout();
  EXPECT_EQ(actual_output, "");
}

TEST(Exercise1, HandlesAllStringsEqual) {
  testing::internal::CaptureStdout();

  exercise_1("orange", "orange", "orange");

  std::string actual_output = testing::internal::GetCapturedStdout();
  EXPECT_EQ(actual_output, "orange");
}

TEST(Exercise1, HandlesSingleCharacterStrings) {
  testing::internal::CaptureStdout();

  exercise_1("a", "b", "c");

  std::string actual_output = testing::internal::GetCapturedStdout();
  EXPECT_EQ(actual_output, "a");
}

TEST(Exercise1, HandlesSpecialCharacters) {
  testing::internal::CaptureStdout();

  exercise_1("!", "@", "#");

  std::string actual_output = testing::internal::GetCapturedStdout();
  EXPECT_EQ(actual_output, "!");
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}