//
//  main.cpp
//  Lab1Final
//
//  Created by Juan Pestana on 8/31/17.
//  Copyright © 2017 DPSoftware. All rights reserved.
//
//=p-Main
// Clase de Main. Aqui se ingresa el archivo y se mandan llamar funciones de las clases.
//=b-0

#include <iostream>
#include <string>
#include <fstream>
#include <ctype.h>
#include "Archivo.h"
#include "Revisador.h"
using namespace std;

//=i
int main() {
    
    int x;
    string nombreArchivo;
    Revisador *archivo = new Revisador();
    
    
    cout << "INTRODUCE NUMERO DE ARCHIVOS: " << endl;
    cin >> x;
    
    while (x!=0){
        
        cout << "INTRODUCE NOMBRE DE ARCHIVO: " << endl;
        cin >> nombreArchivo;
        
        archivo->revisa(nombreArchivo);
        x--;
    }// END WHILE
    
    
    archivo->print();
    
    return 0;
    
}// END MAIN
