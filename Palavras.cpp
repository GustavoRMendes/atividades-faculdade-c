#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

// Função para escolher uma palavra aleatória
string escolherPalavraAleatoria() {
    vector<string> palavras = {"gato", "cachorro", "elefante", "tigre", "leão", "zebra", "girafa", "rato", "camelo", "macaco"};
    int indice = rand() % palavras.size();
    return palavras[indice];
}

// Função para exibir a palavra escondida com letras adivinhadas reveladas
void exibirPalavra(string palavra, const vector<bool>& letrasAdivinhadas) {
    for (size_t i = 0; i < palavra.length(); ++i) {
        if (letrasAdivinhadas[i]) {
            cout << palavra[i] << " ";
        } else {
            cout << "_ ";
        }
    }
    cout << endl;
}

int main() {
    srand(time(0)); // Seed para gerar números aleatórios

    string palavraSecreta = escolherPalavraAleatoria();
    int tamanhoPalavra = palavraSecreta.length();
    vector<bool> letrasAdivinhadas(tamanhoPalavra, false); // Inicializa com todas as letras não adivinhadas

    int tentativasRestantes = 6; // Número de tentativas antes de ser enforcado

    cout << "Bem-vindo ao Jogo da Forca!\n";
    cout << "A palavra tem " << tamanhoPalavra << " letras.\n";

    while (tentativasRestantes > 0) {
        cout << "\nTentativas restantes: " << tentativasRestantes << endl;
        exibirPalavra(palavraSecreta, letrasAdivinhadas);

        char palpite;
        cout << "Digite uma letra: ";
        cin >> palpite;

        bool letraEncontrada = false;
        for (int i = 0; i < tamanhoPalavra; ++i) {
            if (palavraSecreta[i] == palpite) {
                letrasAdivinhadas[i] = true;
                letraEncontrada = true;
            }
        }

        if (!letraEncontrada) {
            cout << "Letra não encontrada. Tente novamente.\n";
            tentativasRestantes--;
        }

        bool todasLetrasAdivinhadas = true;
        for (bool letra : letrasAdivinhadas) {
            if (!letra) {
                todasLetrasAdivinhadas = false;
                break;
            }
        }

        if (todasLetrasAdivinhadas) {
            cout << "\nParabéns! Você adivinhou a palavra: " << palavraSecreta << endl;
            break;
        }
    }

    if (tentativasRestantes == 0) {
        cout << "\nVocê foi enforcado! A palavra era: " << palavraSecreta << endl;
    }

    return 0;
}

