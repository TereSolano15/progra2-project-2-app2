//
// Created by Fabio Villalobos on 5/11/2020.
//

#include "Menu.h"
void Menu::mostrar0() {
    int opcion;
    do {
        system("cls");
        opcion = menuPrincip();
        switch (opcion) {
            case 1:

                system("pause");
                system("CLS");
                break;
            case 2:

                system("pause");
                system("CLS");
                break;
            case 3:


                system("pause");
                system("CLS");
                break;
            case 4:

                system("pause");
                system("CLS");
                break;
            case 5:
                cout<<"Gracias por usar el sistema"<<endl;
                exit(0);
            default:
                cout << "Opcion invalida" << endl;
        }
    } while (opcion < 5 && opcion > 0);
}

int Menu::menuPrincip() {
    int opcion;
    cout<<"Bienvenido al Programa de Analisis de Datos"<<"\n\n";
    cout<<"\t Elija una opcion: "<<endl;
    cout<<"\t [1] Cargar datos de JSON " <<endl;
    cout<<"\t [2] Analisis#1 " <<endl;
    cout<<"\t [3] Analisis#2 "<<endl;
    cout<<"\t [4] Analisis#3 "<<endl;
    cout<<"\t [5] Salir "<<endl;
    cin >> opcion;
    return opcion;
}


Menu::Menu() {}

Menu::~Menu() {

}