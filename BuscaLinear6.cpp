#include <iostream>
#include <map> // Usando map como dicion�rio

using namespace std;

int main() {
  // Criando um dicion�rio (map)
  map<string, string> dicionario;
  dicionario["carro"] = "Ve�culo automotor terrestre normalmente com quatro rodas, utilizado para o transporte de pessoas.";
  dicionario["casa"] = "Habita��o humana, geralmente com paredes e teto.";
  dicionario["computador"] = "M�quina eletr�nica program�vel capaz de realizar opera��es aritm�ticas e l�gicas.";

  // Palavra a ser buscada
  string palavraBuscada = "computador";

  // Buscando a defini��o no dicion�rio
  if (dicionario.count(palavraBuscada) > 0) {
    cout << "Defini��o de " << palavraBuscada << ": " << dicionario[palavraBuscada] << endl;
  } else {
    cout << "Palavra n�o encontrada no dicion�rio." << endl;
  }

  return 0;
}
