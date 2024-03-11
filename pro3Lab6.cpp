//Angelyn Judith Diaz Zeceña 5090-23-1407
//Programa 3 Calculadora Simple 

#include <iostream>

using namespace std;

// Aqui podemos ver como se define la clase
class Calculadora {
private:
    double numero1;
    double numero2;

public:
    // Aqui podemos ver el  constructor que inicializa los números para calcular la clase
    Calculadora(double num1, double num2) : numero1(num1), numero2(num2) {}

    // Aqui se realizan los métodos para realizar las operaciones
    double suma() const {
        return numero1 + numero2;
    }

    double resta() const {
        return numero1 - numero2;
    }

    double multiplicacion() const {
        return numero1 * numero2;
    }

    double division() const {
        if (numero2 != 0) {
            return numero1 / numero2;
        }
        else {
            cerr << "Error: Division por cero no permitida." << endl;
            return 0; 
        }
    }
};

//  Aqui podemos observar la función principal
int main() {
    // Mensaje de bienvenida
    cout << "-----Hola personita, bienvenida a la calculadora simple-----" << endl;

    //  Aqui se le solicita al usuario que ingrese los números
    double num1, num2;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    // Aqui se Crea una instancia de la clase Calculadora con los números ingresados
    Calculadora miCalculadora(num1, num2);

    // Aqui ya se realizan las operaciones y mostrar resultados
    cout << "Suma: " << miCalculadora.suma() << endl;
    cout << "Resta: " << miCalculadora.resta() << endl;
    cout << "Multiplicacion: " << miCalculadora.multiplicacion() << endl;
    cout << "Division: " << miCalculadora.division() << endl;

    return 0;
}
