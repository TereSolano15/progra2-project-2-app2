//
// Created by Tere Solano on 3/11/2020.
//
#include <iomanip>
#include <fstream>
#include <sstream>
#include <iostream>
#include "FileManager.h"

void to_json(json &_json, const Paciente &_paciente) {

    json jEnfermedad;
    auto jEnfermedadList = json::array();

    for(const Enfermedad& enfermedad : _paciente.getEnfermedadList()) {
        jEnfermedad["secuencia"] = enfermedad.getSecuencia();
        jEnfermedad["nombre"] = enfermedad.getNombre();
        jEnfermedadList.push_back(jEnfermedad);

    }

    _json["id"] = _paciente.getId();
    _json["nombre"] = _paciente.getNombre();
    _json["telefono"] = _paciente.getTelefono();
    _json["correo"] = _paciente.getCorreo();
    _json["secuencia"] = _paciente.getSecuencia();
    _json["enfermedades"] = jEnfermedadList;
}
void from_json(const json &_json, Paciente &_paciente) {
    vector<Enfermedad> enfermedadList;
    json enfermedadData = _json["enfermedades"];

    // this method is necessary to deserialize tha information from the vector
    for (auto & data : enfermedadData) {
        Enfermedad enfermedad;
        enfermedad.setSecuencia(data.at("Secuencia").get<string>());
        enfermedad.setNombre(data.at("name").get<string>());
        enfermedadList.push_back(enfermedad);
    }

    _paciente.setId(_json.at("id").get<std::string>());
    _paciente.setNombre(_json.at("name").get<std::string>());
    _paciente.setTelefono(_json.at("telefono").get<std::string>());
    _paciente.setCorreo(_json.at("correo").get<std::string>());
    _paciente.setSecuencia(_json.at("secuencia").get<std::string>());
    _paciente.setEnfermedadList(enfermedadList);
}

string FileManager::serialize(const vector<Paciente>& _pacienteList) {
    json jsonData(_pacienteList);
    string jsonArray = jsonData.dump();
    return jsonArray;
}

vector<Paciente> FileManager::deserialize(const string& _data) {
    json jsonData = json::parse(_data);
    vector<Paciente> pacienteList = jsonData;

    return pacienteList;
}
void FileManager::save(const string& jsonData, const string &filename) {
    std::ofstream file (filename, std::ofstream::out);
    file << jsonData;
    file.close();
}

string FileManager::read(const string &filename) {
    std::string txtContent;

    try {
        std::ifstream file (filename);
        file.exceptions ( std::ifstream::failbit | std::ifstream::badbit );

        stringstream buffer;
        buffer << file.rdbuf();
        std::string fileContent(buffer.str());
        txtContent = fileContent;
    }
    catch (std::ifstream::failure e) {
        throw std::runtime_error("Exception opening/reading/closing file");
    }

    return txtContent;
}


