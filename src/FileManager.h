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
    static void save(const string& jsonData, const std::string &filename);
    static string read(const std::string &filename);
    static string serialize(const vector<Paciente>& _personList);
    static vector<Paciente> deserialize(const string& _data);
};


#endif //MY_PROJECT_NAME_FILEMANAGER_H
