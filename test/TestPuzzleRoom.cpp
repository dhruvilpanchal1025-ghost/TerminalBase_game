#include "PuzzleRoom.hpp"
#include "gtest/gtest.h"

TEST(TestPuzzleRoom, ConstructorTest) {
    PuzzleRoom room("What is 5 + 3?", 8);


    EXPECT_TRUE(room.isSolved(8));
    EXPECT_FALSE(room.isSolved(5));
}


TEST(TestPuzzleRoom, DescriptionTest) {
    PuzzleRoom room("What is 5 + 3?", 8);
    EXPECT_NO_THROW(room.description());
}
