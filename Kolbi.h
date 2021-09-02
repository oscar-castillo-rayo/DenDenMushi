
#ifndef DENDENMUSHI_KOLBI_H
#define DENDENMUSHI_KOLBI_H

#include <iostream>

using namespace std;
bool Llamada, Mensajes, Combos, Internet, PrecioDolar,CantidadMinutos;
bool CLLN, CLLIN, CPLLI;//Costo llamada Nacional(CLlN),Costo llamada intenacional(CLlIN), Costo promoción llamada internacional(CPLLI);
bool GA,GB,GC,GD,GE,GF;
int OpcMenu, OpcLlamadas;
CLLN = 40.351;
CLLIN =10000;
//PrecioDolar = ;
//GA=0.1377;
//GB=0.3098;
//GC=0.1377;
//GD=0.5508;
//GE=1.0328;
//GF=4.4179;

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
case 1: cout << "El precio por minuto es de:"<< char(36) << GA << endl;
cout << "¿Cuántos minutos desea calcular?" << endl;
cin >> CantidadMinutos;
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
