//
//  verticalenemy.hpp
//  minigame
//
//  Created by Alirio Angel on 12/26/19.
//  Copyright © 2019 Alirio Angel. All rights reserved.
//

#ifndef verticalenemy_hpp
#define verticalenemy_hpp

#include "enemy.hpp"
#include "gamemap.hpp"

class VerticalEnemy: public Enemy {
public:
    /*
     * VerticalEnemy constructor
     * @see Enemy
     */
    VerticalEnemy(int id, int x, int y, GameMap * map);
    
    /*
     * @see Enemy
     */
    void move();
private:
    int verticalValue;
    int verticalDirection;
    
    /*
     * Moves the enemy down
     */
    void moveDown();
    
    /*
     * Moves the enemy up
     */
    void moveUp();
};
#endif /* verticalenemy_hpp */
