//Aula 3 - Algoritmos e Estrutura de Dados ||
//
//Algoritmos de Seleção
//
//São uma categoria de algoritmos de ordenação e busca que tem o objetivo de encontrar o elemento desejado em uma coleção de dados ou ordernar a coleção de acordo com algum critério.
//
//São utilizados em uma variedade de cenários, desde classificação de listas até otimização de processos.
//
//           Os mais comuns são:
//                Selection Sort : Selecionar e organizar
//                     O mais simples de todos, é um dos algoritmos de seleção e ordenação
//                     Pega o menor e começa a comparar movendo para a posição correta, que é a ordenação
//                     A vantagem é que é simples e um dos mais usados.
//                     A desvatagem é a ineficiência em grandes conjuntos de dados.
//                     Muito instável, Falta de Estabilidade
//                     Exemplo:
//                     3  0  1   8   7   2   5   4   9  6
//                     Compara as posições e vai ordenando.
//               -------------------------------------------------------------------------------
//
//                  Quick Select = Seleção Rápida
//                      Vai procurar o maior ou menor valor em uma lista não ordenada, 
//                      Ao contrário do QuickSort, ele não ordena todos os elementos, objetivo dele é fazer uma seleção rápida
//                      Vantagem é o tempo , nao precisa de ordenação economizando tempo
//                      Grande conjunto de dados econimza tempo e memória
//                      Desvantagem é o desempenho no pior caso e falta de estabilidade. Ele escolhe o pivô
//                      Não busca a ordem original, o que pode ser um problema.
//                      Aplicação em elementos de algoritmos de ordenação e resolucação de problemas de seleção online e estatitica de banco de dados
//                      Exemplo:
//                      3  6  1   8   4   9   2   7  5
//                      Pega o pivo e compara
//               ----------------------------------------------------------------------------------------
//
//              HeapSort = Junta tudo e depois ordenar selecionar
//              Ordenação em pilha
// 
//              Trabalha com arvore binária
//
//              Constroi a arvover, depos do máximo ao mínimo,
//              Arvore Binária Heap
//              Nó pai gera o Nó Filho e assim sucessivamente
//              Cada nó so pode gerar dois nós
//              Esquerda depois direita
//              UMA TROCA POR VEZ
//              O pai sempre vai ser maior que os filhos!
//              Caso contrario, a gente vai trocando até que a essa regra seja atendida
//              Todos descendentes são menores que os ascendentes
//              A raiz vai ser maior do que todos os abaixos.
//              Vantagem: Estabilidade, Complexidade de Tempo garantida, opera in-place(no lugar) faz a troca no lugar
//              Desvantagem: Não é rápido, precisa uma estrutura de dados adicional.
//              Exemplo:
//                   Construindo a árvore heap
//                    4 9 2 1 5 7 8
//                   
//              
