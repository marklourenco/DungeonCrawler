#include "room.h"
#include "player.h"
#include "gameEngine.h"
#include <iostream>
#include <string>
#include <time.h>



int main() {

	int direction = 0;
	int random;
	int escape = 0;

	// Random Number Generator
	srand(time(NULL));

	// Create Room Classes: Trap -> Item -> Damage -> If Exit
	Room trap1("a volley of arrows", "", rand() % 26, 0);
	Room trap2("a landslide", "", rand() % 33, 0);
	Room trap3("a fire trap", "", rand() % 12, 0);
	Room trap4("a path of spikes", "", rand() % 22, 0);
	Room trap5("a volley of fireballs", "", rand() % 42, 0);
	Room trap6("a room of freezing temperatures", "", rand() % 8, 0);

	Room item1("", "a water source", 5, 0);
	Room item2("", "a bandage", 10, 0);
	Room item3("", "a staff of healing", 10, 0);

	Room exit("", "", 0, 1);

	// Create Player Class

	Player player("West", 100);

	// Create Game Engine Class
	GameEngine engine(0);

	// GAME STARTS HERE

	random = rand() % 100;

	std::cout << "You are in a dungeon and must find your way out. You see rooms around you in every direction." << "\n\nBe careful, as the doors close behind you!\n" << std::endl;

	do {
		if (player.getHealthPoints() <= 0) {
			std::cout << "You fought bravely, but you did not manage to escape. You have died.\n" << std::endl;
			break;
		}
		player.displayHealthPoints();
		engine.displayPosibleDirections(direction);
		std::cin >> direction;
		random = rand() % 100;
		system("cls");
		if (random <= 10) {
			player.getCurrentRoom(direction);
			trap1.getTrap();
			player.setHealthPointsDamage(trap1.getDamage());
		}
		else if (random > 10 && random < 21) {
			player.getCurrentRoom(direction);
			trap2.getTrap();
			player.setHealthPointsDamage(trap2.getDamage());
		}
		else if (random > 20 && random < 31) {
			player.getCurrentRoom(direction);
			trap3.getTrap();
			player.setHealthPointsDamage(trap3.getDamage());
		}
		else if (random > 30 && random < 41) {
			player.getCurrentRoom(direction);
			trap4.getTrap();
			player.setHealthPointsDamage(trap4.getDamage());
		}
		else if (random > 40 && random < 51) {
			player.getCurrentRoom(direction);
			trap5.getTrap();
			player.setHealthPointsDamage(trap5.getDamage());
		}
		else if (random > 50 && random < 71) {
			player.getCurrentRoom(direction);
			trap6.getTrap();
			player.setHealthPointsDamage(trap6.getDamage());
		}
		else if (random > 70 && random < 81) {
			player.getCurrentRoom(direction);
			item1.getItem();
			if (player.getHealthPoints() + item1.getHeal() >= 100) {
				player.setHealthPoints(100);
			}
			else {
				player.setHealthPointsHeal(item1.getHeal());
			}
		}
		else if (random > 80 && random < 91) {
			player.getCurrentRoom(direction);
			item2.getItem();
			if (player.getHealthPoints() + item2.getHeal() >= 100) {
				player.setHealthPoints(100);
			}
			else {
				player.setHealthPointsHeal(item2.getHeal());
			}
		}
		else if (random > 80 && random < 95) {
			player.getCurrentRoom(direction);
			item3.getItem();
			if (player.getHealthPoints() + item3.getHeal() >= 100) {
				player.setHealthPoints(100);
			}
			else {
				player.setHealthPointsHeal(item3.getHeal());
			}
		}
		else if (random > 94 && random <= 100) {
			escape = 1;
			std::cout << "\nYou escaped!" << std::endl;
		}
	} while (escape == 0);
}