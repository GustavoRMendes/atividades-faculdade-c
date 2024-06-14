#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

const int TAMANHO_TABULEIRO = 10;
const int NUM_MINAS = 10;

void inicializarTabuleiro(vector<vector<char>>& tabuleiro, vector<vector<bool>>& minas) {
    // Inicializar tabuleiro vazio
    tabuleiro.assign(TAMANHO_TABULEIRO, vector<char>(TAMANHO_TABULEIRO, '-'));

    // Inicializar minas aleatoriamente
    minas.assign(TAMANHO_TABULEIRO, vector<bool>(TAMANHO_TABULEIRO, false));
    int minasRestantes = NUM_MINAS;
    while (minasRestantes > 0) {
        int linha = rand() % TAMANHO_TABULEIRO;
        int coluna = rand() % TAMANHO_TABULEIRO;
        if (!minas[linha][coluna]) {
            minas[linha][coluna] = true;
            minasRestantes--;
        }
    }
}

int contarMinasAdjacentes(const vector<vector<bool>>& minas, int linha, int coluna) {
    int count = 0;
    for (int i = -1; i <= 1; ++i) {
        for (int j = -1; j <= 1; ++j) {
            int novaLinha = linha + i;
            int novaColuna = coluna + j;
            if (novaLinha >= 0 && novaLinha < TAMANHO_TABULEIRO && novaColuna >= 0 && novaColuna < TAMANHO_TABULEIRO && minas[novaLinha][novaColuna]) {
                count++;
            }
        }
    }
    return count;
}

void revelarTabuleiro(vector<vector<char>>& tabuleiro, const vector<vector<bool>>& minas) {
    for (int i = 0; i < TAMANHO_TABULEIRO; ++i) {
        for (int j = 0; j < TAMANHO_TABULEIRO; ++j) {
            if (minas[i][j]) {
                tabuleiro[i][j] = '*';
            } else {
                int minasAdjacentes = contarMinasAdjacentes(minas, i, j);
                if (minasAdjacentes > 0) {
                    tabuleiro[i][j] = '0' + minasAdjacentes;
                }
            }
        }
    }
}

void exibirTabuleiro(const vector<vector<char>>& tabuleiro) {
    cout << "  ";
    for (int j = 0; j < TAMANHO_TABULEIRO; ++j) {
        cout << j << " ";
    }
    cout << endl;
    for (int i = 0; i < TAMANHO_TABULEIRO; ++i) {
        cout << i << " ";
        for (int j = 0; j < TAMANHO_TABULEIRO; ++j) {
            cout << tabuleiro[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    srand(time(0)); // Seed para gerar números aleatórios

    vector<vector<char>> tabuleiro(TAMANHO_TABULEIRO, vector<char>(TAMANHO_TABULEIRO));
    vector<vector<bool>> minas(TAMANHO_TABULEIRO, vector<bool>(TAMANHO_TABULEIRO));
    
    inicializarTabuleiro(tabuleiro, minas);
    revelarTabuleiro(tabuleiro, minas);

    cout << "Bem-vindo ao Campo Minado!\n";
    cout << "Use as coordenadas (linha, coluna) para jogar.\n";
    cout << "Cuidado com as minas (*).\n";

    int linha, coluna;
    while (true) {
        exibirTabuleiro(tabuleiro);
        cout << "Digite a linha e a coluna: ";
        cin >> linha >> coluna;

        if (linha >= 0 && linha < TAMANHO_TABULEIRO && coluna >= 0 && coluna < TAMANHO_TABULEIRO) {
            if (minas[linha][coluna]) {
                cout << "Você perdeu! Game Over.\n";
                break;
            } else {
                cout << "Nenhuma mina encontrada. Continue jogando.\n";
            }
        } else {
            cout << "Coordenadas inválidas! Tente novamente.\n";
        }
    }

    cout << "Tabuleiro final:\n";
    exibirTabuleiro(tabuleiro);

    return 0;
}

