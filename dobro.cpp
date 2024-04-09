#include <iostream>

using namespace std;
int calcularDobro (int x) {
	return x * x;
}
int main () {
	int numero;
	cout << "Digite um numero para saber o dobro do mesmo: \n";
	cin >> numero;
	cout << "O dobro do numero digitado resulta em " << calcularDobro(numero) << endl;
	return 0;	
}
