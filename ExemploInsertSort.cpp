#include <iostream>
using namespace std;
void insertionSort(int arr[],int n) {
	for(int i = 1; i < n; i++)
	for(int j = i; j > 0 && arr[j] < arr[j - 1]; swap(arr[j],arr[j-1]),j--);
}

int main() {
	int arr[] = {12,11,13,5,6};
	int n = sizeof(arr) / sizeof(arr[0]);
	insertionSort(arr,n);
	for(int i = 0; i < n; cout << arr[i++] << " ");
	return 0;
}
