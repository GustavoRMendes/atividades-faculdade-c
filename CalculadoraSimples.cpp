#include <iostream>

using namespace std;

int main() {
    char op;
    float num1, num2;

    cout << "Digite o primeiro número: ";
    cin >> num1;

    cout << "Digite o operador (+, -, *, /): ";
    cin >> op;

    cout << "Digite o segundo número: ";
    cin >> num2;

    switch(op) {
        case '+':
            cout << "Resultado: " << num1 + num2;
            break;
        case '-':
            cout << "Resultado: " << num1 - num2;
            break;
        case '*':
            cout << "Resultado: " << num1 * num2;
            break;
        case '/':
            if(num2 != 0)
                cout << "Resultado: " << num1 / num2;
            else
                cout << "Erro! Divisão por zero.";
            break;
        default:
            cout << "Operador inválido!";
    }

    return 0;
}

