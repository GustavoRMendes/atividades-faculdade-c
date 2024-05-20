#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
	int arr[] = {20,12,10,15,2};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "SEQUENCIA ORIGINAL: ";
	for(int i = 0; i < n; i++) {
		cout << arr[i] << " ";
		cout << endl;
		sort(arr,arr + n);
		cout << "SEQUENCIA ORDENADA: ";
		for(int i=0; i< n; i++)
			cout << arr[i] << " ";
		cout << endl;
		return 0;
	}
}
