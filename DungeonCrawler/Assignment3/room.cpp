#include "room.h"
#include <iostream>
#include <string>
#include <time.h>

Room::Room(const std::string trap, const std::string item, int damage, int exit) : trap(trap), item(item), damage(damage), exit(exit) {}

std::string Room::getTrap() const {
	std::cout << "You have stumbled upon " << trap << "! Oh no!" << std::endl;
	return trap;
}
std::string Room::getItem() const {
	std::cout << "You found " << item << "!" << std::endl;
	return item;
}
int Room::getDamage() const {
	std::cout << "You take " << damage << " damage!\n" << std::endl;
	return damage;
}
int Room::getHeal() const {
	std::cout << "You heal " << damage << " health points!\n" << std::endl;
	return damage;

}
int Room::getExit() {
	return exit;
}
int Room::setExit(int exit) {
	this->exit = exit;
	return this->exit;
}

