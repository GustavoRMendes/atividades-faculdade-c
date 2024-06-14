#include <iostream>
#include <vector>

using namespace std;

void exibirTabuleiro(const vector<vector<char>>& tabuleiro) {
    cout << "  1 2 3" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << i + 1 << " ";
        for (int j = 0; j < 3; ++j) {
            cout << tabuleiro[i][j] << " ";
        }
        cout << endl;
    }
}

bool verificarVitoria(const vector<vector<char>>& tabuleiro, char jogador) {
    // Verificar linhas e colunas
    for (int i = 0; i < 3; ++i) {
        if ((tabuleiro[i][0] == jogador && tabuleiro[i][1] == jogador && tabuleiro[i][2] == jogador) ||
            (tabuleiro[0][i] == jogador && tabuleiro[1][i] == jogador && tabuleiro[2][i] == jogador)) {
            return true;
        }
    }
    // Verificar diagonais
    if ((tabuleiro[0][0] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][2] == jogador) ||
        (tabuleiro[0][2] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][0] == jogador)) {
        return true;
    }
    return false;
}

bool verificarEmpate(const vector<vector<char>>& tabuleiro) {
    for (const auto& linha : tabuleiro) {
        for (char celula : linha) {
            if (celula == ' ') {
                return false;
            }
        }
    }
    return true;
}

int main() {
    vector<vector<char>> tabuleiro(3, vector<char>(3, ' '));
    char jogadorAtual = 'X';

    cout << "Bem-vindo ao Jogo da Velha!\n";
    cout << "Jogador 1: X, Jogador 2: O\n";

    while (true) {
        exibirTabuleiro(tabuleiro);

        int linha, coluna;
        cout << "Jogador " << jogadorAtual << ", digite a linha e coluna (1-3): ";
        cin >> linha >> coluna;
        linha--;
        coluna--;

        if (linha >= 0 && linha < 3 && coluna >= 0 && coluna < 3 && tabuleiro[linha][coluna] == ' ') {
            tabuleiro[linha][coluna] = jogadorAtual;

            if (verificarVitoria(tabuleiro, jogadorAtual)) {
                exibirTabuleiro(tabuleiro);
                cout << "Jogador " << jogadorAtual << " venceu!\n";
                break;
            } else if (verificarEmpate(tabuleiro)) {
                exibirTabuleiro(tabuleiro);
                cout << "Empate!\n";
                break;
            }

            jogadorAtual = (jogadorAtual == 'X') ? 'O' : 'X';
        } else {
            cout << "Posição inválida! Tente novamente.\n";
        }
    }

    return 0;
}

