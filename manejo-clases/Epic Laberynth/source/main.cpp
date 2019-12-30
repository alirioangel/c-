//
//  main.cpp
//  minigame
//
//  Created by Alirio Angel on 12/22/19.
//  Copyright © 2019 Alirio Angel. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include "constants.h"
#include "player.hpp"
#include "enemy.hpp"
#include "verticalEnemy.hpp"
#include "horizontalEnemy.hpp"
#include "gamemap.hpp"

/*
 * Loads the specified cover on the CLI
 * @param coverId The id of the cover to load
 */
void loadCover(int coverId);

/*
 * Frees memory from unused enemies
 */
void cleanEnemies(VerticalEnemy* enemyvertical,HorizontalEnemy* enemyhorizontal);

int main(int argc, char ** args) {
    bool gameOver = false, victory = false, levelFinished = false,
    mapError = false;
    int playerIX = 0, playerIY = 0, currentLevel = 1;
    int enemiesIX[N_ENEMIES], enemiesIY[N_ENEMIES];
    VerticalEnemy* EnemyVertical;
    HorizontalEnemy* EnemyHorizontal;
    
    GameMap map;
    mapError = !map.loadMap(currentLevel, playerIX, playerIY, enemiesIX,
                            enemiesIY);
    if(mapError){
        return -1;
    }
    Player hero(playerIX, playerIY, & map);
    EnemyVertical = new VerticalEnemy(0, enemiesIX[0], enemiesIY[0], & map);
    EnemyHorizontal = new HorizontalEnemy(1, enemiesIX[1], enemiesIY[1], & map);
    
    loadCover(START);
    
    map.setPlayerCell(hero.getX(), hero.getY());
    map.setEnemyCell(0, EnemyVertical->getX(),EnemyVertical->getY());
    map.setEnemyCell(1, EnemyHorizontal->getX(),EnemyHorizontal->getY());
    
    map.drawMap();
    std::cout << "Hacia donde te quieres mover? " << std::endl;
    while(!gameOver && !victory && !mapError) {
        hero.getUserInput();
        
        if (map.setPlayerCell(hero.getX(), hero.getY()))
            hero.die();
        else{
            EnemyVertical->move();
            if(map.setEnemyCell(0, EnemyVertical->getX(),EnemyVertical->getY())){
                hero.die();
            }else{
                EnemyHorizontal->move();
                if (map.setEnemyCell(1, EnemyHorizontal->getX(),EnemyHorizontal->getY())){
                    hero.die();
                }
            }
            
        }
        
        map.drawMap();
        
        levelFinished = hero.hasTreasure();
        victory = levelFinished && currentLevel == N_LEVELS;
        
        if(!victory)
            gameOver = !hero.isAlive();
        
        if(levelFinished && !victory) {
            loadCover(NEXT_LEVEL);
            currentLevel++;
            levelFinished = false;
            map = GameMap();
            
            mapError = !map.loadMap(currentLevel, playerIX, playerIY, enemiesIX,
                                    enemiesIY);
            
            if(!mapError) {
                cleanEnemies(EnemyVertical,EnemyHorizontal);
                EnemyVertical   = new VerticalEnemy(0, enemiesIX[0], enemiesIY[0], & map);
                EnemyHorizontal = new HorizontalEnemy(1, enemiesIX[1], enemiesIY[1], & map);
                
                hero = Player( playerIX, playerIY, & map);
                map.setPlayerCell(hero.getX(), hero.getY());
                
                map.setEnemyCell(0, EnemyVertical->getX(),EnemyVertical->getY());
                map.setEnemyCell(1, EnemyHorizontal->getX(),EnemyHorizontal->getY());
                
                map.drawMap();
            }
        }
        std::cout << "Hacia donde te quieres mover? " << std::endl;
    }
    
    if(gameOver) {
        loadCover(GAME_OVER);
        
        return 0;
    }
    else {
        if(mapError)
            return -1;
        if(victory)
            loadCover(VICTORY);
    }
    
    return 0;
}

void loadCover(int coverId) {
    std::string fileName = "";
    std::string message  = "";
    switch(coverId) {
        case START:
            fileName = COVER_FILE;
            break;
        case NEXT_LEVEL:
            fileName = NEXT_LEVEL_FILE;
            break;
        case VICTORY:
            fileName = VICTORY_FILE;
            break;
        case GAME_OVER:
            fileName = GAME_OVER_FILE;
            break;
    }
    std::ifstream cover(fileName.c_str());
    
    if(cover.is_open()) {
        std::string buffer = "";
        
        while(getline(cover, buffer))
            std::cout << buffer << std::endl;
    }
    if(fileName == COVER_FILE){
        std::cin >> message;
    }else if(fileName == GAME_OVER_FILE){
        std::cout << "NOS VEREMOS DE NUEVO" << std::endl;
    }
    else{
        std::cout << "PRESIONA CUALQUIER TECLA Y ENTER PARA CONTINUAR"<< std::endl;
        std::cin >> message;
    }

}

void cleanEnemies(VerticalEnemy* enemyVertical, HorizontalEnemy* enemyHorizontal) {
    delete enemyVertical;
    delete enemyHorizontal;
}
