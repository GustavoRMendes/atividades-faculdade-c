#include <iostream>
#include <map> // Usando map como dicionário

using namespace std;

int main() {
  // Criando um dicionário (map)
  map<string, string> dicionario;
  dicionario["carro"] = "Veículo automotor terrestre normalmente com quatro rodas, utilizado para o transporte de pessoas.";
  dicionario["casa"] = "Habitação humana, geralmente com paredes e teto.";
  dicionario["computador"] = "Máquina eletrônica programável capaz de realizar operações aritméticas e lógicas.";

  // Palavra a ser buscada
  string palavraBuscada = "computador";

  // Buscando a definição no dicionário
  if (dicionario.count(palavraBuscada) > 0) {
    cout << "Definição de " << palavraBuscada << ": " << dicionario[palavraBuscada] << endl;
  } else {
    cout << "Palavra não encontrada no dicionário." << endl;
  }

  return 0;
}
