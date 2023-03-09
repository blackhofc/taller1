#include "funciones.h"
#include <vector>
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

vector<string> cargar_listado(const string & nombre_archivo){

    ifstream infile (nombre_archivo);

    if(!infile.good()){
        cout << "Oops! Error al abrir el archivo " << nombre_archivo << endl;
    }

    vector<std::string> words;
    string line;
    while(!infile.eof()){
        getline(infile, line);
        words.push_back(line);
    }
    infile.close();

    return words;
}

bool intento_valido(const string & intento, const string & palabra_secreta, const vector<string> &listado){
    // Verifico si palabra es legal (intento y palabra secreta tienen misma longitud y ademas intento se encuentra dentro de listado)

    

    return false;
}

vector<EstadoLetra> evaluar_intento(const string & intento, const string & palabra_secreta){
    /* Una letra del intento puede estar en el LugarCorrect si la palabra secreta tiene esa misma letra en esa posición, 
     puede estar en un LugarIncorrecto si la palabra secreta contiene esa letra pero en otra posición, o puede estar NoPresente 
     si la palabra secreta no contiene esa letra. */

    return vector<EstadoLetra>();
}

string respuesta_en_string(const vector<EstadoLetra> & respuesta){
    // completar

    return "";
}