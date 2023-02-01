#include "./build/_deps/googletest-src/googletest/include/gtest/gtest.h"

extern "C" {
#include "../inc/module1.h"
}

TEST(t1, test1) {
  ASSERT_EQ(module1_func(1, 1), 2);
}
TEST(t1, test2){
  ASSERT_EQ(module1_func(1,2), 3);
}

