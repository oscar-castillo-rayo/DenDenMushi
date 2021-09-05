#include <iostream>
#include "Kolbi.h"
//Dados como datos la clave de la zona y el número de minutos hablados crea un algoritmo que
//determine e imprima el costo de la llamada.
using namespace std;

int main() {
    int a, b;
    string OpcMenu;
    cout << "Bienvenido al sistema de consultas" << endl;
    cout << "presione una tecla para continuar..." << endl;
    OpcMenu = "Y";
    do {
        ProgramaDeLlamadas();
        cout << " " << endl;
        cout << "¿Desea realizar otra transacción? Y/N";
        cin >> OpcMenu;
    } while (OpcMenu != "n" or OpcMenu != "N");

    return 0;
}

