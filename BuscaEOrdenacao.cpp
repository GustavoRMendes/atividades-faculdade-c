#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;
int main() {
  vector<int> vetor = {12, 45, 7, 23, 56, 89, 34, 8, 67};
  cout << "Vetor antes da ordenação: ";
  for (int num : vetor) {
    cout << num << " ";
  }
  cout << endl;
  sort(vetor.begin(), vetor.end());
  cout << "Vetor após a ordenação: ";
  for (int num : vetor) {
    cout << num << " ";
  }
  cout << endl;
  return 0;
}
