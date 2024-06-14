#include <iostream>

using namespace std;

int main() {
    char op;
    float num1, num2;

    cout << "Digite o primeiro n�mero: ";
    cin >> num1;

    cout << "Digite o operador (+, -, *, /): ";
    cin >> op;

    cout << "Digite o segundo n�mero: ";
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
                cout << "Erro! Divis�o por zero.";
            break;
        default:
            cout << "Operador inv�lido!";
    }

    return 0;
}

