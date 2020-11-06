//
// Created by Fabio Villalobos on 5/11/2020.
//

#include "FileManager.h"

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

vector<Paciente> FileManager::deserialize(const string& _data) {
    json jsonData = json::parse(_data);
    vector<Paciente> pacienteList = jsonData;

    return pacienteList;
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
void FileManager::saveBinary() {

    ofstream  archivo;

    try{

        archivo.open("ArchivoBinario.dat", ios::app | ios::binary);

    }

    catch (std::ifstream::failure a) {

        throw runtime_error("Error abriendo el archivo");

    }

   // archivo.write((char*) &persons, sizeof(Person));

    archivo.close();

}