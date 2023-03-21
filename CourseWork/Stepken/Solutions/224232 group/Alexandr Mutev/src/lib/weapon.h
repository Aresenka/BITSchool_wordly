#pragma once
#include <iostream>

#include "character.h"
#include "enemy.h"
#include "fantomas.h"
#include "freddie.h"
#include "joker.h"
#include "hero.h"

using namespace std;

class Weapon{
    protected:
        int power;

    public:
        Weapon();
        virtual ~Weapon();
        virtual void attack(Character *character);

};