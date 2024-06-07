#include <iostream>
#include <vector>
#include <limits> // Para usar std::numeric_limits

// Fun��o para buscar linearmente em um vetor gen�rico
template<typename T>
int buscaLinear(const std::vector<T>& vetor, T chave) {
    for (size_t i = 0; i < vetor.size(); ++i) {
        if (vetor[i] == chave) {
            return i; // Retorna o �ndice onde a chave foi encontrada
        }
    }
    return -1; // Retorna -1 se a chave n�o for encontrada
}

// Fun��o para imprimir um vetor gen�rico
template<typename T>
void imprimirVetor(const std::vector<T>& vetor) {
    std::cout << "Vetor: ";
    for (const auto& elemento : vetor) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;
}

int main() {
    char continuar = 's';

    do {
        std::vector<int> vetor;
        int tamanho;

        std::cout << "Digite o tamanho do vetor: ";
        std::cin >> tamanho;

        // Validar a entrada do usu�rio para garantir que seja um valor num�rico v�lido
        while (std::cin.fail() || tamanho <= 0) {
            std::cout << "Entrada inv�lida. Digite um valor inteiro positivo para o tamanho do vetor: ";
            std::cin.clear(); // Limpar o estado de erro
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Descartar entrada inv�lida
            std::cin >> tamanho;
        }

        // Preencher o vetor com valores fornecidos pelo usu�rio
        std::cout << "Digite os elementos do vetor:" << std::endl;
        for (int i = 0; i < tamanho; ++i) {
            int elemento;
            std::cin >> elemento;
            vetor.push_back(elemento);
        }

        // Imprimir o vetor
        imprimirVetor(vetor);

        int chave;
        std::cout << "Digite a chave que deseja buscar: ";
        std::cin >> chave;

        // Chamar a fun��o de busca linear
        int resultado = buscaLinear(vetor, chave);

        if (resultado != -1) {
            std::cout << "Elemento encontrado na posi��o: " << resultado << std::endl;
        } else {
            std::cout << "Elemento n�o encontrado." << std::endl;
        }

        std::cout << "Deseja fazer outra busca? (s/n): ";
        std::cin >> continuar;
    } while (continuar == 's' || continuar == 'S');

    return 0;
}

