#include <iostream>
#include <vector>

using namespace std;

int main() {
    string nombre;
    string carnet;
    vector<string> libros;
    int opcion;
    
    cout << "Ingrese su nombre: ";
    getline(cin, nombre);
    
    do {
        cout << "Ingrese su numero de carnet (8 digitos): ";
        cin >> carnet;
    } while (carnet.length() != 8);

    do {
        cout << "\nMenu:\n";
        cout << "1. Prestar libro\n";
        cout << "2. Devolver libro\n";
        cout << "3. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore(); 

        switch (opcion) {
            case 1: {
                string titulo;
                cout << "Ingrese el titulo del libro: ";
                getline(cin, titulo);
                libros.push_back(titulo);
                cout << "Prestamo exitoso: \"" << titulo << "\" ha sido registrado.\n";
                break;
            }
            case 2: {
                if (libros.empty()) {
                    cout << "No hay libros prestados para devolver.\n";
                } else {
                    cout << "Libros prestados:\n";
                    for (size_t i = 0; i < libros.size(); i++) {
                        cout << i + 1 << ". " << libros[i] << "\n";
                    }
                    int indice;
                    cout << "Seleccione el numero del libro a devolver: ";
                    cin >> indice;
                    if (indice > 0 && indice <= libros.size()) {
                        cout << "Libro \"" << libros[indice - 1] << "\" devuelto exitosamente.\n";
                        libros.erase(libros.begin() + (indice - 1));
                    } else {
                        cout << "Seleccion invalida.\n";
                    }
                }
                break;
            }
            case 3:
                cout << "Saliendo del sistema...\n";
                break;
            default:
                cout << "Opción no valida. Intente de nuevo.\n";
                break;
        }
    } while (opcion != 3);

    return 0;
}
