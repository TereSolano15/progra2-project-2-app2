//
// Created by Tere Solano on 27/10/2020.
//
#include <iostream>
#include "Menu.h"
#include "FileManager.h"
#include "Paciente.h"
int main(){

   Menu* menu = new Menu();
    menu->mostrar0();
    delete menu;

    return 0;

}