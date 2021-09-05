
#ifndef DENDENMUSHI_KOLBI_H
#define DENDENMUSHI_KOLBI_H

#include <iostream>
#include "KolbiVariables.h"

using namespace std;


void ProgramaDeLlamadas() {
    CLLN = 40.351; // Precio llamada nacional
    PrecioDolar = 621.05;
    GA = 0.1377; //Precios internacionales de llamadas
    GB = 0.3098;
    GC1 = 0.1377;
    GC2 = 0.3213;
    GD = 0.5508;
    GE = 1.0328;
    GF = 4.4179;
    Grupo = 0; // Selección del grupo definida por el cliente.
    Llamada = 0; // Valor de la llamada

    PackNi = 3100; //Precios de paquetes internacionales Nicaragua
    PackPa = 900; //Precios de paquetes internacionales Panamá
    PackEEUU = 1200; //Precios de paquetes internacionales Estados Unidos
    PackLLIN = 0;// selección de paquete de llamadas internacionales

    SMSN = 3.021; //Precio de los mensajes
    SMSN1 = 100; // promociones mensajes
    SMSN2 = 200;
    OpcSMS = 0; // selección de paquete mensajes

    PKb = 0.008588; //Información de datos de internet.
    CantMegas = 0;// cantidad de megas definida por el cliente
    CostoMegas = 0;
    UnGiga = 2500; //Paquetes de internet
    DosGigas = 4000;
    Internet = 0; // selección paquete internet

    cout << "Seleccione una opción: " << endl;
    cout << "";
    cout << "1.Tarifa de llamadas" << endl;
    cout << "2.Tarifa de mensajes" << endl;
    cout << "3.Tarifa de Internet" << endl;
    cout << "4.Combos llamadas,SMS,internet" << endl;
    cin >> OpcMenu;

    switch (OpcMenu) {
        case 1:
            cout << "Que tipo tarifas  de llamadas desea verificar:" << endl;
            cout << " " << endl;
            cout << "1.Nacionales:" << endl;
            cout << "2.Internacionales:" << endl;
            cout << "3.Paquetes llamadas internacionales:" << endl;
            cin >> OpcLlamadas;
            if (OpcLlamadas == 1) {
                cout << "El costo por minuto en llamadas nacionales es de: " << CLLN << endl;
                cout << " " << endl;
                cout << "¿Cuántos minutos desea calcular?" << endl;
                cin >> CantidadMinutos;
                Llamada = (CantidadMinutos / 60) * ((CLLN) * 60);
                cout << "El monto es " << Llamada << " colones " << endl;
            }
            if (OpcLlamadas == 2) {
                cout << "Seleccione un Grupo al que pertenezca el país: " << endl;
                cout << "  " << endl;
                cout << "GRUPO A: Estados Unidos, Canadá, México, Puerto Rico, Hawaii, Alaska, Islas Vírgenes " << endl;
                cout << "GRUPO B: Colombia, Sur América, Caribe excepto cuba, Corea del Sur, Taiwán y Japón " << endl;
                cout << "GRUPO C1: Belice, Guatemala, Honduras, El Salvador y Panamá " << endl;
                cout << "GRUPO C2: Nicaragua " << endl;
                cout << "GRUPO D: Europa, Singapur, Tailandia, Australia y Nueva Zelanda " << endl;
                cout << "GRUPO E: Cuba y Resto del Mundo " << endl;
                cout << "GRUPO F: Inmarsat, Iridium y Thuraya (satélites para barcos o aviones) " << endl;
                cin >> OpcLLIN;
                switch (OpcLLIN) {
                    case 1:
                        Grupo = GA;
                        break;
                    case 2:
                        Grupo = GB;
                        break;
                    case 3:
                        Grupo = GC1;
                        break;
                    case 4:
                        Grupo = GC2;
                        break;
                    case 5:
                        Grupo = GD;
                        break;
                    case 6:
                        Grupo = GE;
                        break;
                    case 7:
                        Grupo = GF;
                        break;
                    default:
                        Grupo = 0;
                        cout << "Lo sentimos la opción que usted intentó no es válida" << endl;
                }
                if (Grupo != 0) {
                    cout << "El precio por minuto es de:" << char(36) << Grupo << endl;
                    cout << "¿Cuántos minutos desea calcular?" << endl;
                    cin >> CantidadMinutos;
                    Llamada = (CantidadMinutos / 60) * ((Grupo * PrecioDolar) * 60);
                    cout << "El costo es: " << Llamada << " colones" << endl;
                    cout << " " << endl;
                    cout << "¡Gracias por utilizar nuestro servicios! " << endl;
                }
                else if (Grupo == 0) {
                    cout << "¡Gracias por utilizar nuestro servicios! " << endl;

                }
            }
            if (OpcLlamadas == 3) {
                cout << "1.Paquete Nicaragua (20min) valor:" << PackNi << endl;
                cout << "2.Paquete Panamá " << PackPa << endl;
                cout << "3.Paquete Estados Unidos " << PackEEUU << endl;
                cin >> PackLLIN;
                if (PackLLIN == 1 or PackLLIN == 2 or PackLLIN == 3) {
                    ActivationExitosa();
                }
                else {
                    ActivationFallida();
                }

            }
            break;
        case 2:
            cout << "Tarifa de mensajes nacionales " << SMSN << " colones " << endl;
            cout << " " << endl;
            cout << " También puedes adquirir paquetes diarios de mensajes" << endl;
            cout << " 1.Paquete básico: " << SMSN1 << " colones " << endl;
            cout << " 2.Paquete plus: " << SMSN2 << " colones " << endl;
            cin >> OpcSMS;
            if (OpcSMS == 1 or OpcSMS == 2) {
                ActivationExitosa();
            }
            else {
                ActivationFallida();
            }
            break;
        default:
            cout << " Su opción no es válida";
            break;

        case 3:
            cout << "El precio por kilobyte es de " << PKb << endl;
            cout << "¿Que operación desea realizar?" << endl;
            cout << " " << endl;
            cout << "1.Calcular datos" << endl;
            cout << "2.Ver planes de internet" << endl;
            cin >> OpcInternet;
            if (OpcInternet == 1) {
                cout << "¿Cuántos megabytes desea calcular?" << endl;
                cin >> CantMegas;
                CostoMegas = (CantMegas) * (PKb * 1024);
                cout << " " << endl;
                cout << "El valor de " << CantMegas << " Megabytes es de " << CostoMegas << endl;
            }
            else if (OpcInternet == 2) {
                cout << "1.Paquete 1 Giga (15 días) valor " << UnGiga << " colones" << endl;
                cout << "2.Paquete 2 Gigas (30 días) valor " << DosGigas << " colones" << endl;
                cin >> Internet;
                if (Internet == 1 or Internet == 2) {
                    ActivationExitosa();
                }
                else {
                    ActivationFallida();
                }
                break;
            }
        case 4:;
    }
}



//
//case 3:;
//
//case 4:;
//
//default:;

#endif //DENDENMUSHI_KOLBI_H
