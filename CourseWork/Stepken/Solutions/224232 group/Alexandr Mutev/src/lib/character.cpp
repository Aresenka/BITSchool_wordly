#include <iostream>

#include "character.h"

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

Character::Character(){
    this->health = health;

}
Character::~Character(){

}
int Character::get_health(){
    return health;
}
void Character::set_health(int power){
    health = health - power;
}