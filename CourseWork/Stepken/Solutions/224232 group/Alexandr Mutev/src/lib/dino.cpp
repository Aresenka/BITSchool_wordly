#include <iostream>
#include "dino.h"

using namespace std;

Dino::Dino(){
    this->health = health;
}
Dino::~Dino(){

}
string Dino::screen_characters(){
    return "\t\t\t\t\t\t\t       *****       \t\t\t\t\t      ************\n\t\t\t\t\t\t\t      ********\t\t\t\t\t\t      ************\n\t\t\t\t\t\t\t    ************   \t\t\t\t\t   ******************\n\t\t\t\t\t\t\t   *************** \t\t\t\t\t   **********   *****\n\t\t\t\t\t\t\t  *****   *****   *\t\t\t\t\t*************   ********\n\t\t\t\t\t\t\t  ****     ***     \t\t\t\t\t************************\n\t\t\t\t\t\t\t  *****  ******  ***\t\t\t\t\t************************\n\t\t\t\t\t\t\t  *****  ******  ***\t\t\t\t\t            ************\n\t\t\t\t\t\t\t  ******   *****   *\t\t\t\t\t  **********************                 ****\n\t\t\t\t\t\t\t  ******************\t\t\t\t\t  *************************            ******\n\t\t\t\t\t\t\t  ******************\t\t\t\t\t       ***********************       ********\n\t\t\t\t\t\t\t  ******************\t\t\t\t\t ********************************  **********\n\t\t\t\t\t\t\t  ******************\t\t\t\t\t **   ************************************\n\t\t\t\t\t\t\t  ******************\t\t\t\t\t **      *****************************\n\t\t\t\t\t\t\t  ******************\t\t\t\t\t            ************************\n\t\t\t\t\t\t\t  ***** ****** *****\t\t\t\t\t            **********    **********\n\t\t\t\t\t\t\t  ****   ****   ****\t\t\t\t\t              ******        ******\n\t\t\t\t\t\t\t  ****   ****   ****\t\t\t\t\t                **            **\n\t\t\t\t\t\t\t    **     **     ** \t\t\t\t\t            ******        ******";
}