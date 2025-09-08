#include <gtest/gtest.h>

#include "EscapeRoom.hpp"

TEST(EscapeRoomTest, IsSolvedEnoughPuzzles) {
  EscapeRoom room;

  EXPECT_TRUE(room.isSolved(6));

  EXPECT_FALSE(room.isSolved(3));
}

TEST(EscapeRoomTest, DescriptionDoesNotCrash) {
  EscapeRoom room;

  room.description();
}
