//
//  player.cpp
//  minigame
//
//  Created by Alirio Angel on 12/26/19.
//  Copyright © 2019 Alirio Angel. All rights reserved.
//

#include "player.hpp"
#include <iostream>
#include <string>
#include "gamemap.hpp"
#include "movingmapentity.hpp"
#include "constants.h"

Player::Player( int x, int y, GameMap * map):
MovingMapEntity(x, y, map) {
    alive = true;
    treasureInHand = false;
}

void Player::getUserInput() {
    char userInput = '0';
    std::cin >> userInput;
    userInput = toupper(userInput);
    
    switch(toupper(userInput)) {
        case LEFT:
            if(MovingMapEntity::canMoveToCell(x-1, y, true))
                x--;
            break;
        case RIGHT:
            if(MovingMapEntity::canMoveToCell(x+1, y, true))
                x++;
            break;
        case UP:
            if(MovingMapEntity::canMoveToCell(x, y-1, true))
                y--;
            break;
        case DOWN:
            if(MovingMapEntity::canMoveToCell(x, y+1, true))
                y++;
            break;
        case DIE:
            alive = false;
            break;
        default:
            std::cout << "por favor escoge una tecla correcta"<<std::endl;
    }
    
    if(map->cells[y][x].getId() == CELL_TREASURE)
        treasureInHand = true;
}

bool Player::isAlive() {
    return alive;
}

void Player::die() {
    alive = false;
}

bool Player::hasTreasure() {
    return treasureInHand;
}
