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
  cout << "Sequ�ncia ordenada: ";
  for (int num : arr)
    cout << num << " ";
  cout << endl;
  return 0;

}

// Heap Sort
// �rvore Heap
// Cada n� pode gerar no m�ximo dois filhos
// S� pode uma troca por vez.

// Junta tudo e depois ordenar selecionar
//              Ordena��o em pilha
// 
//              Trabalha com arvore bin�ria
//
//              Constroi a arvover, depos do m�ximo ao m�nimo,
//              Arvore Bin�ria Heap
//              N� pai gera o N� Filho e assim sucessivamente
//              Cada n� so pode gerar dois n�s
//              Esquerda depois direita
//              UMA TROCA POR VEZ
//              O pai sempre vai ser maior que os filhos!
//              Caso contrario, a gente vai trocando at� que a essa regra seja atendida
//              Todos descendentes s�o menores que os ascendentes
//              A raiz vai ser maior do que todos os abaixos.
//              Vantagem: Estabilidade, Complexidade de Tempo garantida, opera in-place(no lugar) faz a troca no lugar
//              Desvantagem: N�o � r�pido, precisa uma estrutura de dados adicional.
//              Exemplo:
//                   Construindo a �rvore heap
//                    4 9 2 1 5 7 8
//                   
