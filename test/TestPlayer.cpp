#include "Player.hpp"
#include "gtest/gtest.h"

TEST(TestPlayer, ChooseValidRoom) {
    Player player("Hero");


    EXPECT_NO_THROW(player.chooseRoom(1));
    EXPECT_NO_THROW(player.chooseRoom(2));
}

TEST(TestPlayer, ChooseInvalidRoom) {
    Player player("Hero");

    // Test invalid room selections
    EXPECT_NO_THROW(player.chooseRoom(-1));
    EXPECT_NO_THROW(player.chooseRoom(100));
}

TEST(TestPlayer, GetName) {
    Player player("Hero");
    EXPECT_EQ(player.getName(), "Hero");
}

TEST(TestPlayer, EmptyPlayerName) {
    Player player("");
    EXPECT_EQ(player.getName(), "");
}
