#include <iostream>

using namespace std;

void clasificarAngulo() {
    int medida_angulo;
    cout << "Ingrese la medida del ángulo: ";
    cin >> medida_angulo;
    
    if (medida_angulo > 0 && medida_angulo < 90) {
        cout << "Ángulo agudo" << endl;
    } else if (medida_angulo == 90) {
        cout << "Ángulo recto" << endl;
    } else if (medida_angulo > 90 && medida_angulo < 180) {
        cout << "Ángulo obtuso" << endl;
    } else if (medida_angulo == 180) {
        cout << "Ángulo extendido" << endl;
    } else {
        cout << "Medida de ángulo no válida" << endl;
    }
}

void clasificar_triangulo() {
    int lado1, lado2, lado3;
    cout << "Ingrese la medida de los tres lados del triángulo: ";
    cin >> lado1 >> lado2 >> lado3;
    
    if (lado1 == lado2 && lado2 == lado3) {
        cout << "Triángulo equilátero" << endl;
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        cout << "Triángulo isósceles" << endl;
    } else {
        cout << "Triángulo escaleno" << endl;
    }
}

void calcular_area_rectangulo() {
    int largo, ancho, area;
    cout << "Ingrese la medida del largo y ancho del rectángulo: ";
    cin >> largo >> ancho;
    area = largo * ancho;
    cout << "El área del rectángulo es: " << area << endl;
}
