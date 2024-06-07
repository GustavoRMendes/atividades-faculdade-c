#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int vetor[] = {10, 22, 34, 45, 56}; // Vetor de exemplo
  int tamanho = sizeof(vetor) / sizeof(vetor[0]); // Tamanho do vetor
  int elementoBuscado = 45; // Elemento a ser buscado

  // Usa o algoritmo 'find' para buscar o elemento no vetor
  auto it = find(begin(vetor), end(vetor), elementoBuscado);

  // Verifica se o elemento foi encontrado
  if (it != end(vetor)) {
    int indiceEncontrado = distance(begin(vetor), it);
    cout << "Elemento " << elementoBuscado << " encontrado na posição " << indiceEncontrado << endl;
  } else {
    cout << "Elemento " << elementoBuscado << " não encontrado." << endl;
  }

  return 0;
}
