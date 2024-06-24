#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int quickSelect(vector<int> &arr, int k) {
  nth_element(arr.begin(), arr.begin() + k, arr.end());
  return arr[k];
}
int main() {
  vector<int> arr = {3, 2, 1, 5, 4};
  int k = 2;
  int result = quickSelect(arr, k);
  cout << "O " << k + 1 << "º menor elemento é: " << result << endl;
  return 0;
}

// Quick Select
// Pivô pra iniciar === No exemplo foi 5 que era a última posição do vetor
// dividiu 3142 5 6897
// No final, não precisa estar ordenado.


//  Seleção Rápida
//                      Vai procurar o maior ou menor valor em uma lista não ordenada, 
//                      Ao contrário do QuickSort, ele não ordena todos os elementos, objetivo dele é fazer uma seleção rápida
//                      Vantagem é o tempo , nao precisa de ordenação economizando tempo
//                      Grande conjunto de dados econimza tempo e memória
//                      Desvantagem é o desempenho no pior caso e falta de estabilidade. Ele escolhe o pivô
//                      Não busca a ordem original, o que pode ser um problema.
//                      Aplicação em elementos de algoritmos de ordenação e resolucação de problemas de seleção online e estatitica de banco de dados
//                      Exemplo:
//                      3  6  1   8   4   9   2   7  5
//                      Pega o pivo e compara
