//
// Created by Fabio Villalobos on 5/11/2020.
//

#include "Menu.h"


void Menu::mostrar0() {
    int opcion;
    Analisis1 analisis1;
    Analisis2 analisis2;
    Analisis3 analisis3;
    do {
        system("cls");
        opcion = menuPrincip();
        switch (opcion) {
            case 1:
                //dataFromJSonFile = FileManager::read("C:\\Users\\Tere Solano\\CLionProjects\\progra2-project-02-app2-lions\\cmake-build-debug\\src\\Paciente.json");
                //pacienteListFromJson = FileManager::deserialize(dataFromJSonFile);
                system("pause");
                system("CLS");
                break;
            case 2:
//                pacientes = leePacientes();
             //   analisis1.analisis(pacientes.data());
                system("pause");
                system("CLS");
                break;
            case 3:
         //       pacientes = leePacientes();
               // analisis2.analisis(pacientes.data());
                system("pause");
                system("CLS");
                break;
            case 4:
           //     pacientes = leePacientes();
          //      analisis3.analisis(pacientes.data());
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
    cout<<"\t [2] Analisis #1 " <<endl;
    cout<<"\t [3] Analisis #2 "<<endl;
    cout<<"\t [4] Analisis #3 "<<endl;
    cout<<"\t [5] Salir "<<endl;
    cin >> opcion;
    return opcion;
}


Menu::Menu() {}

Menu::~Menu() {

}