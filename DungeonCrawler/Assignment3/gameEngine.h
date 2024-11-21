#pragma once

#ifndef GAMEENGINE_H
#define GAMEENGINE_H

#include "room.h"
#include "player.h"
#include <vector>

// GameEngine class: controls game flow, and room navigation
class GameEngine {
private:
    int direction;
public:
    GameEngine(int direction);
    void displayPosibleDirections(int chosen);
    friend int Player::setHealthPoints(int newHealth);
    friend int Player::setHealthPointsDamage(int damage);
    friend int Player::setHealthPointsHeal(int heal);
    friend int Player::getHealthPoints();
    friend void Player::getCurrentRoom(int chosen);
};

#endif