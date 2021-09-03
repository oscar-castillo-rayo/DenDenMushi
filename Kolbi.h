
#ifndef DENDENMUSHI_KOLBI_H
#define DENDENMUSHI_KOLBI_H

#include <iostream>

using namespace std;

void ProgramaDeLlamadas() {

    float Llamada, Mensajes, Combos, Internet, PrecioDolar, CantidadMinutos, SMSN, SMSN1, SMSN2;
    float PackNi, PackPa, PackEEUU;
    float CLLN, CPLLI;//Costo llamada Nacional(CLlN), Costo promoción llamada internacional(CPLLI);
    float GA, GB, GC1, GC2, GD, GE, GF, Grupo;// Contendrá las tarifas de llamadas intenacionales y del grupo que selecionen.
    int OpcMenu, OpcLlamadas;
    int OpcLLIN, PackLLIN, OpcSMS;//Opción llamada intenacional(OpcLlIN), Paquetes llamadas internacionales,opción paquete SMS
    CLLN = 40.351; // Precio llamada nacional
    PrecioDolar = 621.05;
    GA = 0.1377; //Precios internacionales
    GB = 0.3098;
    GC1 = 0.1377;
    GC2 = 0.3213;
    GD = 0.5508;
    GE = 1.0328;
    GF = 4.4179;
    Grupo = 0;
    Llamada = 0;

    PackNi = 3100; //Precios de paquetes internacionales
    PackPa = 900;
    PackEEUU = 1200;
    PackLLIN = 0;// seleción de paquete llamadas intenacionales

    SMSN = 3.021; //Precio de los mensajes
    SMSN1 = 100;
    SMSN2 = 200;
    OpcSMS = 0; // seleción de paquete mensajes
    cout << "Selecione una opción: " << endl;
    cout << "";
    cout << "Tarifa de llamadas" << endl;
    cout << "Tarifa de mensajes" << endl;
    cout << "Tarifa de Internet" << endl;
    cout << "Combos llamadas,SMS,internet" << endl;
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
            else if (OpcLlamadas == 2) {
                cout << "Selecione un Grupo al que pertenezca el país: " << endl;
                cout << "  " << endl;
                cout << "GRUPO A: Estados Unidos, Canadá, México, Puerto Rico, Hawai, Alaska, Islas Vírgenes " << endl;
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
                else if (OpcLlamadas == 3) {
                    cout << "1.Paquete Nicaragua (20min) valor:" << PackNi << endl;
                    cout << "2.Paquete Panamá " << PackPa << endl;
                    cout << "3.Paquete Estados Unidos " << PackEEUU << endl;
                    cin >> PackLLIN;
                    if (PackLLIN == 1 or PackLLIN == 2 or PackLLIN == 3) {
                        cout << "Su paquete ha sido activado con éxito!" << endl;
                        cout << " " << endl;
                        cout << "Gracias por utilizar nuestro servicio" << endl;
                    }
                    else {
                        cout << "Lo sentimos su opción no es válida" << endl;
                        cout << " " << endl;
                        cout << "Gracias por utilizar nuestro servicio" << endl;
                    }

                }
                break;
                case 2:
                    cout << "Tarifa de mensajes nacionales" << SMSN << " colones " << endl;
                cout << " " << endl;
                cout << " Tambien puedes adquirir paquetes diarios de mensajes" << endl;
                cout << " 1.Paquete básico: " << SMSN1 << " colones " << endl;
                cout << " 2.Paquete plus: " << SMSN2 << " colones " << endl;
                cin >> OpcSMS;
                if (OpcSMS == 1 or OpcSMS == 2) {
                    cout << "Su paquete ha sido activado con éxito!" << endl;
                    cout << " " << endl;
                    cout << "Gracias por utilizar nuestro servicio" << endl;
                }
                else {
                    cout << "Lo sentimos su opción no es válida" << endl;
                    cout << " " << endl;
                    cout << "Gracias por utilizar nuestro servicio" << endl;
                }
                break;
                default:
                    cout << " Su opción no es válida";
                break;
            }
    }
}
//
//case 3:;
//
//case 4:;
//
//default:;

#endif //DENDENMUSHI_KOLBI_H
