#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

bool validarCodigo(const string& codigo) {
    if (codigo.length() != 6) return false;
    for (char c : codigo) {
        if (!isalnum(c)) return false;
    }
    return true;
}

int main() {
    string nombre, codigo;
    vector<double> notas;
    int opcion;

    cout << "Ingrese el nombre del estudiante: ";
    getline(cin, nombre);
    
    do {
        cout << "Ingrese el codigo del estudiante (6 caracteres alfanumericos): ";
        cin >> codigo;
        if (!validarCodigo(codigo)) {
            cout << "Codigo invalido. Debe ser alfanumerico y tener 6 caracteres.\n";
        }
    } while (!validarCodigo(codigo));

    do {
        cout << "\nMenu de opciones:\n";
        cout << "1. Agregar nota\n";
        cout << "2. Consultar notas\n";
        cout << "3. Calcular promedio\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                if (notas.size() < 9) {
                    double nota;
                    cout << "Ingrese la nota (0 - 10): ";
                    cin >> nota;
                    if (nota >= 0 && nota <= 10) {
                        notas.push_back(nota);
                        cout << "Nota agregada correctamente.\n";
                    } else {
                        cout << "Nota invalida. Debe estar entre 0 y 10.\n";
                    }
                } else {
                    cout << "Ya ha ingresado el maximo de 9 notas.\n";
                }
                break;
            
            case 2:
                cout << "Notas ingresadas:\n";
                for (size_t i = 0; i < notas.size(); ++i) {
                    cout << "Nota " << i + 1 << ": " << notas[i] << "\n";
                }
                if (notas.empty()) {
                    cout << "No hay notas registradas.\n";
                }
                break;
            
            case 3:
                if (!notas.empty()) {
                    double suma = 0;
                    for (double nota : notas) {
                        suma += nota;
                    }
                    cout << "El promedio de las notas es: " << suma / notas.size() << "\n";
                } else {
                    cout << "No hay notas registradas para calcular el promedio.\n";
                }
                break;
            
            case 4:
                cout << "Saliendo del programa...\n";
                break;
            
            default:
                cout << "Opcion invalida. Intentelo de nuevo.\n";
                break;
        }
    } while (opcion != 4);

    return 0;
}
