#pragma once

#ifndef ROOM_H
#define ROOM_H

#include <time.h>
#include <string>

class Room {
private:
	std::string trap;
	std::string item;
	int damage;
	int exit = 0;
public:
	Room(const std::string trap, const std::string item, int damage, int exit);
	std::string getTrap() const;
	std::string getItem() const;
	int getDamage() const;
	int getHeal() const;
	int getExit();
	int setExit(int exit);
};

#endif