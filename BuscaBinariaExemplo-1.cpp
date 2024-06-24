#include<iostream>
#include<vector>
//   O que é?
//       Dividir em dois 
//       TEM QUE SER INICIADA NUMA LISTA ORDENADA
//       OBJETIVO: ENCONTRAR UM ELEMENTO NO CONJUNTO DE DADOS
//       TODA LISTA INDEPENDETE ELA VAI DIVIDIR EM DOIS
//       COMPARA O ELEMENTO QUE ESTÁ NO MEIO JA COMPARA COM O ELEMENTO DO MEIO
//       SE FOREM IGUAL O ALGORITMO TERMINA COM SUCESSO
//       O PROCESSO É DIVIDIR E COMPARAR É REPETIDO ATÉ QUE O ELEMENTO SEJA ENCONTRADO OU NÃO
//       Bem eficiente, porque é reduzida pela metade
//       Recomendada pra grande volume de dados
//
//       EXEMPLO: 7 ELEMENTOS
//        ELEMENTO BUSCADO = 4
//         0 1 2 3 |  4 5 6 
//        ELE BUSCA O ELEMENTO DO MEIO E JÁ COMPARA QUE NO CASO É O 3
//        4 > 3 ENTÃO JÁ TIRA A METADE DEBAIXO, OU SEJA , NÃO PRECISA VOLTAR PQ NÃO VAI ACHAR O 4 PQ O 3 É MENOR.
//        DEPOIS ELE ENCONTRA O 4 E CONTINUA PQ PODE TER OUTRO 4 MAS JÁ QUE NÃO TEM ELE SÓ VAI ATÉ O 5.
//
//
//       Vantagens:
//             GANHA TEMPO, COM COMPLEXIDADE DE TEMPO EM LISTA ORDENADAS
//             SEMPRE DE FORMA CRESCENTE (PADRÃO) 
//             DESEMPENHO CONSISTENTE independe do tamanho da lista
//             ENCONTRA VALORES RAPIDAMENTE EM LISTAS GRANDES === QUERYSELECTORALL
//     Desvantagens:
//              REQUER LISTA ORDENADA
//              LIMITA A BUSCA DE VALORES ESPECIFICOS
//              MAIS COMPLEXA
//              REQUER MAIS MEMÓRIA
//
using namespace std;
int buscaBinaria(const vector<int> &v, int k) {
  int l = 0, r = v.size() - 1;
  while (l <= r) {
    int m = (l + r) / 2;
    if (v[m] == k)
      return m;
    (v[m] < k) ? l = m + 1 : r = m - 1;
  }
  return -1;
}
int main() {
  int n;
  cout << "Tamanho do vetor: ";
  cin >> n;
  vector<int> v(n);
  cout << "Elementos em ordem crescente:\n";
  for (int i = 0; i < n; cin >> v[i++])
    ;
  int k;
  cout << "Elemento a buscar: ";
  cin >> k;
  int i = buscaBinaria(v, k);
  (i != -1) ? cout << "Encontrado na posição " << i << endl
            : cout << "Não encontrado." << endl;
  return 0;
}
