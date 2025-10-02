#include <gtest/gtest.h>
#include <gmock/gmock.h>

TEST(TestApp, test1) {
  int* a = new int[10];
  EXPECT_NE(a[9], 1234);
}