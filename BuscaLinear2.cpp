#include <iostream>

// Função para busca linear
int buscaLinear(int array[], int tamanho, int chave) {
    for (int i = 0; i < tamanho; ++i) {
        if (array[i] == chave) {
            return i; // Retorna o índice onde a chave foi encontrada
        }
    }
    return -1; // Retorna -1 se a chave não for encontrada
}

int main() {
    int array[] = {12, 34, 56, 78, 90, 23, 45}; // Array de exemplo
    int tamanho = sizeof(array) / sizeof(array[0]); // Tamanho do array

    int chave = 56; // Chave que estamos procurando

    // Chama a função de busca linear
    int resultado = buscaLinear(array, tamanho, chave);

    if (resultado != -1) {
        std::cout << "Elemento encontrado na posição: " << resultado << std::endl;
    } else {
        std::cout << "Elemento não encontrado." << std::endl;
    }

    return 0;
}

