#include <iostream>
#include "funciones.h"

using namespace std;

int main() {
    int opcion;
    
    do {
        cout << "Menú de opciones:" << endl;
        cout << "1. Identificar la clasificación de un ángulo según su medida." << endl;
        cout << "2. Identificar la clasificación de un triángulo según la medida de sus lados." << endl;
        cout << "3. Calcular el área de un rectángulo." << endl;
        cout << "4. Salir." << endl;
        cout << "Ingrese la opción deseada: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:
                clasificar_angulo();
                break;
            case 2:
                clasificar_triangulo();
                break;
            case 3:
                calcular_area_rectangulo();
                break;
            case 4:
                break;
            default:
                cout << "Opción no válida, intente de nuevo." << endl;
                break;
        }
        
    } while (opcion != 4);
    
    return 0;
}
