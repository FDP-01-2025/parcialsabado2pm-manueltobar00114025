#include <iostream>

using namespace std;

int main() {
    char calificacion;

    cout << "Ingresa la calificacion (A, B, C, D, F): ";
    cin >> calificacion;

    switch (calificacion) {
        case 'A':
            cout << "Excelente" << endl;
            break;
        case 'a':
            cout << "Excelente" << endl;
            break;
        case 'B':
            cout << "Muy bien" << endl;
            break;
        case 'b':
            cout << "Muy bien" << endl;
            break;    
        case 'C':
            cout << "Bien" << endl;
            break;
        case 'c':
            cout << "Bien" << endl;
            break;    
        case 'D':
            cout << "Necesitas mejorar" << endl;
            break;
        case 'd':
            cout << "Necesitas mejorar" << endl;
            break;    
        case 'F':
            cout << "Reprobado" << endl;
            break;
        case 'f':
            cout << "Reprobado" << endl;
            break;    
        default:
            cout << "Calificacion no valida" << endl;
            break;
    }

    return 0;
}
