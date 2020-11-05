//
// Created by Fabio Villalobos on 5/11/2020.
//

#include "Menu.h"
void Menu::MenuPrincipal() {

    int option = 0;


    cout<<"Bienvenido al Programa de Lectura de Datos"<<"\n\n";
    cout<<"\t Elija una opcion: "<<endl;
    cout<<"\t [1] Mostrar datos en pantalla " <<endl;
    cout<<"\t [2] Generar archivo binario "<<endl;
    cout<<"\t [3] Salir "<<endl;
    cin >> option;

    do{


        switch(option) {

            case 1:

                //

                break;

            case 2:

                //

                break;

            case 3:

                break;

            default:

                break;

        }


    }while (option < 3);

}

Menu::Menu() {}

Menu::~Menu() {

}