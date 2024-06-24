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
  cout << "O " << k + 1 << "� menor elemento �: " << result << endl;
  return 0;
}

// Quick Select
// Piv� pra iniciar === No exemplo foi 5 que era a �ltima posi��o do vetor
// dividiu 3142 5 6897
// No final, n�o precisa estar ordenado.


//  Sele��o R�pida
//                      Vai procurar o maior ou menor valor em uma lista n�o ordenada, 
//                      Ao contr�rio do QuickSort, ele n�o ordena todos os elementos, objetivo dele � fazer uma sele��o r�pida
//                      Vantagem � o tempo , nao precisa de ordena��o economizando tempo
//                      Grande conjunto de dados econimza tempo e mem�ria
//                      Desvantagem � o desempenho no pior caso e falta de estabilidade. Ele escolhe o piv�
//                      N�o busca a ordem original, o que pode ser um problema.
//                      Aplica��o em elementos de algoritmos de ordena��o e resoluca��o de problemas de sele��o online e estatitica de banco de dados
//                      Exemplo:
//                      3  6  1   8   4   9   2   7  5
//                      Pega o pivo e compara
