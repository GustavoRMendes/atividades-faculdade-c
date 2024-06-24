#include<iostream>
#include<vector>
#include <algorithm> 
using namespace std;
void quickSort(vector<int> &arr, int low, int high) {
  if (low < high) {
    int pivot = arr[high], i = low - 1;
    for (int j = low; j <= high - 1; j++) {
      if (arr[j] < pivot)
        swap(arr[++i], arr[j]);
    }
    swap(arr[i + 1], arr[high]);
    int pi = i + 1;
    quickSort(arr, low, pi - 1);
    quickSort(arr, pi + 1, high);
  }
}
int main() {
  vector<int> nums = {12, 3, 5, 8, 1, 7, 9};
  int n = nums.size();
  quickSort(nums, 0, n - 1);
  cout << "Lista ordenada: ";
  for (int num : nums)
    cout << num << " ";
  cout << endl;
  return 0;
}
