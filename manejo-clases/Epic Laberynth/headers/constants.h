//
//  constants.h
//  minigame
//
//  Created by Alirio Angel on 12/26/19.
//  Copyright © 2019 Alirio Angel. All rights reserved.
//

#ifndef constants_h
#define constants_h

#define UP 'W'
#define DOWN 'S'
#define LEFT 'A'
#define RIGHT 'D'
#define DIE 'X'
#define ROWS 15
#define COLUMNS 10
#define N_ENEMIES 2
#define N_LEVELS 3
#define CELL_EMPTY ' '
#define CELL_PLAYER 'I'
#define CELL_WALL 'X'
#define CELL_ENEMY 'O'
#define CELL_DEATH '#'
#define CELL_START '*'
#define CELL_TREASURE '$'
#define MAP_FILE "Map"
#define COVER_FILE "IntroGame.txt"
#define NEXT_LEVEL_FILE "NextLevel.txt"
#define VICTORY_FILE "Victory.txt"
#define GAME_OVER_FILE "Defeat.txt"
#define ENEMY_VERTICAL_MOVES 3
#define ENEMY_HORIZONTAL_MOVES 3

enum ENEMY_MOVES {MOVE_UP, MOVE_DOWN, MOVE_LEFT, MOVE_RIGHT};
enum COVERS {START, NEXT_LEVEL, VICTORY, GAME_OVER};

#endif /* constants_h */
