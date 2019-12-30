//
//  enemy.cpp
//  minigame
//
//  Created by Alirio Angel on 12/26/19.
//  Copyright © 2019 Alirio Angel. All rights reserved.
//

#include "enemy.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "movingmapentity.hpp"
#include "gamemap.hpp"

Enemy::Enemy(): MovingMapEntity(0,0,NULL) {}

Enemy::Enemy(int id, int x, int y, GameMap * map): id(id), MovingMapEntity(x, y,
                                                                       map) {
    srand(time_t(NULL));
}

int Enemy::getId() {
    return id;
}
