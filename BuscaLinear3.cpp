#include <iostream>
#include <vector>

// Função de busca linear genérica usando templates
template<typename T>
int buscaLinear(const std::vector<T>& array, T chave) {
    for (size_t i = 0; i < array.size(); ++i) {
        if (array[i] == chave) {
            return i; // Retorna o índice onde a chave foi encontrada
        }
    }
    return -1; // Retorna -1 se a chave não for encontrada
}

int main() {
    std::vector<int> array = {12, 34, 56, 78, 90, 23, 45}; // Vector de exemplo
    int chave;

    std::cout << "Digite a chave que deseja buscar: ";
    std::cin >> chave;

    // Chama a função de busca linear
    int resultado = buscaLinear(array, chave);

    if (resultado != -1) {
        std::cout << "Elemento encontrado na posição: " << resultado << std::endl;
    } else {
        std::cout << "Elemento não encontrado." << std::endl;
    }

    return 0;
}

