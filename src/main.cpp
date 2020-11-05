//
// Created by Tere Solano on 27/10/2020.
//
#include <iostream>
#include "Menu.h"
int main(){

    Menu* menu = new Menu();

    menu->MenuPrincipal();

    delete menu;

    return 0;

}