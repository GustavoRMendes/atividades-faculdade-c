#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

// Fun��o para calcular o valor total de uma m�o de cartas
int calcularValorTotal(const vector<int>& mao) {
    int total = 0;
    int numAs = 0; // Contador de Ases (que podem valer 1 ou 11)

    for (int carta : mao) {
        if (carta == 1) { // Se a carta for um �s
            numAs++;
            total += 11; // Sup�e-se inicialmente que o �s valha 11
        } else if (carta >= 10) { // Se a carta for um Valete, Dama ou Rei
            total += 10;
        } else {
            total += carta;
        }
    }

    // Ajustar o valor do �s se necess�rio
    while (total > 21 && numAs > 0) {
        total -= 10; // Muda o valor do �s de 11 para 1
        numAs--;
    }

    return total;
}

// Fun��o para exibir uma m�o de cartas
void exibirMao(const vector<int>& mao, bool mostrarTodas = true) {
    for (int i = 0; i < mao.size(); ++i) {
        if (i == 0 && !mostrarTodas) {
            cout << "X "; // Mostra a primeira carta virada para baixo
        } else {
            cout << mao[i] << " ";
        }
    }
    cout << endl;
}

// Fun��o para verificar se a m�o estourou (passou de 21)
bool estourou(const vector<int>& mao) {
    return calcularValorTotal(mao) > 21;
}

int main() {
    srand(time(0)); // Seed para gerar n�meros aleat�rios

    cout << "Bem-vindo ao Blackjack (21)!\n";

    // Inicializa��o das cartas
    vector<int> baralho;
    for (int i = 1; i <= 10; ++i) {
        baralho.push_back(i); // As cartas numeradas de 1 a 10 (�s a 10)
    }

    // Embaralhar o baralho
    for (int i = 0; i < baralho.size(); ++i) {
        int posAleatoria = rand() % baralho.size();
        swap(baralho[i], baralho[posAleatoria]);
    }

    vector<int> maoJogador, maoComputador;

    // Distribuir as duas primeiras cartas para o jogador e para o computador
    maoJogador.push_back(baralho.back());
    baralho.pop_back();
    maoComputador.push_back(baralho.back());
    baralho.pop_back();
    maoJogador.push_back(baralho.back());
    baralho.pop_back();
    maoComputador.push_back(baralho.back());
    baralho.pop_back();

    // Exibir a m�o do jogador e a primeira carta do computador
    cout << "Sua m�o: ";
    exibirMao(maoJogador);
    cout << "M�o do computador: ";
    exibirMao(maoComputador, false);

    // Turno do jogador
    char escolha;
    do {
        cout << "Deseja pedir uma carta? (s/n): ";
        cin >> escolha;

        if (escolha == 's' || escolha == 'S') {
            maoJogador.push_back(baralho.back());
            baralho.pop_back();
            cout << "Sua m�o: ";
            exibirMao(maoJogador);
        }

    } while ((escolha == 's' || escolha == 'S') && !estourou(maoJogador));

    // Turno do computador
    cout << "M�o do computador: ";
    exibirMao(maoComputador);
    while (calcularValorTotal(maoComputador) < 17) {
        maoComputador.push_back(baralho.back());
        baralho.pop_back();
        cout << "M�o do computador: ";
        exibirMao(maoComputador);
    }

    // Determinar o vencedor
    int valorTotalJogador = calcularValorTotal(maoJogador);
    int valorTotalComputador = calcularValorTotal(maoComputador);

    cout << "Valor total da sua m�o: " << valorTotalJogador << endl;
    cout << "Valor total da m�o do computador: " << valorTotalComputador << endl;

    if (estourou(maoJogador)) {
        cout << "Voc� estourou! Computador venceu.\n";
    } else if (estourou(maoComputador) || valorTotalJogador > valorTotalComputador) {
        cout << "Voc� venceu!\n";
    } else if (valorTotalComputador > valorTotalJogador) {
        cout << "Computador venceu.\n";
    } else {
        cout << "Empate!\n";
    }

    return 0;
}

