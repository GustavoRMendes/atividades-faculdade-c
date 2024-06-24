#include<iostream>
# include<vector>
//Busca Linear ou Busca Sequ�ncial:
//     O que � uma busca linear?
//         Ele � mais simples e � o �nico que n�o precisa que a lista esteja ordenada.
//         Vai correr uma lista sequencialmente.  
//         Interessante pra lista pequena.
//         Inicia sempre pelo primeiro item da lista e vai seguindo at� encontrar o elemento encontrado.
//         Vai at� o final da lista se n�o encontrar.
//         O tempo de execu��o vai depender do tamanho da lista.
//         Simples de Implementar e entender mas pode n�o ser a melhor escolha em todos os cen�rios.
//         N�o � eficiente em grande volumes de dados.
//         Em lista pequenas sim, simples de implementar pq vai entender tua necessidade
//         Inicia pelo primeiro at� chegar no elemento
using namespace std;
int main() {
  int n, pos;
  cout << "Tamanho da sequ�ncia: ";
  cin >> n;
  vector<int> sequencia(n);
  cout << "Digite os n�meros da sequ�ncia:\n";
  for (int i = 0; i < n; i++) {
    cin >> sequencia[i];
  }
  cout << "Posi��o desejada (come�ando em 0): ";
  cin >> pos;
  if (pos >= 0 && pos < n) {
    cout << "Valor na posi��o " << pos << ": " << sequencia[pos] << endl;
  } else {
    cout << "Posi��o inv�lida. Deve estar no intervalo [0, " << n - 1 << "].\n";
  }
  return 0;
}

