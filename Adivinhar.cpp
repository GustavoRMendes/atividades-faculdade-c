#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Seed para gerar n�meros aleat�rios

    int numeroSecreto = rand() % 100 + 1; // N�mero aleat�rio entre 1 e 100
    int tentativa, tentativasRestantes = 5;

    cout << "Bem-vindo ao Jogo de Adivinha��o!\n";
    cout << "Tente adivinhar o n�mero secreto entre 1 e 100.\n";
    cout << "Voc� tem " << tentativasRestantes << " tentativas.\n";

    do {
        cout << "Digite sua tentativa: ";
        cin >> tentativa;

        if (tentativa == numeroSecreto) {
            cout << "Parab�ns! Voc� acertou o n�mero secreto: " << numeroSecreto << endl;
            break;
        } else if (tentativa < numeroSecreto) {
            cout << "Tente um n�mero maior.\n";
        } else {
            cout << "Tente um n�mero menor.\n";
        }

        tentativasRestantes--;
        cout << "Tentativas restantes: " << tentativasRestantes << endl;

    } while (tentativasRestantes > 0);

    if (tentativasRestantes == 0) {
        cout << "Voc� n�o conseguiu adivinhar o n�mero secreto. O n�mero era: " << numeroSecreto << endl;
    }

    return 0;
}

