#include "gtest/gtest.h"
#include "../functions/functions.h"
#include <list>

TEST(ListTests, removeListTest) {
  list<int> lst = {4, 2, 21, 12, 4};

  list<int> modifiedList = removeElements(lst, 4);

  EXPECT_EQ(modifiedList.size(), 3);
}