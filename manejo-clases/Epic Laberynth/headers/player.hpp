//
//  player.hpp
//  minigame
//
//  Created by Alirio Angel on 12/26/19.
//  Copyright © 2019 Alirio Angel. All rights reserved.
//

#ifndef player_hpp
#define player_hpp

#include "gamemap.hpp"
#include "movingmapentity.hpp"
#include <stdio.h>
#include <iostream>

class Player:public MovingMapEntity {
public:
    /*
     * Creates an instance of Player with a name
     * @see MovingMapEntity
     * @param name The name of the player
     */
    Player( int x, int y, GameMap * map);
    
    /*
     * Obtains commands by CLI input
     */
    void getUserInput();
    
    /*
     * @return The boolean "alive" status of the Player
     */
    bool isAlive();
    
    /*
     * Sets "alive" to false
     */
    void die();
    
    /*
     * @return Boolean indicating whether the Player obtained the level treasure
     */
    bool hasTreasure();
private:
    bool alive, treasureInHand;
};
#endif /* player_hpp */
