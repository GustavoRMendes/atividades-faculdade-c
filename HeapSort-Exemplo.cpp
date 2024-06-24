#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;
void heapsort(vector<int> &arr) {
  make_heap(arr.begin(), arr.end());
  sort_heap(arr.begin(), arr.end());
}
int main() {
  vector<int> arr = {12, 11, 13, 5, 6, 7};
  heapsort(arr);
  cout << "Sequência ordenada: ";
  for (int num : arr)
    cout << num << " ";
  cout << endl;
  return 0;

}

// Heap Sort
// Árvore Heap
// Cada nó pode gerar no máximo dois filhos
// Só pode uma troca por vez.

// Junta tudo e depois ordenar selecionar
//              Ordenação em pilha
// 
//              Trabalha com arvore binária
//
//              Constroi a arvover, depos do máximo ao mínimo,
//              Arvore Binária Heap
//              Nó pai gera o Nó Filho e assim sucessivamente
//              Cada nó so pode gerar dois nós
//              Esquerda depois direita
//              UMA TROCA POR VEZ
//              O pai sempre vai ser maior que os filhos!
//              Caso contrario, a gente vai trocando até que a essa regra seja atendida
//              Todos descendentes são menores que os ascendentes
//              A raiz vai ser maior do que todos os abaixos.
//              Vantagem: Estabilidade, Complexidade de Tempo garantida, opera in-place(no lugar) faz a troca no lugar
//              Desvantagem: Não é rápido, precisa uma estrutura de dados adicional.
//              Exemplo:
//                   Construindo a árvore heap
//                    4 9 2 1 5 7 8
//                   
