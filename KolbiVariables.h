//
// Created by oscar on 5/9/21.
//

#ifndef DENDENMUSHI_KOLBIVARIABLES_H
#define DENDENMUSHI_KOLBIVARIABLES_H

#include <iostream>

using namespace std;

void ActivationExitosa() {
    cout << "Su paquete ha sido activado con éxito!" << endl;
    cout << " " << endl;
    cout << "Gracias por utilizar nuestro servicio" << endl;
}

void ActivationFallida() {
    cout << "Lo sentimos su opción no es válida" << endl;
    cout << " " << endl;
    cout << "Gracias por utilizar nuestro servicio" << endl;
}

float Combos, Internet, PrecioDolar, CantidadMinutos;


float SMSN; // Valor de los mensajes
int SMSN1, SMSN2; //Costo de los combos de mensajes

float PackNi, PackPa, PackEEUU;//pack de llamadas internacionales
float PKb, CostoMegas; // precio por kilobytes, costo en Megas
float CantMegas, UnGiga, DosGigas; // Cantidad de megas y Paquetes de internet
float CLLN, CPLLI;//Costo llamada Nacional(CLlN), Costo promoción llamada internacional(CPLLI)

float GA, GB, GC1, GC2, GD, GE, GF, Grupo, Llamada;// Contendrá las tarifas de llamadas intenacionales y del grupo que selecionen.
int OpcLLIN, PackLLIN, OpcSMS, OpcInternet, OpcMenu, OpcLlamadas; // Opciones de diferentes menús


#endif //DENDENMUSHI_KOLBIVARIABLES_H
