#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;
int main() {
  int arr[] = {64, 25, 12, 22, 11};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << "Sequência original : " ;
  for (int i = 0; i < n; i++)
    cout << arr[i]<< " " ;
  cout << endl;
  sort(arr, arr + n);
  cout << "Sequência ordenada : ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
  return 0;
}

// Select Sort
// selecionar o que vai ordenar, sempre vai buscar o menor valor, e vai deixar o menor na primeira posição.
// A medida que ele for encontrando um menor, ele vai trocando. 
// COMPARA A POSIÇÃO ATÉ O FINAL.
