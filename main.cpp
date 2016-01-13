//
//  main.cpp
//  Battle
//
//  Created by Apple on 1/9/16.
//  Copyright © 2016 Connor. All rights reserved.
//

#include <iostream>

using namespace::std;

#include "player.h"

#include "enemy.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    
    string n;
    int h;
    
    cout << "Welcome to Battle\n\nWhat do you want to name your player?" << endl;
    cin >> n;
    cout << "Hello" << n <<endl;
    cout << "Your starting health is 100." << endl;
    
    player user(n,h);
    
    while (player.life()) {
        <#statements#>
    }
    
    
  
    enemy 
    
    
    
    
    
    
    
    
    
    
    return 0;
}
