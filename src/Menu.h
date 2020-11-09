//
// Created by Fabio Villalobos on 5/11/2020.
//

#ifndef MY_PROJECT_NAME_MENU_H
#define MY_PROJECT_NAME_MENU_H
#include <iomanip>
#include <fstream>
#include <sstream>
#include <iostream>
#include "AnalisisSrategy.h"
#include "Analisis1.h"
#include "Analisis2.h"
#include "Analisis3.h"
#include "Paciente.h"
#include "FileManager.h"
#include <vector>
using namespace std;
class Menu {
private:
    vector<Paciente> pacientes;
    vector<Paciente> pacienteListFromJson;
    string dataFromJSonFile;
public:
    Menu();
    void mostrar0();
    int menuPrincip();

    virtual ~Menu();




};


#endif //MY_PROJECT_NAME_MENU_H
