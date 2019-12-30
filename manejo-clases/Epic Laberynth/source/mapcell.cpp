//
//  mapcell.cpp
//  minigame
//
//  Created by Alirio Angel on 12/26/19.
//  Copyright © 2019 Alirio Angel. All rights reserved.
//

#include "mapcell.hpp"
#include "constants.h"

MapCell::MapCell() {
    id = CELL_EMPTY;
}

char MapCell::getId() {
    return id;
}

void MapCell::setId(char nid) {
    id = nid;
}
