#include "gameEngine.h"
#include <iostream>
#include <string>

// Constructor: Initializes the game engine 
GameEngine::GameEngine(int direction) : direction(direction) {}
    

void GameEngine::displayPosibleDirections(int chosen){
    if (chosen == 1) {
        std::cout << "Where would you like to move ? \n\n2. EAST / 3. SOUTH / 4. WEST" << std::endl;
    }
    else if (chosen == 2) {
        std::cout << "Where would you like to move ? \n\n1.NORTH / 3. SOUTH / 4. WEST" << std::endl;
    }
    else if (chosen == 3) {
        std::cout << "Where would you like to move ? \n\n1.NORTH / 2. EAST / 4. WEST" << std::endl;
    }
    else if (chosen == 4) {
        std::cout << "Where would you like to move ? \n\n1.NORTH / 2. EAST / 3. SOUTH" << std::endl;
    }
    else {
        std::cout << "Where would you like to move ? \n\n1. NORTH / 2. EAST / 3. SOUTH / 4. WEST" << std::endl;
    }

}