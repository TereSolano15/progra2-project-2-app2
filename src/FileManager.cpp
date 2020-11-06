//
// Created by Fabio Villalobos on 5/11/2020.
//

#include "FileManager.h"

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