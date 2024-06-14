#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Seed para gerar n�meros aleat�rios

    int numeroMinimo, numeroMaximo;
    cout << "Bem-vindo ao Jogo de Adivinhar o N�mero!\n";
    cout << "Pense em um intervalo de n�meros e deixe-me adivinhar.\n";
    cout << "Digite o n�mero m�nimo do intervalo: ";
    cin >> numeroMinimo;
    cout << "Digite o n�mero m�ximo do intervalo: ";
    cin >> numeroMaximo;

    int tentativa, tentativas = 0;
    char resposta;
    bool acertou = false;

    do {
        tentativa = rand() % (numeroMaximo - numeroMinimo + 1) + numeroMinimo;
        cout << "Eu acho que o n�mero � " << tentativa << ". (S)im, (M)aior, (M)enor? ";
        cin >> resposta;

        if (resposta == 'S' || resposta == 's') {
            acertou = true;
            cout << "Eu sabia! O n�mero era " << tentativa << "!\n";
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

