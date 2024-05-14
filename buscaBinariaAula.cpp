#include <iostream>
#include <vector>
using namespace std;
int buscaBinaria(const vector<int> & v, int k ) {
	int I = 0, r =v.size() - 1;
	while(I <= r) {
		int m = (I + r) / 2;
		if(v[m] == k) return m;
		(v[m] < k) ? I = m + 1 : r = m - 1;
	}
	return -1;
}
int main() {	
	int n;
	cout << "Tamanho do vector: ";
	cin >> n;
	vector <int> v(n);
	cout << "Elementos em ordem crescente: \n";
	for (int i = 0; i < n; cin>>v[i++]); 
    int k;
    cout << "Elemento a buscar: ";
    cin >> k;
    int i = buscaBinaria(v,k);
    (i != -1) ? cout << "Encontrado na posicao " << i << endl : cout << "Nao encontrado." << endl;
	return 0;
}
