//
// Created by Tere Solano on 27/10/2020.
//
#include <iostream>
#include "Menu.h"
#include "FileManager.h"
#include "Paciente.h"
int main(){


    vector<Paciente> pacienteListFromJson;
    cout << "\n\nDeserialización del Json" << endl;

    string dataFromJSonFile;
    dataFromJSonFile = FileManager::read("F:\\Universidad\\2020\\Segundo semestre\\Programacion 2\\Proyectos\\proyecto 2\\app2\\progra2-project-02-app2-lions\\cmake-build-debug\\src\\JsonCompleto.json");
    pacienteListFromJson = FileManager::deserialize(dataFromJSonFile);
    //for (Paciente paciente: pacienteListFromJson) {
      //  std::cout << paciente.toString() << std::endl;
    //}

      /*Menu* menu = new Menu();
    menu->mostrar0();
    delete menu;
*/
    return 0;

}