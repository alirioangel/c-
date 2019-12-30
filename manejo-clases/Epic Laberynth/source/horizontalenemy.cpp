//
//  horizontalenemy.cpp
//  minigame
//
//  Created by Alirio Angel on 12/26/19.
//  Copyright © 2019 Alirio Angel. All rights reserved.
//

#include "horizontalenemy.hpp"
#include <stdlib.h>
#include <time.h>
#include "enemy.hpp"
#include "movingmapentity.hpp"
#include "gamemap.hpp"

HorizontalEnemy::HorizontalEnemy(int id, int x, int y, GameMap * map): Enemy(id, x, y,
                                                                         map) {
    horizontalValue = 0;
    horizontalDirection = 1;
}

void HorizontalEnemy::move() {
    if(horizontalValue == ENEMY_HORIZONTAL_MOVES)
        horizontalDirection = -1;
    if(horizontalValue == 0)
        horizontalDirection = 1;
    
    if(horizontalDirection == -1)
        HorizontalEnemy::moveLeft();
    else
        HorizontalEnemy::moveRight();
    
    horizontalValue += horizontalDirection;
}

void HorizontalEnemy::moveRight() {
    if(MovingMapEntity::canMoveToCell(x+1, y, false))
        x++;
}

void HorizontalEnemy::moveLeft() {
    if(MovingMapEntity::canMoveToCell(x-1, y, false))
        x--;
}
