#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;
int main() {
  int arr[] = {64, 25, 12, 22, 11};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << "Sequ�ncia original : " ;
  for (int i = 0; i < n; i++)
    cout << arr[i]<< " " ;
  cout << endl;
  sort(arr, arr + n);
  cout << "Sequ�ncia ordenada : ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
  return 0;
}

// Select Sort
// selecionar o que vai ordenar, sempre vai buscar o menor valor, e vai deixar o menor na primeira posi��o.
// A medida que ele for encontrando um menor, ele vai trocando. 
// COMPARA A POSI��O AT� O FINAL.
