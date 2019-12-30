//
//  horizontalenemy.hpp
//  minigame
//
//  Created by Alirio Angel on 12/26/19.
//  Copyright © 2019 Alirio Angel. All rights reserved.
//

#ifndef horizontalenemy_hpp
#define horizontalenemy_hpp

#include <stdio.h>
#include "gamemap.hpp"
#include "enemy.hpp"

class HorizontalEnemy: public Enemy {
public:
    /*
     * HorizontalEnemy constructor
     * @see Enemy
     */
    HorizontalEnemy(int id, int x, int y, GameMap * map);
    
    /*
     * @see Enemy
     */
    void move();
private:
    int horizontalValue;
    int horizontalDirection;
    
    /*
     * Moves the enemy to the right
     */
    void moveRight();
    
    /*
     * Moves the enemy to the left
     */
    void moveLeft();
};


#endif /* horizontalenemy_hpp */
