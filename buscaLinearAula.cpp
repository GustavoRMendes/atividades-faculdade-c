#include <iostream>
#include <vector>
using namespace std;
int main() {	
	int n,pos;
	cout << "Tamanho da sequencia: ";
	cin >> n;
	vector <int> sequencia(n);
	cout << "Digite os numeros da sequencia: \n";
	for (int i = 0; i < n; i++) {
		cin >> sequencia[i];
	}
	cout << "Posicao desejada (comecando em 0): ";
	cin >> pos;
	if( pos>= 0 && pos < n) {
		cout << "Valor na posicao " << pos << ":" << sequencia[pos] << endl;
	}else {
		cout << "Posicao invalida.Deve estar no intervalo [0, " << n - 1 << "].\n";
	}
	return 0;
}
