//Aula 3 - Algoritmos e Estrutura de Dados ||
//
//Algoritmos de Sele��o
//
//S�o uma categoria de algoritmos de ordena��o e busca que tem o objetivo de encontrar o elemento desejado em uma cole��o de dados ou ordernar a cole��o de acordo com algum crit�rio.
//
//S�o utilizados em uma variedade de cen�rios, desde classifica��o de listas at� otimiza��o de processos.
//
//           Os mais comuns s�o:
//                Selection Sort : Selecionar e organizar
//                     O mais simples de todos, � um dos algoritmos de sele��o e ordena��o
//                     Pega o menor e come�a a comparar movendo para a posi��o correta, que � a ordena��o
//                     A vantagem � que � simples e um dos mais usados.
//                     A desvatagem � a inefici�ncia em grandes conjuntos de dados.
//                     Muito inst�vel, Falta de Estabilidade
//                     Exemplo:
//                     3  0  1   8   7   2   5   4   9  6
//                     Compara as posi��es e vai ordenando.
//               -------------------------------------------------------------------------------
//
//                  Quick Select = Sele��o R�pida
//                      Vai procurar o maior ou menor valor em uma lista n�o ordenada, 
//                      Ao contr�rio do QuickSort, ele n�o ordena todos os elementos, objetivo dele � fazer uma sele��o r�pida
//                      Vantagem � o tempo , nao precisa de ordena��o economizando tempo
//                      Grande conjunto de dados econimza tempo e mem�ria
//                      Desvantagem � o desempenho no pior caso e falta de estabilidade. Ele escolhe o piv�
//                      N�o busca a ordem original, o que pode ser um problema.
//                      Aplica��o em elementos de algoritmos de ordena��o e resoluca��o de problemas de sele��o online e estatitica de banco de dados
//                      Exemplo:
//                      3  6  1   8   4   9   2   7  5
//                      Pega o pivo e compara
//               ----------------------------------------------------------------------------------------
//
//              HeapSort = Junta tudo e depois ordenar selecionar
//              Ordena��o em pilha
// 
//              Trabalha com arvore bin�ria
//
//              Constroi a arvover, depos do m�ximo ao m�nimo,
//              Arvore Bin�ria Heap
//              N� pai gera o N� Filho e assim sucessivamente
//              Cada n� so pode gerar dois n�s
//              Esquerda depois direita
//              UMA TROCA POR VEZ
//              O pai sempre vai ser maior que os filhos!
//              Caso contrario, a gente vai trocando at� que a essa regra seja atendida
//              Todos descendentes s�o menores que os ascendentes
//              A raiz vai ser maior do que todos os abaixos.
//              Vantagem: Estabilidade, Complexidade de Tempo garantida, opera in-place(no lugar) faz a troca no lugar
//              Desvantagem: N�o � r�pido, precisa uma estrutura de dados adicional.
//              Exemplo:
//                   Construindo a �rvore heap
//                    4 9 2 1 5 7 8
//                   
//              
