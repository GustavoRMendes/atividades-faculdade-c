#include <iostream>
#include <cstdlib> // Para gerar números aleatórios
using namespace std;

int main() {
  // Gerar um número aleatório entre 1 e 100
  int numeroSecreto = rand() % 100 + 1;

  int palpite;
  int tentativas = 0;

  cout << "Jogo de Adivinhacao!" << endl;
  cout << "Tente adivinhar o numero secreto entre 1 e 100: ";

    // Faça Enquanto o palpite for diferente do numero secreto
  do {
    // Ler o palpite do usuário
    cin >> palpite; 
    
	// Incrementar na variável de tentativas
	tentativas++; 

    if (palpite < numeroSecreto) {
      cout << "O seu palpite e menor que o numero secreto. Tente novamente: ";
    } else if (palpite > numeroSecreto) { 
      cout << "O seu palpite e maior que o numero secreto. Tente novamente: ";
    } else {
      cout << "Parabens! Voce adivinhou o numero secreto em " << tentativas << " tentativas!" << endl;
    }
  } while (palpite != numeroSecreto); // Enquanto o palpite for diferente do numero secreto

  return 0;
}
