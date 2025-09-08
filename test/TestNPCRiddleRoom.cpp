#include "NPCRiddleRoom.hpp"
#include "gtest/gtest.h"

TEST(TestNPCRiddleRoom, DescriptionTest) {
  NPCRiddleRoom room;
  EXPECT_NO_THROW(room.description());
}

TEST(TestNPCRiddleRoom, IsSolvedCorrectAnswers) {
  NPCRiddleRoom room;
  EXPECT_TRUE(room.isSolved(3));
  EXPECT_FALSE(room.isSolved(2));
  EXPECT_FALSE(room.isSolved(0));
}

TEST(TestNPCRiddleRoom, IsSolvedEdgeCases) {
  NPCRiddleRoom room;
  EXPECT_FALSE(room.isSolved(-1));
  EXPECT_FALSE(room.isSolved(100));
  EXPECT_TRUE(room.isSolved(3));
}

TEST(TestNPCRiddleRoom, ConstructorTest) {
  EXPECT_NO_THROW(NPCRiddleRoom room);
}
