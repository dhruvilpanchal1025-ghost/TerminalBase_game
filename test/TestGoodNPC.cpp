#include "GoodNPC.hpp"
#include "gtest/gtest.h"

TEST(TestGoodNPC, ReactToAnswer) {
  GoodNPC npc;

  npc.reactToAnswer(true);

  npc.reactToAnswer(false);
}

TEST(TestGoodNPC, ConstructorTest) { EXPECT_NO_THROW(GoodNPC npc); }
