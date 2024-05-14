//Algoritmo e Estrutura de dados ||
//------------------------------------------------
//Aula 2 - Algoritmo de busca
//
//- Busca Linear ou Busca Sequêncial:
//     O que é uma busca linear?
//         Ele é mais simples e é o único que não precisa que a lista esteja ordenada.
//         Vai correr uma lista sequencialmente.  
//         Interessante pra lista pequena.
//         Inicia sempre pelo primeiro item da lista e vai seguindo até encontrar o elemento encontrado.
//         Vai até o final da lista se não encontrar.
//         O tempo de execução vai depender do tamanho da lista.
//         Simples de Implementar e entender mas pode não ser a melhor escolha em todos os cenários.
//         Não é eficiente em grande volumes de dados.
//         Em lista pequenas sim, simples de implementar pq vai entender tua necessidade
//         Inicia pelo primeiro até chegar no elemento
//        Vantagens:
//              - Simplicidade(Fácil de entender)
//              - Funciona em qualquer lista
//              - Não requer ordenação (É O ÚNICO)
//              - Não exige tanta memória
//        Desvantagens:
//              - Baixa eficiência em listas grandes
//              - Não é apropriada para grandes conjuntos de dados
//              - Não consegue fazer busca repetida (Gabriel) tipo um querySelector = seleciona o primeiro que achar.
//        Exemplo: Telefone (Ligações recentes)
//
//
//
//- Busca Binária.
//   O que é?
//       Dividir em dois 
//       TEM QUE SER INICIADA NUMA LISTA ORDENADA
//       OBJETIVO: ENCONTRAR UM ELEMENTO NO CONJUNTO DE DADOS
//       TODA LISTA INDEPENDETE ELA VAI DIVIDIR EM DOIS
//       COMPARA O ELEMENTO QUE ESTÁ NO MEIO JA COMPARA COM O ELEMENTO DO MEIO
//       SE FOREM IGUAL O ALGORITMO TERMINA COM SUCESSO
//       O PROCESSO É DIVIDIR E COMPARAR É REPETIDO ATÉ QUE O ELEMENTO SEJA ENCONTRADO OU NÃO
//       Bem eficiente, porque é reduzida pela metade
//       Recomendada pra grande volume de dados
//
//       EXEMPLO: 7 ELEMENTOS
//        ELEMENTO BUSCADO = 4
//         0 1 2 3 |  4 5 6 
//        ELE BUSCA O ELEMENTO DO MEIO E JÁ COMPARA QUE NO CASO É O 3
//        4 > 3 ENTÃO JÁ TIRA A METADE DEBAIXO, OU SEJA , NÃO PRECISA VOLTAR PQ NÃO VAI ACHAR O 4 PQ O 3 É MENOR.
//        DEPOIS ELE ENCONTRA O 4 E CONTINUA PQ PODE TER OUTRO 4 MAS JÁ QUE NÃO TEM ELE SÓ VAI ATÉ O 5.
//
//
//       Vantagens:
//             GANHA TEMPO, COM COMPLEXIDADE DE TEMPO EM LISTA ORDENADAS
//             SEMPRE DE FORMA CRESCENTE (PADRÃO) 
//             DESEMPENHO CONSISTENTE independe do tamanho da lista
//             ENCONTRA VALORES RAPIDAMENTE EM LISTAS GRANDES === QUERYSELECTORALL
//     Desvantagens:
//              REQUER LISTA ORDENADA
//              LIMITA A BUSCA DE VALORES ESPECIFICOS
//              MAIS COMPLEXA
//              REQUER MAIS MEMÓRIA
//
//- Busca Ternária.
//    O que é?
//    Similar a binária mas divide a lista em trÊs
//    AlternÂncia intermediária entre a binária e a liner
//    Complexidade bem maior,  eficiência 
//    Ela é específica
//    Low, Highm mid são variáveis usadas na busca
//    Low = limite infireiro é o primeiro elemnto é o indice 0
//    High = elemento superior ultimo elemento é o ultimo indice
//    Mid = meio posição estimada
//    Sempre incia com os indices do inicio e fim do attanjo,
//    Estima uma posição usando interpolação. SERVE PRA APROXIMAR VALORES NUM ESPAÇO DETERMINADO
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
//ELEMENTO ALVO = 28 == NÃO ENCONTRADO
//
//
//- Busca por interpolação.
//
// Técnica pra aproximar valores conjutndo delimitados
// É feita em dados ordenados e uniformemente distribuídos
// MAIS EFICIENTE QUE A BUSCA LINEAR, MAS NÃO É TÃO USADA COMO A BINÁRIA
// Como funciona?
//    Inicia com índice do inicio e do fim do arranjo
//    Estima uma posição usando interpolação
//    Compara elementos nessa posicao
//    Se repete até a chegar o final da lista e encontrar
//    Ordem Alfabética
//     Aplicação Prática:
//        Pesquisa em banco de dados;
//        Classificação de informações;
//        Verificar a existência de um item em um carrinho de compras online;
//        Encontrar um elementoe em uma lista telefônica;
//        Verificar se um item existe em uma lista de contatos;
//        Encontrar um valor de uma matriz em pixels em processamento de imagem; 
//        Mecanismo de Busca na Web;
//        Aplicativos de Mapas e Navegação;
//        Encontrar items em Mercados Online;
//Vantagens
//
//   Eficiencia em lista unifromemente distribuídas.
//   Rápida convergência
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
//Pra achar temos que fazer o ponto médio
//Ponto médio = L (R - L ) * (ELEMENTO ALVO - VALOR DE L) / VALOR DE R  - VALOR DE L
//Ponto médio = 0 + (9 - 0) * (12 - 3) / 34 - 3 = 81 / 31 = 2,61
//Ponto médio = 2
