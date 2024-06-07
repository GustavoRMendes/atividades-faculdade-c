#include <iostream>
#include <vector>

// Fun��o de busca linear gen�rica usando templates
template<typename T>
int buscaLinear(const std::vector<T>& array, T chave) {
    for (size_t i = 0; i < array.size(); ++i) {
        if (array[i] == chave) {
            return i; // Retorna o �ndice onde a chave foi encontrada
        }
    }
    return -1; // Retorna -1 se a chave n�o for encontrada
}

int main() {
    std::vector<int> array = {12, 34, 56, 78, 90, 23, 45}; // Vector de exemplo
    int chave;

    std::cout << "Digite a chave que deseja buscar: ";
    std::cin >> chave;

    // Chama a fun��o de busca linear
    int resultado = buscaLinear(array, chave);

    if (resultado != -1) {
        std::cout << "Elemento encontrado na posi��o: " << resultado << std::endl;
    } else {
        std::cout << "Elemento n�o encontrado." << std::endl;
    }

    return 0;
}

