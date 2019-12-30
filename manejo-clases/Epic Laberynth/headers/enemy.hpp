//
//  enemy.hpp
//  minigame
//
//  Created by Alirio Angel on 12/26/19.
//  Copyright © 2019 Alirio Angel. All rights reserved.
//

#ifndef enemy_hpp
#define enemy_hpp

#include <stdio.h>
#include "movingmapentity.hpp"
#include "gamemap.hpp"
#include <iostream>

class Enemy:public MovingMapEntity {
public:
    /*
     * Default constructor
     */
    Enemy();

    /*
     * Constructor for Enemy instances
     * @param id The id of the enemy
     * @param x The initial horizontal position of the enemy
     * @param y The initial vertical position of the enemy
     * @map Pointer to the game's map
     */
    Enemy(int id, int x, int y, GameMap * map);
    
    /*
     * Returns the enemy's id
     */
    int getId();
    
    /*
     * Moves the enemy to a new position (if it's a valid cell)
     */
    virtual void move(){}
protected:
    int id;
};

#endif /* enemy_hpp */
