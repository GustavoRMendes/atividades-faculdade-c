#include <iostream>
#include <cstdlib> // Para gerar números aleatórios

using namespace std;

int main() {
  // Gerando um número aleatório entre 1 e 100
  int numeroSecreto = rand() % 100 + 1;

  int palpite;
  int tentativas = 0;

  cout << "Jogo de Adivinhação!" << endl;
  cout << "Tente adivinhar o número secreto entre 1 e 100: ";

  do {
    cin >> palpite;
    tentativas++;

    if (palpite < numeroSecreto) {
      cout << "O palpite é menor que o número secreto. Tente novamente: ";
    } else if (palpite > numeroSecreto) {
      cout << "O palpite é maior que o número secreto. Tente novamente: ";
    } else {
      cout << "Parabéns! Você adivinhou o número secreto em " << tentativas << " tentativas!" << endl;
    }
  } while (palpite != numeroSecreto);

  return 0;
}
