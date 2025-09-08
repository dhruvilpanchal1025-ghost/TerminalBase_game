#include "WeaponRoom.hpp"
#include "gtest/gtest.h"



TEST(TestWeaponRoom, DuplicateWeapon) {
    WeaponRoom room;


    room.addWeapon(1, "Sword");
    room.addWeapon(1, "Sword");

    EXPECT_TRUE(room.isSolved(1));
}



TEST(TestWeaponRoom, DescriptionTest) {
    WeaponRoom room;
    EXPECT_NO_THROW(room.description());
}

TEST(TestWeaponRoom, DisplayWeaponsTest) {
    WeaponRoom room;
    room.addWeapon(1, "Sword");
    room.addWeapon(2, "Bow");
    EXPECT_NO_THROW(room.displayWeapons());
}
