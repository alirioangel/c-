//
//  verticalenemy.cpp
//  minigame
//
//  Created by Alirio Angel on 12/26/19.
//  Copyright © 2019 Alirio Angel. All rights reserved.
//


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "enemy.hpp"
#include "verticalenemy.hpp"
#include "movingmapentity.hpp"
#include "gamemap.hpp"

VerticalEnemy::VerticalEnemy(int id, int x, int y, GameMap * map): Enemy(id, x, y,
                                                                     map) {
    verticalValue = 0;
    verticalDirection = 1;
}

void VerticalEnemy::move() {
    if(verticalValue == ENEMY_VERTICAL_MOVES)
        verticalDirection = -1;
    if(verticalValue == 0)
        verticalDirection = 1;
    
    if(verticalDirection == -1)
        VerticalEnemy::moveUp();
    else
        VerticalEnemy::moveDown();
    
    verticalValue += verticalDirection;
}

void VerticalEnemy::moveDown() {
    if(MovingMapEntity::canMoveToCell(x, y+1, false))
        y++;
}

void VerticalEnemy::moveUp() {
    if(MovingMapEntity::canMoveToCell(x, y-1, false))
        y--;
}
