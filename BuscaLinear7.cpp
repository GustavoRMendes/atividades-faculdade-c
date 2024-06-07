#include <iostream>
#include <cstdlib> // Para gerar n�meros aleat�rios

using namespace std;

int main() {
  // Gerando um n�mero aleat�rio entre 1 e 100
  int numeroSecreto = rand() % 100 + 1;

  int palpite;
  int tentativas = 0;

  cout << "Jogo de Adivinha��o!" << endl;
  cout << "Tente adivinhar o n�mero secreto entre 1 e 100: ";

  do {
    cin >> palpite;
    tentativas++;

    if (palpite < numeroSecreto) {
      cout << "O palpite � menor que o n�mero secreto. Tente novamente: ";
    } else if (palpite > numeroSecreto) {
      cout << "O palpite � maior que o n�mero secreto. Tente novamente: ";
    } else {
      cout << "Parab�ns! Voc� adivinhou o n�mero secreto em " << tentativas << " tentativas!" << endl;
    }
  } while (palpite != numeroSecreto);

  return 0;
}
