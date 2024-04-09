#include <iostream>
#include <string>
using namespace std;
int main () {
	string nome,sobrenome;
	cout << "Digite seu nome: \n";
	getline(cin,nome);
	cout << "Digite seu sobrenome: \n";
	getline(cin,sobrenome);
	cout << "Seu nome completo seria " << nome << " " << sobrenome << endl;
	return 0;
}
