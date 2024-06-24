#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void selectionSort(vector<int> &arr) {
  for (int i = 0, n = arr.size(); i < n - 1; i++) {
    int min_index = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[min_index])
        min_index = j;
    }
    swap(arr[i], arr[min_index]);
  }
}
int main() {
  vector<int> nums = {12, 3, 5, 8, 1, 7, 9};
  selectionSort(nums);
  cout << "Lista ordenada: ";
  for (int num : nums) {
    cout << num << " ";
  }
  cout << endl;
  return 0;
}
