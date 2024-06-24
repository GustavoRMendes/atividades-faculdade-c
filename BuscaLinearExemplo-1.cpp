#include<iostream>
# include<vector>
//Busca Linear ou Busca Sequêncial:
//     O que é uma busca linear?
//         Ele é mais simples e é o único que não precisa que a lista esteja ordenada.
//         Vai correr uma lista sequencialmente.  
//         Interessante pra lista pequena.
//         Inicia sempre pelo primeiro item da lista e vai seguindo até encontrar o elemento encontrado.
//         Vai até o final da lista se não encontrar.
//         O tempo de execução vai depender do tamanho da lista.
//         Simples de Implementar e entender mas pode não ser a melhor escolha em todos os cenários.
//         Não é eficiente em grande volumes de dados.
//         Em lista pequenas sim, simples de implementar pq vai entender tua necessidade
//         Inicia pelo primeiro até chegar no elemento
using namespace std;
int main() {
  int n, pos;
  cout << "Tamanho da sequência: ";
  cin >> n;
  vector<int> sequencia(n);
  cout << "Digite os números da sequência:\n";
  for (int i = 0; i < n; i++) {
    cin >> sequencia[i];
  }
  cout << "Posição desejada (começando em 0): ";
  cin >> pos;
  if (pos >= 0 && pos < n) {
    cout << "Valor na posição " << pos << ": " << sequencia[pos] << endl;
  } else {
    cout << "Posição inválida. Deve estar no intervalo [0, " << n - 1 << "].\n";
  }
  return 0;
}

