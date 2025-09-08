#include "BadNPC.hpp"
#include "gtest/gtest.h"

TEST(TestBadNPC, ReactToAnswer) {
  BadNPC npc;

  npc.reactToAnswer(false);

  npc.reactToAnswer(true);
}

TEST(TestBadNPC, ConstructorTest) { EXPECT_NO_THROW(BadNPC npc); }
