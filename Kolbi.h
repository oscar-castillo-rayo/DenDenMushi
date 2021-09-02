
#ifndef DENDENMUSHI_KOLBI_H
#define DENDENMUSHI_KOLBI_H

#include <iostream>

using namespace std;
float Llamada, Mensajes, Combos, Internet, PrecioDolar,CantidadMinutos;
int CLLN, CLLIN, CPLLI;//Costo llamada Nacional(CLlN),Costo llamada intenacional(CLlIN), Costo promoción llamada internacional(CPLLI);
float GA,GB,GC1,GC2,GD,GE,GF,Grupo;// Contendrá las tarifas de llamadas intenacionales y del grupo que selecionen.
int OpcMenu, OpcLlamadas,OpcLLIN;
CLLN = 40.351;
PrecioDolar = 621.05;
GA=0.1377;
GB=0.3098;
GC1=0.1377;
GC2=0.3213;
GD=0.5508;
GE=1.0328;
GF=4.4179;
Grupo=0;
//OpcLlamadas;//Grupo


static_cast<bool>(cout << "Selecione una opción: " << endl);
cout << "";
cout << "Tarifa de llamadas" << endl;
cout << "Tarifa de mensajes" << endl;
cout << "Tarifa de Internet" << endl;
cout << "Combos llamadas,SMS,internet" << endl;
cin >> OpcMenu;

switch (OpcMenu) {
case 1: cout << "Que tipo tarifas  de llamadas desea verificar:" << endl;
cout << " " << endl;
cout << "1.Nacionales:" << endl;
cout << "2.Internacionales:" << endl;
cout << "2.Promoción llamadas internacionales:" << endl;
cin >> OpcLlamadas;
if(OpcLlamadas == 1 ) {
cout << "El costo por minuto en llamadas nacionales es de: " << CLLN << endl;

}else if( OpcLlamadas == 2 ){
cout << "Selecione un Grupo al que pertenezca el país: " << endl;
cout << "  " << endl;
cout << "GRUPO A: Estados Unidos, Canadá, México, Puerto Rico, Hawai, Alaska, Islas Vírgenes " << endl;
cout << "Selecione un Grupo al que pertenezca el país: " << endl;
cout << "Selecione un Grupo al que pertenezca el país: " << endl;
cout << "Selecione un Grupo al que pertenezca el país: " << endl;
cout << "Selecione un Grupo al que pertenezca el país: " << endl;
cout << "Selecione un Grupo al que pertenezca el país: " << endl;
cout << "Selecione un Grupo al que pertenezca el país: " << endl;
cin >> CLLIN;
switch (CLLIN){
    case 1: Grupo = GA;
    break;
    case 2: Grupo = GB;
    break;
    case 3: Grupo = GC1;
    break;
    case 4: Grupo = GC2;
    break;
    case 5: Grupo = GD;
    break;
    case 6: Grupo = GE;
    break;
    case 7: Grupo = GF;
    break;
    default: Grupo = 0;
        cout << "Lo sentimos la opción que usted intentó no es válida" <<endl;
}
if ( Grupo != 0 ){
cout << "El precio por minuto es de:"<< char(36) << Grupo<< endl;
cout << "¿Cuántos minutos desea calcular?" << endl;
cin >> CantidadMinutos;
Llamada =(CantidadMinutos/60) * ((Grupo * PrecioDolar)*60);
cout << "El costo es: " <<Llamada << " colones" << endl;
cout << " " << endl;
cout << "¡Gracias por utilizar nuestro servicios! " << endl;
}
else if ( Grupo == 0 ){
cout << "¡Gracias por utilizar nuestro servicios! " << endl;
}
}else if( OpcLlamadas == 3 ){
cout << "El costo por minuto en llamadas nacionales es de: " <<  GA << endl;
}
//break;
//
//case 2:;
//
//case 3:;
//
//case 4:;
//
//default:;
}


#endif //DENDENMUSHI_KOLBI_H
