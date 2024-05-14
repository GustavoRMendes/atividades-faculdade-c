//Algoritmo e Estrutura de dados ||
//------------------------------------------------
//Aula 2 - Algoritmo de busca
//
//- Busca Linear ou Busca Sequ�ncial:
//     O que � uma busca linear?
//         Ele � mais simples e � o �nico que n�o precisa que a lista esteja ordenada.
//         Vai correr uma lista sequencialmente.  
//         Interessante pra lista pequena.
//         Inicia sempre pelo primeiro item da lista e vai seguindo at� encontrar o elemento encontrado.
//         Vai at� o final da lista se n�o encontrar.
//         O tempo de execu��o vai depender do tamanho da lista.
//         Simples de Implementar e entender mas pode n�o ser a melhor escolha em todos os cen�rios.
//         N�o � eficiente em grande volumes de dados.
//         Em lista pequenas sim, simples de implementar pq vai entender tua necessidade
//         Inicia pelo primeiro at� chegar no elemento
//        Vantagens:
//              - Simplicidade(F�cil de entender)
//              - Funciona em qualquer lista
//              - N�o requer ordena��o (� O �NICO)
//              - N�o exige tanta mem�ria
//        Desvantagens:
//              - Baixa efici�ncia em listas grandes
//              - N�o � apropriada para grandes conjuntos de dados
//              - N�o consegue fazer busca repetida (Gabriel) tipo um querySelector = seleciona o primeiro que achar.
//        Exemplo: Telefone (Liga��es recentes)
//
//
//
//- Busca Bin�ria.
//   O que �?
//       Dividir em dois 
//       TEM QUE SER INICIADA NUMA LISTA ORDENADA
//       OBJETIVO: ENCONTRAR UM ELEMENTO NO CONJUNTO DE DADOS
//       TODA LISTA INDEPENDETE ELA VAI DIVIDIR EM DOIS
//       COMPARA O ELEMENTO QUE EST� NO MEIO JA COMPARA COM O ELEMENTO DO MEIO
//       SE FOREM IGUAL O ALGORITMO TERMINA COM SUCESSO
//       O PROCESSO � DIVIDIR E COMPARAR � REPETIDO AT� QUE O ELEMENTO SEJA ENCONTRADO OU N�O
//       Bem eficiente, porque � reduzida pela metade
//       Recomendada pra grande volume de dados
//
//       EXEMPLO: 7 ELEMENTOS
//        ELEMENTO BUSCADO = 4
//         0 1 2 3 |  4 5 6 
//        ELE BUSCA O ELEMENTO DO MEIO E J� COMPARA QUE NO CASO � O 3
//        4 > 3 ENT�O J� TIRA A METADE DEBAIXO, OU SEJA , N�O PRECISA VOLTAR PQ N�O VAI ACHAR O 4 PQ O 3 � MENOR.
//        DEPOIS ELE ENCONTRA O 4 E CONTINUA PQ PODE TER OUTRO 4 MAS J� QUE N�O TEM ELE S� VAI AT� O 5.
//
//
//       Vantagens:
//             GANHA TEMPO, COM COMPLEXIDADE DE TEMPO EM LISTA ORDENADAS
//             SEMPRE DE FORMA CRESCENTE (PADR�O) 
//             DESEMPENHO CONSISTENTE independe do tamanho da lista
//             ENCONTRA VALORES RAPIDAMENTE EM LISTAS GRANDES === QUERYSELECTORALL
//     Desvantagens:
//              REQUER LISTA ORDENADA
//              LIMITA A BUSCA DE VALORES ESPECIFICOS
//              MAIS COMPLEXA
//              REQUER MAIS MEM�RIA
//
//- Busca Tern�ria.
//    O que �?
//    Similar a bin�ria mas divide a lista em tr�s
//    Altern�ncia intermedi�ria entre a bin�ria e a liner
//    Complexidade bem maior,  efici�ncia 
//    Ela � espec�fica
//    Low, Highm mid s�o vari�veis usadas na busca
//    Low = limite infireiro � o primeiro elemnto � o indice 0
//    High = elemento superior ultimo elemento � o ultimo indice
//    Mid = meio posi��o estimada
//    Sempre incia com os indices do inicio e fim do attanjo,
//    Estima uma posi��o usando interpola��o. SERVE PRA APROXIMAR VALORES NUM ESPA�O DETERMINADO
//    ORDENADO CRESCENTE    
//Exemplo: 10 elementos
//    
//L    media1      media2                  R
// 0 1 2 3 4 5      6           7 8            9 
// 3 7 12 13 18 21 26 29 31 34
//
//media1 = L + [R - L / 3] = 0 + [9 - 0 / 3] = MEDIA1 = 3
//media2 = R - [L - R /3 ] = 9 - [0 -9 / 3] = MEDIA2 = 6
//DEPOS ELE VAI NO DO MEIO E COMPARA
//ELEMENTO ALVO = 7  == ACHOU 
//ELEMENTO ALVO = 28 == N�O ENCONTRADO
//
//
//- Busca por interpola��o.
//
// T�cnica pra aproximar valores conjutndo delimitados
// � feita em dados ordenados e uniformemente distribu�dos
// MAIS EFICIENTE QUE A BUSCA LINEAR, MAS N�O � T�O USADA COMO A BIN�RIA
// Como funciona?
//    Inicia com �ndice do inicio e do fim do arranjo
//    Estima uma posi��o usando interpola��o
//    Compara elementos nessa posicao
//    Se repete at� a chegar o final da lista e encontrar
//    Ordem Alfab�tica
//     Aplica��o Pr�tica:
//        Pesquisa em banco de dados;
//        Classifica��o de informa��es;
//        Verificar a exist�ncia de um item em um carrinho de compras online;
//        Encontrar um elementoe em uma lista telef�nica;
//        Verificar se um item existe em uma lista de contatos;
//        Encontrar um valor de uma matriz em pixels em processamento de imagem; 
//        Mecanismo de Busca na Web;
//        Aplicativos de Mapas e Navega��o;
//        Encontrar items em Mercados Online;
//Vantagens
//
//   Eficiencia em lista unifromemente distribu�das.
//   R�pida converg�ncia
//
//Desvantagens
//   LISTA ORDENADA
//
//Exemplo:
//
//L                                                            R
//0     1     2      3    4     5    6    7      8     9
//3     7     12   13   18   21 26 29     31    34
//
//LOW = 0
//HIGH = 9
//ELEMENTO ALVO = 12
//Pra achar temos que fazer o ponto m�dio
//Ponto m�dio = L (R - L ) * (ELEMENTO ALVO - VALOR DE L) / VALOR DE R  - VALOR DE L
//Ponto m�dio = 0 + (9 - 0) * (12 - 3) / 34 - 3 = 81 / 31 = 2,61
//Ponto m�dio = 2
