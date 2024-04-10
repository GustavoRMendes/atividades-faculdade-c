#include <iostream>
using namespace std;
int main () {
	int nota1,nota2,media;
	cout << "Digite sua primeira nota: (0 - 10) \n";
	cin >> nota1;
	cout << "Digite sua segunda nota: (0 - 10) \n";
	cin >> nota2;
	if (nota1 < 0 || nota1 > 10 || nota2 < 0 || nota2 > 10) {
		cout << "Nota invalida \n";
	}
	media = (nota1 + nota2) / 2;
	cout << "Sua media foi: " << media << endl; 
	return 0;
}
