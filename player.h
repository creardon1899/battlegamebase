//
//  player.h
//  Battle
//
//  Created by Apple on 1/11/16.
//  Copyright © 2016 Connor. All rights reserved.
//

#ifndef player_h
#define player_h

using namespace::std;

class player
{
    
private:
    string playername;
    int startinghealth = 100;
    int health;
    bool alive = true;

public:
    
    player(string n, int h){
        playername = n;
        health = h;
    }
    string getname(){
        return playername;
    }
    bool life(){
        return alive;
    }
    
    
    
};






#endif /* player_h */
