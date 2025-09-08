#include <iostream>
#include <string>

#include "ActionBasedRoom.hpp"
#include "Game.hpp"
#include "Player.hpp"
#include "PuzzleRoom.hpp"
#include "WeaponRoom.hpp"
#include "GoodNPC.hpp"
#include "BadNPC.hpp"
#include "NPCRiddleRoom.hpp"
#include "EscapeRoom.hpp"

int main() {
  Game game("Jethalal");
  game.startGame();

  Player player("Jethalal");

  bool weaponRoomCompleted = false;  // checks if
  bool actionRoomCompleted = false;  // the room is
  bool puzzleRoomCompleted = false;  // complited or not
  bool NPCRiddleRoomCompleted = false;

  int collectedWeaponID = 0;

  // NPCs Initializion and number of answers for riddle room
  GoodNPC goodNpc;
  BadNPC badNpc;
  int correctAnswers = 0;

  while (true) {
    std::cout << "You are at the starting point.\n";
    std::cout << "Choose a room to enter:\n";
    if (!weaponRoomCompleted) std::cout << "1. Weapon Room (Collect weapons)\n";
    if (!actionRoomCompleted) std::cout << "2. Action Room (Fight a monster)\n";
    if (!puzzleRoomCompleted) std::cout << "3. Puzzle Room (Solve a puzzle)\n";
    if (!NPCRiddleRoomCompleted) std::cout << "4. NPC Riddle Room "
                                           <<"(Answer the riddles)\n";
    std::cout << "5. Escape Room (Certian numbere so puzzeles "
              << "need to be solved)\n";
    std::cout << "6. Quit Game\n";

    std::string roomChoice;
    std::cin >> roomChoice;

    // If Player select Room 1
    if (roomChoice == "1" && !weaponRoomCompleted) {
      player.chooseRoom(1);

      WeaponRoom weaponRoomList;
      weaponRoomList.addWeapon(1, "Dragon Slayer Sword");
      weaponRoomList.addWeapon(2, "Bull Killer Bow");
      weaponRoomList.addWeapon(3, "Gost Venish Magic Staff");

      weaponRoomList.description();
      weaponRoomList.displayWeapons();

      std::cout << "Enter the number corresponding to your chosen weapon: ";
      int weaponChoice;
      std::cin >> weaponChoice;

      if (weaponRoomList.isSolved(weaponChoice)) {
        collectedWeaponID = weaponChoice;
        weaponRoomCompleted = true;
      }

      // If Player select Room 2
    } else if (roomChoice == "2" && !actionRoomCompleted) {
      player.chooseRoom(2);

      ActionBasedRoom actionRoomDragon("Dragon", 1);  // id'1'  = Sword
      actionRoomDragon.description();

      std::cout << "Choose your action:\n";
      std::cout << "1. Use Weapon ("
                << (collectedWeaponID != 0 ? "Collected)\n"
                : "(You dont't have any)\n");
      std::cout << "2. Fight Bare-Handed\n";
      std::cout << "3. Go Back to Starting Point\n";

      std::string actionChoice;
      std::cin >> actionChoice;

      if (actionChoice == "1") {
        if (collectedWeaponID == 0) {
          std::cout << "You don't have a weapon! The Dragon killed you.\n";
          break;
        }
        if (actionRoomDragon.isSolved(collectedWeaponID)) {
          game.updateNumPuzzlesSolved(true);
          actionRoomCompleted = true;
        } else {
          break;
        }
      } else if (actionChoice == "2") {
        std::cout
            << "You foolishly fought bare-handed. The Dragon killed you.\n";
        break;
      } else if (actionChoice == "3") {
        std::cout << "You decided to go back to the starting point.\n";
      } else {
        std::cout << "Invalid choice. Dragon killed you as you just stood "
                  << "there doing nothing :(\n";
        break;
      }

      // If Player select Room 3
    } else if (roomChoice == "3" && !puzzleRoomCompleted) {
      player.chooseRoom(3);
      std::cout << "You have entered the puzzel Room, if you want "
        << "to clear this Room You have to solve all four puzzeles.\n"
        << "Kepp in mind the puzzles will get hard as you move ahead "
        << "all the best :)\n";

      std::cout << "This is the first question:-\n";
      PuzzleRoom EasyPuzzle("What is 5 + 3?", 8);
      EasyPuzzle.description();
      std::cout << "Enter your answer: ";
      int answer;
      std::cin >> answer;
      if (EasyPuzzle.isSolved(answer)) {
        game.updateNumPuzzlesSolved(true);
      } else {
        break;
      }

      std::cout << "This is the second question:-\n";
      PuzzleRoom MediamPuzzle("What is 40+20/5*7?", 68);
      MediamPuzzle.description();
      std::cout << "Enter your answer: ";
      std::cin >> answer;
      if (MediamPuzzle.isSolved(answer)) {
        game.updateNumPuzzlesSolved(true);
      } else {
        break;
      }

      std::cout << "This is the third question:-\n";
      PuzzleRoom HardPuzzle("What is 49/[12-{7+2-(15+4-5*3)}]?", 7);
      HardPuzzle.description();
      std::cout << "Enter your answer: ";
      std::cin >> answer;
      if (HardPuzzle.isSolved(answer)) {
        game.updateNumPuzzlesSolved(true);
      } else {
        break;
      }

      std::cout << "This is the forth question:-\n";
      PuzzleRoom VeryHardPuzzle("What is 0.4+0.5*3.2+2*(4-3.5+7)?", 17);
      VeryHardPuzzle.description();
      std::cout << "Enter your answer: ";
      std::cin >> answer;
      if (VeryHardPuzzle.isSolved(answer)) {
        game.updateNumPuzzlesSolved(true);
        puzzleRoomCompleted = true;
      } else {
        break;
      }


    } else if (roomChoice == "4" && !NPCRiddleRoomCompleted) {
      player.chooseRoom(4);

      // First Riddle
      std::cout << "I am the Wiseman. "
                <<"Answer my first riddle correctly, or face death!\n";
      std::cout << "What has keys but can't open locks?\n";
      std::cout << "Your answer: ";
      std::string playerAnswer;
      std::cin >> playerAnswer;

      if (playerAnswer == "Piano") {
        correctAnswers++;
        goodNpc.reactToAnswer(true);
        game.updateNumPuzzlesSolved(true);
      } else {
        goodNpc.reactToAnswer(false);
        badNpc.reactToAnswer(false);
        break;
      }

      //Second Riddle
      std::cout << "You have passed the first riddle. "
                << "Now, answer the second one!\n";
      std::cout << "What can travel around the world while "
                << "staying in the corner?\n";
      std::cout << "Your answer: ";
      std::cin >> playerAnswer;

      if (playerAnswer == "Stamp") {
          correctAnswers++;
          goodNpc.reactToAnswer(true);
          game.updateNumPuzzlesSolved(true);
      } else {
          goodNpc.reactToAnswer(false);
          badNpc.reactToAnswer(false);
          break;
      }

      //Third Riddle
      std::cout << "You have passed the second riddle. "
                << "Now, answer the third one!\n";
      std::cout << "I have space but no room, and you can "
                << "enter but can't exit. What am I?\n";
      std::cout << "Your answer: ";
      std::cin >> playerAnswer;

      if (playerAnswer == "Keyboard") {
          correctAnswers++;
          goodNpc.reactToAnswer(true);
          game.updateNumPuzzlesSolved(true);
      } else {
          goodNpc.reactToAnswer(false);
          badNpc.reactToAnswer(false);
          break;
      }

      // If all riddles are answered correctly
      NPCRiddleRoom riddleRoom;
      if (riddleRoom.isSolved(correctAnswers)) {
          NPCRiddleRoomCompleted = true;
          std::cout << "Congratulations! You have solved all three riddles.\n";
      }

    } else if (roomChoice == "5") {
        EscapeRoom escapeRoom;
        escapeRoom.description();

        std::cout << "Do you want to proceed with escaping the castle?\n";
        std::cout << "1. Yes\n";
        std::cout << "2. No\n";
        std::string proceedChoice;
        std::cin >> proceedChoice;

        if (proceedChoice == "1") {
            if (escapeRoom.isSolved(game.getNumPuzzlesSolved())) {
                std::cout << "You have successfully escaped the castle!\n";
                break;
            } else {
                break;
            }
        } else if (proceedChoice == "2") {
            std::cout << "You decided not to escape. "
                      << "You return to the starting point.\n";
        } else {
          std::cout << "Wrong input :(\n";
        }

    } else if (roomChoice == "6") {
      std::cout << "Thank you for playing!\n";
      break;

    } else {
      std::cout << "Invalid choice.\n";
    }
  }

  game.endGame();
  return 0;
}
