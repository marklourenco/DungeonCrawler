#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
class Player {
private:
	std::string currentRoom;
	int healthPoints;

public:
	Player(std::string currentRoom, int healthPoints);
	void getCurrentRoom(int chosen);
	int getHealthPoints();
	void displayHealthPoints();
	int setHealthPoints(int newHealth);
	int setHealthPointsDamage(int damage);
	int setHealthPointsHeal(int heal);

};

#endif