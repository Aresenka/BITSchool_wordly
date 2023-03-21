#include <iostream>

#include "character.h"
#include "hero.h"

#include "extremity.h"
#include "head.h"
#include "body.h"
#include "legs.h"

#include "weapon.h"
#include "knife.h"
#include "gun.h"
#include "automat.h"
#include "bazooka.h"

using namespace std;

Hero::Hero(){
    this->health = health = 30;
}
Hero::~Hero(){
    
}

void Hero::attack(Weapon *weapon){
    weapon->attack();
}
void Hero::defense(Extremity *extremity){
    extremity->defense();
}