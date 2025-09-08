# Template for CPSC2720 Major Project: Text Based Adventure Game
Last Updated: 2024-10-21 by Nicole Wilson &lt;n.wilson@uleth.ca&gt;

Notes:

* The Makefile and .gitlab-ci.yml files are set up to run on Ubuntu.
* The .gitlab-ci.yml file uses the targets in the Makefile.
* These are the tools/commands/apps used:
  * Compiler: g++
  * Style Check: cpplint
  * Static Check: cppcheck
  * Coverage Check: gcov/lcov
  * Memory Check: valgrind
  * Unit Test: gtest 
  * Documentation: doxygen
* See the version report on the pipeline.

Certain assumptions have been made:
* One repo contains the files for one project.
* All unit testing files are found in <code>test/</code> including <code>main.cpp</code>.
* All header files for the project are found in <code>include/</code> and named <code>*.hpp</code>, every class must have a header file.
* All project source files for the project are named <code>*.cpp</code>.
  * Any needed source files that correspond to header files are found in <code>src/</code>.
  * There is a <code>main.cpp</code> found in <code>src/project/</code>.

  Contributions of team members for the Major Project Design 

Design Phase :

Manthan Patel: Created the UML design and also designed key classes and their related structures and relationships between classes and also wrote the document for the design 

Aryan Patel: Reviewed and refactored the UML design by adding some classes which which were important for the design and also proposed solutions to reduce complexity for the design .

Fenil Patel: Came up with the idea of the game , its contents and particularly what content should align with what classes and also worked on some changes for SOLID principles.

Dhruvil Panchal: Worked on correction of design which followed SOLID principle and also corrected classes and methods which violated SOLID Design principles.

Basic Implimentation Phase :

Manthan Patel : Created and worked on the logic of main.cpp ,game class and Room.hpp and also helped team memebers in their personal class coding and logic of their classes.

Aryan Patel : Worked on the coding of the basic implementation of the ActionBasedRoom class and Player class and also updated the UML diagram according to the BasicImplementation code.

Fenil Patel: Worked on the coding of the WeaponBasedRoom class and also write the test cases for all classes.Also helped other team members during coding.

Dhruvil Panchal : Worked on the PuzzleRoom class and helped teammates several times. Also write the Doxygen comments for all of the classes. 

Final Implementation Phase :

Manthan Patel : Worked on adding more instances for all the room classes in the main file and also worked on solving errors coming in the way and helping other members in their contributions.

Aryan Patel : Worked on logic and creation of all the remaining rooms and also worked on the creation of NPC's and their roles in every room and functioning of the NPC's .

Fenil Patel : Wrote doxygen comments for all the header files and also merged the remaining files and helped other members in creation of their classes and updating README with some plots of the game.

Dhruvil Panchal : Wrote test files for the remaining classes of the final implementation phase and also worked on improving the test coverage of the classes thus increasing robustness of the game .


Plot of the Game :

The main player is trapped inside a haunted castle and is looking for a way to escape the castle . 
The castle is abandoned since 1800's and is structured in such a way that to escape out from it , several levels of rooms needs to passed without any mistake or else the player will be killed inside the castle.

There are 5 rooms the player is supposed to pass each room in order for the castle to open and let the player escape through it .

The rooms here are environment with each room having its own player killing characteristics :
1) Weapon Based Room : In this room player has options to choose any weapons which he can use to clear any obstacles coming in his way in upcoming rooms. In this room the player will have multiple usable items like a Sword, a Bow and a Magic Staff .

2) Action Based Room : In this room the player will encounter a Dragon and to pass the room the player will need to fight and kill the Mighty Dragon using one of the correct weapons provided in the Weapon Room . If the player chooses any incorrect weapon the Dragon will not die and instead the player will be killed by the Mighty Dragon .
 
 (Here the correct weapon to kill the dragon is the Dragon Slayer Sword)

3) Puzzle Room : Upon entering the Room an invisible Mighty monster will start asking the player 4 puzzles and if the player answers any of the puzzles incorrectly the Room will release poisonous gas and the player will be killed.

(Here answers for the puzzles are :
  1: 8
  2: 68
  3: 7
  4: 17
)

4) Riddle Room : Upon entering the room the player will encounter a NPC wiseman who will be asking the player some riddles and if player answers all riddles correctly then the wiseman will allow the player to pass the room and upon answering any of the riddles incorrectly the evil Wizard will get active and will kill the player inside the room .

(Here answers for the riddles are : 
  1: Piano
  2: Stamp
  3: Keyboard
)

5) Escape Room : The player can enter the Escape Room at his own risk . So upon entering the Escape Room if the player had already solved 6 puzzles or Riddles he will be able to escape the castle and if he had not solved 6 puzzles than upon entering the Escape Room the player will fall in a pit and die.

And also not solving any of the Puzzles or riddles or getting killed by the Dragon the player will die.

