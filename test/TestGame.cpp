#include "Game.hpp"
#include "gtest/gtest.h"


TEST(TestGame, ConstructorAndState) {
    Game game("Player");
    EXPECT_EQ(game.getNumPuzzlesSolved(), 0);
}

TEST(TestGame, UpdateNumPuzzlesSolved) {
    Game game("Player");

    // Test puzzle-solving logic
    game.updateNumPuzzlesSolved(true);
    EXPECT_EQ(game.getNumPuzzlesSolved(), 1);
    game.updateNumPuzzlesSolved(false);
    EXPECT_EQ(game.getNumPuzzlesSolved(), 1);
}
