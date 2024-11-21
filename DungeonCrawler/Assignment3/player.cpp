#include "player.h"

Player::Player(std::string currentRoom, int healthPoints) :currentRoom(currentRoom), healthPoints(healthPoints) {}

void Player::getCurrentRoom(int chosen)
{
    if (chosen == 1) {
        std::cout << "You moved North\n" << std::endl;
    }
    else if (chosen == 2) {
        std::cout << "You moved East\n" << std::endl;
    }
    else if (chosen == 3) {
        std::cout << "You moved South\n" << std::endl;
    }
    else if (chosen == 4) {
        std::cout << "You moved West\n" << std::endl;
    }
}

int Player::getHealthPoints()
{
	return healthPoints;
}

void Player::displayHealthPoints()
{
	std::cout << "Health: " << healthPoints << "\n" << std::endl;
}

int Player::setHealthPointsDamage(int damage)
{
	this->healthPoints -= damage;
	return healthPoints;
}

int Player::setHealthPointsHeal(int heal)
{
	this->healthPoints += heal;
	return healthPoints;
}

int Player::setHealthPoints(int newHealth)
{
	this->healthPoints = newHealth;
	return healthPoints;
}