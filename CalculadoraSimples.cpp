#include <iostream>
using namespace std;
int main () {
	double soma,subtracao,multiplicacao,divisao;
	int number1,number2, operacao;
	cout << "---Calculadora--- \n";
	cout << "Insira o numero relacionado a operacao que voce desejar realizar: \n";
	cout << "1 - Soma \n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n";
	cin >> operacao;
	cout << "Digite o primeiro numero: \n";
	cin >> number1;
	cout << "Digite o segundo numero: \n";
	cin >> number2;
	switch(operacao) {
		case 1:
			soma = number1 + number2;
			cout << "A soma dos numeros resulta em " << soma << endl;
		break;
		case 2:
			subtracao = number1 - number2;
			cout << "A subtracao dos numeros resulta em " << subtracao << endl;
		break;
		case 3:
			multiplicacao = number1 * number2;
			cout << "A multiplicacao dos numeros resulta em " << multiplicacao << endl;
		break;
		case 4:
			divisao = number1 / number2;
			if (number1 < number2) {
				cout << "Nao e possivel dividir.";
			} else {	
			cout << "A divisao dos numeros resulta em " << divisao << endl;
		}
		break;
		default: 
			cout << "Reinicie o programa e selecione o numero relacionado a operacao que voce deseja realizar.";
			break;
	}
	
	return 0;
}
