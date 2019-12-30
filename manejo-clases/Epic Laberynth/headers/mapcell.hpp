//
//  mapcell.hpp
//  minigame
//
//  Created by Alirio Angel on 12/26/19.
//  Copyright © 2019 Alirio Angel. All rights reserved.
//

#ifndef mapcell_hpp
#define mapcell_hpp

#include <stdio.h>
class MapCell {
public:
    
    /*
     * Constructor for Map Cells. By default sets their id as CELL_EMPTY
     */
    MapCell();
    
    /*
     * Returns the id of the Map Cell
     * @return The id of the cell
     */
    char getId();
    
    /*
     * Sets the id of the cell to a new value
     * @param nid The new id
     */
    void setId(char nid);
private:
    char id;
};

#endif /* mapcell_hpp */
