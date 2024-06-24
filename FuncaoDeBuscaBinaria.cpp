#include<iostream>
#include<vector>
using namespace std;
int buscaBinaria(const vector<int> &arr, int alvo) {
  int left = 0, right = arr.size() - 1;
  while (left <= right) {
    int mid = left + (right - left) / 2;
    if (arr[mid] == alvo)
      return mid;
    (arr[mid] < alvo) ? left = mid + 1 : right = mid - 1;
  }
  return -1;
}
int main() {
  vector<int> nums = {1, 3, 5, 7, 9, 11, 13};
  int elementoAlvo = 11;
  int index = buscaBinaria(nums, elementoAlvo);
  if (index != -1)
    cout << "Elemento encontrado na posição: " << index << endl;
  else
    cout << "Elemento não encontrado." << endl;
  return 0;
}

