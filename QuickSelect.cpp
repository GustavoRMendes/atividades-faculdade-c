#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int quickSelect(vector<int> & arr, int k) {
	nth_element(arr.begin(),arr.begin() + k, arr.end());
	return arr[k];
}
int main() {
	vector<int>arr= {3,2,1,5,4};
	int k = 2;
	int result = quickSelect(arr,k);
	cout << "O " << k + 1  << "O menor elemento e: " << result << endl;
	return 0;
}
