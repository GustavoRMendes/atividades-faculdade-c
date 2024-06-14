#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Seed para gerar números aleatórios

    int numeroMinimo, numeroMaximo;
    cout << "Bem-vindo ao Jogo de Adivinhar o Número!\n";
    cout << "Pense em um intervalo de números e deixe-me adivinhar.\n";
    cout << "Digite o número mínimo do intervalo: ";
    cin >> numeroMinimo;
    cout << "Digite o número máximo do intervalo: ";
    cin >> numeroMaximo;

    int tentativa, tentativas = 0;
    char resposta;
    bool acertou = false;

    do {
        tentativa = rand() % (numeroMaximo - numeroMinimo + 1) + numeroMinimo;
        cout << "Eu acho que o número é " << tentativa << ". (S)im, (M)aior, (M)enor? ";
        cin >> resposta;

        if (resposta == 'S' || resposta == 's') {
            acertou = true;
            cout << "Eu sabia! O número era " << tentativa << "!\n";
        } else if (resposta == 'M' || resposta == 'm') {
            numeroMinimo = tentativa + 1;
        } else if (resposta == 'm' || resposta == 'm') {
            numeroMaximo = tentativa - 1;
        }

        tentativas++;

    } while (!acertou);

    cout << "Levei " << tentativas << " tentativas para adivinhar.\n";

    return 0;
}

