// productoescalar2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    float v1[3], v2[3], v3[3];
    int i = 0;
    int productoescalar = 0;
    double producto_escalarTriple;
    double proesc1;
    double proesc2;
    double proesc3;
   
   
    


    

    for (int i = 0; i < 3; i++) {

        cout << "llenar primer vector" << endl;
        cin >> v1[i];
    }

    for (int i = 0; i < 3; i++) {

        cout << "llenar segundo vector" << endl;
        cin >> v2[i];
    }
    for (int i = 0; i < 3; i++) {

        cout << "llenar tercer vector" << endl;
        cin >> v3[i];
    }
        proesc1 = ((v2[1] * v3[2]) - (v2[2] * v3[1])) * v1[0];
        proesc2 = ((v2[0] * v3[2]) - (v2[2] * v3[0])) * v1[1];
        proesc3 = ((v2[0] * v3[1]) - (v2[1] * v3[0])) * v1[2];

 

        producto_escalarTriple = proesc1 - proesc2 + proesc3 ;



        cout << "v1" << v1 << "\n";
        cout << "v2 " << v2 << "\n";
        cout << "v3 " << v3 << "\n";


        cout << "El producto escalar es: " << proesc1 << "\n";
        cout << "El producto escalar es: " << proesc2 << "\n";
        cout << "El producto escalar es: " << proesc3 << "\n";
        cout << "El producto escalar triple es: " << producto_escalarTriple;


        return 0;
    }


    


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
