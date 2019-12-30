//
//  movingmapentity.hpp
//  minigame
//
//  Created by Alirio Angel on 12/26/19.
//  Copyright © 2019 Alirio Angel. All rights reserved.
//

#ifndef movingmapentity_hpp
#define movingmapentity_hpp

#include <stdio.h>
#include "gamemap.hpp"

class MovingMapEntity {
public:
    /*
     * Constructor of a Moving Map Entity
     * @param x The initial x position of the entity
     * @param y The initial y position of the entity
     * @param map Pointer to the map of the game
     */
    MovingMapEntity(int x, int y, GameMap * map);
    
    /*
     * @return the x position of the entity
     */
    int getX();
    
    /*
     * @return the y position of the entity
     */
    int getY();
protected:
    int x, y;
    GameMap * map;
    /*
     * Validates whether it is possible to move the entity to the x,y position
     * @param x The x position to move into
     * @param y The y position to move into
     * @param isPlayer true if the entity is player, false otherwise
     * @return true if movement is possible to new position, false otherwise
     */
    bool canMoveToCell(int x, int y, bool isPlayer);
};

#endif /* movingmapentity_hpp */
