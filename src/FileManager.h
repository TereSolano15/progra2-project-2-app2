//
// Created by Fabio Villalobos on 5/11/2020.
//

#ifndef MY_PROJECT_NAME_FILEMANAGER_H
#define MY_PROJECT_NAME_FILEMANAGER_H
#include <vector>
#include <iostream>
#include <iomanip>
#include <fstream>
#include "Enfermedad.h"
#include "Paciente.h"
#include <../lib/nlohmann/json.hpp>
using nlohmann::json;
using namespace std;

class FileManager {
public:
    void saveBinary();
    vector<Paciente> deserialize(const string& _data);
    string read(const string &filename);
};


#endif //MY_PROJECT_NAME_FILEMANAGER_H
