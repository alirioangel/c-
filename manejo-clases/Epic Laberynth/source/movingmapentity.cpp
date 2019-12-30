//
//  movingmapentity.cpp
//  minigame
//
//  Created by Alirio Angel on 12/26/19.
//  Copyright © 2019 Alirio Angel. All rights reserved.
//

#include "movingmapentity.hpp"
#include "gamemap.hpp"
#include <iostream>
MovingMapEntity::MovingMapEntity(int x, int y, GameMap * map): x(x), y(y), map(map){
}

int MovingMapEntity::getX() {
    return x;
}

int MovingMapEntity::getY() {
    return y;
}

bool MovingMapEntity::canMoveToCell(int x, int y, bool isPlayer) {
    char cellId = map->cells[y][x].getId();
    if(isPlayer)
        return cellId != CELL_WALL && x >= 0 && x < COLUMNS && y >= 0 && y < ROWS;
    else
        return cellId != CELL_WALL && cellId != CELL_TREASURE && x >= 0 && x < COLUMNS
        && y >= 0 && y < ROWS;
}
