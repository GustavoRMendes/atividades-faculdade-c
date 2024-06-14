#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Seed para gerar n�meros aleat�rios

    int jogador, computador;

    cout << "Bem-vindo ao Jogo de Pedra, Papel e Tesoura!\n";
    cout << "Escolha:\n";
    cout << "1. Pedra\n";
    cout << "2. Papel\n";
    cout << "3. Tesoura\n";
    cout << "Digite o n�mero correspondente � sua escolha: ";
    cin >> jogador;

    // Validar a entrada do jogador
    while (jogador < 1 || jogador > 3) {
        cout << "Escolha inv�lida! Por favor, digite 1, 2 ou 3: ";
        cin >> jogador;
    }

    // Gerar escolha aleat�ria para o computador
    computador = rand() % 3 + 1;

    // Mostrar escolhas do jogador e do computador
    cout << "Voc� escolheu: ";
    switch(jogador) {
        case 1:
            cout << "Pedra\n";
            break;
        case 2:
            cout << "Papel\n";
            break;
        case 3:
            cout << "Tesoura\n";
            break;
    }

    cout << "O computador escolheu: ";
    switch(computador) {
        case 1:
            cout << "Pedra\n";
            break;
        case 2:
            cout << "Papel\n";
            break;
        case 3:
            cout << "Tesoura\n";
            break;
    }

    // Determinar o vencedor
    if (jogador == computador) {
        cout << "Empate!\n";
    } else if ((jogador == 1 && computador == 3) || (jogador == 2 && computador == 1) || (jogador == 3 && computador == 2)) {
        cout << "Voc� venceu!\n";
    } else {
        cout << "Voc� perdeu!\n";
    }

    return 0;
}

