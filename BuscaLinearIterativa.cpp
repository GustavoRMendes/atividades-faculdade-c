#include <iostream>
using namespace std;

// Função buscaLinear(array,tamanho do array, chave)
int buscaLinear(int array[], int tamanho, int chave) {
	for (int i = 0; i < tamanho; ++i) {
        if (array[i] == chave) {
            return i; // Retorna o índice onde a chave foi encontrada
        }
    }
    return -1; // Retorna -1 se a chave não for encontrada
}

int main() {
    int array[] = {12, 34, 56, 78, 90, 23, 45}; // Array 
    int tamanho = sizeof(array) / sizeof(array[0]); // Tamanho do array 
    int chave = 23; // Chave a procura

    // Chamar a função de busca linear
    int resultado = buscaLinear(array, tamanho, chave);

    if (resultado != -1) {
        cout << "O elemento " << chave << " encontrado no array na posicao: " << resultado <<  endl;
	} else {
        cout << "O elemento nao foi encontrado no array." << endl;
    }
    return 0;
}
