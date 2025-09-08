#include "ActionBasedRoom.hpp"
#include "gtest/gtest.h"

TEST(TestActionBasedRoom, ValidWeaponID) {
  ActionBasedRoom room("Dragon", 5);
  EXPECT_TRUE(room.isSolved(5));
  EXPECT_FALSE(room.isSolved(4));
}

TEST(TestActionBasedRoom, InvalidWeaponIDEdgeCases) {
  ActionBasedRoom room("Dragon", 2);
  EXPECT_FALSE(room.isSolved(0));
  EXPECT_FALSE(room.isSolved(-1));
  EXPECT_FALSE(room.isSolved(99));
}

TEST(TestActionBasedRoom, EmptyMonsterName) {
  ActionBasedRoom room("", 1);
  EXPECT_TRUE(room.isSolved(1));
  EXPECT_FALSE(room.isSolved(0));
}

TEST(TestActionBasedRoom, ConstructorTest) {
  ActionBasedRoom room("Dragon", 1);
  EXPECT_NO_THROW(room.description());
}
