//
//  Enemy.h
//  Battle
//
//  Created by Apple on 1/11/16.
//  Copyright © 2016 Connor. All rights reserved.
//

#ifndef Enemy_h
#define Enemy_h
using namespace::std;

class enemy
{
private:
    string enemyname = "Destroyer";
    int enemyinitial = 100;
    int health;
    
    
public:
    enemy(int h){
        health = h;
    }
    
};

#endif /* Enemy_h */
