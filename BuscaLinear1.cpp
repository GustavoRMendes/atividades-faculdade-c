#include <iostream>

using namespace std;

int buscaLinearIterativa(int vetor[], int tamanho, int elemento) {
  for (int i = 0; i < tamanho; i++) {
    if (vetor[i] == elemento) {
      return i; // Elemento encontrado na posi��o i
    }
  }
  return -1; // Elemento n�o encontrado
}

int main() {
  int vetor[] = {10, 22, 34, 45, 56}; // Vetor de exemplo
  int tamanho = sizeof(vetor) / sizeof(vetor[0]); // Tamanho do vetor
  int elementoBuscado = 45; // Elemento a ser buscado

  int indiceEncontrado = buscaLinearIterativa(vetor, tamanho, elementoBuscado);

  if (indiceEncontrado != -1) {
    cout << "Elemento " << elementoBuscado << " encontrado na posi��o " << indiceEncontrado << endl;
  } else {
    cout << "Elemento " << elementoBuscado << " n�o encontrado." << endl;
  }

  return 0;
}

//Fun��o buscaLinearIterativa:
//
//    Percorre o vetor vetor do in�cio ao fim usando um loop for.
//    Compara cada elemento do vetor com o elemento buscado.
//    Se o elemento for encontrado, retorna sua posi��o no vetor.
//    Se o loop terminar sem encontrar o elemento, retorna -1.
