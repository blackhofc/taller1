#include "funciones.h"
#include <iostream>

using namespace std;

const int MAX_TRIES = 6;

int main(){
    // Cargo vector de palabras
    // Genero numero random en rango de palabras y defino secret que sea esa palabra
    const string secret  = "mysecret";
    
    int CURR_TRIES = 1;
    string word;
    
    while(CURR_TRIES <= MAX_TRIES){
        cout << "[" << CURR_TRIES << "/" << MAX_TRIES << "] Ingresa tu intento: ";
        cin >> word;
        // Si es valido
        //Evaluo
        //Doy respuesta
        CURR_TRIES++;

        //SINO
        //Intento invalido, intentalo de nuevo 
    }
    cout << "¡Juego Terminado! No quedan intentos disponibles." << endl;
    
    return 0;
}