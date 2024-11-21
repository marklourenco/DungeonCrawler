# Dungeon Crawler Game

## Overview

This is a simple dungeon crawler game written in C++ where the player navigates through different rooms, encounters traps, finds items, and aims to escape the dungeon. The game uses a random number generator to decide the consequences of moving through each room, including taking damage from traps, healing with items, or potentially finding an exit.

## Features

- **Player Health**: The player starts with 100 health points and can gain or lose health by moving through the rooms.
- **Rooms**: The dungeon is made up of various rooms, each with different challenges. Rooms may contain traps, healing items, or even an exit.
- **Random Events**: When the player moves, a random event occurs (trap, healing item, etc.), and the player must react accordingly.
- **Directions**: The player can move in four possible directions: North, East, South, and West.
- **Exit**: The goal is to find the exit and escape the dungeon.

## Setup

1. **Clone the repository**: 
   To get started, clone this repository to your local machine.

   ```bash
   git clone https://github.com/yourusername/dungeon-crawler.git
   ```

2. **Requirements**: 
   You need a C++ compiler to compile the code. Ensure you have a development environment that supports C++.

3. **Compiling**:
   Use the following command to compile the project:
   
   ```bash
   g++ -o dungeon_crawler main.cpp gameEngine.cpp player.cpp room.cpp
   ```

4. **Running**: 
   After compiling, run the game with the following command:

   ```bash
   ./dungeon_crawler
   ```

## Game Flow

- The game begins with the player in a random room. The player is given four possible directions to move.
- Moving to a room may trigger different events:
  - **Traps**: The player may take damage from various traps (e.g., arrows, fireballs, landslides).
  - **Items**: The player may find healing items (e.g., water, bandages, healing staff) that restore health.
  - **Exit**: If the player is lucky, they may find the exit and escape the dungeon.
- If the player's health drops to 0, the game ends, and they lose.
- The player can move until they either escape or perish.

## Class Breakdown

### `GameEngine`

This class manages the game flow, including displaying the possible directions the player can move. It handles the navigation between rooms based on player input and ensures the game progresses smoothly.

#### Key Methods:
- `displayPosibleDirections(int chosen)`: Displays possible movement options based on the direction the player is currently facing.

### `Player`

This class represents the player character, including their health and position in the dungeon.

#### Key Methods:
- `getCurrentRoom(int chosen)`: Outputs the direction the player has moved to.
- `setHealthPoints(int newHealth)`: Sets the player's health to a specific value.
- `setHealthPointsDamage(int damage)`: Reduces the player's health when they take damage.
- `setHealthPointsHeal(int heal)`: Increases the player's health when they heal.
- `displayHealthPoints()`: Displays the player's current health points.

### `Room`

This class represents a room in the dungeon, which can contain a trap, an item, and a potential exit.

#### Key Methods:
- `getTrap()`: Returns a description of the trap the player encounters.
- `getItem()`: Returns a description of the item the player finds.
- `getDamage()`: Returns the damage the player takes from a trap.
- `getHeal()`: Returns the healing effect of an item.
- `getExit()`: Returns whether the room contains an exit.
- `setExit(int exit)`: Sets the room's exit status.

### `main.cpp`

This file is the entry point of the game, where the game loop runs. It creates instances of the `Player`, `Room`, and `GameEngine` classes and runs the main game loop, allowing the player to move through the dungeon.

## Example Output

```text
You are in a dungeon and must find your way out. You see rooms around you in every direction.
Be careful, as the doors close behind you!

Health: 100
Where would you like to move ?
1. NORTH / 2. EAST / 3. SOUTH / 4. WEST

2
You moved East
You have stumbled upon a fire trap! Oh no!
You take 10 damage!
Health: 90
Where would you like to move ?
1. NORTH / 2. EAST / 3. SOUTH / 4. WEST
```

## Contributing

Feel free to fork this project and make improvements! Contributions are always welcome.

## License

This project is licensed under the MIT License.

## Contact

If you have any questions, feel free to reach out.

---

Enjoy exploring the dungeon!
