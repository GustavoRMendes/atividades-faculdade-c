#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Seed para gerar números aleatórios

    int numeroSecreto = rand() % 100 + 1; // Número aleatório entre 1 e 100
    int tentativa, tentativasRestantes = 5;

    cout << "Bem-vindo ao Jogo de Adivinhação!\n";
    cout << "Tente adivinhar o número secreto entre 1 e 100.\n";
    cout << "Você tem " << tentativasRestantes << " tentativas.\n";

    do {
        cout << "Digite sua tentativa: ";
        cin >> tentativa;

        if (tentativa == numeroSecreto) {
            cout << "Parabéns! Você acertou o número secreto: " << numeroSecreto << endl;
            break;
        } else if (tentativa < numeroSecreto) {
            cout << "Tente um número maior.\n";
        } else {
            cout << "Tente um número menor.\n";
        }

        tentativasRestantes--;
        cout << "Tentativas restantes: " << tentativasRestantes << endl;

    } while (tentativasRestantes > 0);

    if (tentativasRestantes == 0) {
        cout << "Você não conseguiu adivinhar o número secreto. O número era: " << numeroSecreto << endl;
    }

    return 0;
}

