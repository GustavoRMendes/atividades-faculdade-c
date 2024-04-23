#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int random();
void dicas(int num, int resp, int tent);

int main()
{
    int continuar=1,
        resp,
        tent,
        num,
        n;

    do{
        system("cls || clear");
        resp = random();

        printf("Comecou! Tente adivinhar o numero!\n\n");
        tent = 0;

        do{
            tent++;
            printf("Tentativa %d: ", tent);
            scanf("%d", &num);
            dicas(num,resp,tent);
        }while( num != resp);

        printf("Digite 0 para sair, ou qualquer outro numero para continuar: ");
        scanf("%d", &continuar);
    }while(continuar);

}

int random()
{
    int n;
    printf("Insira o valor maximo que pode ser sorteado: ");
    scanf("%d", &n);
    printf("Sorteando numero entre 1 e %d...\n",n);
    srand((unsigned)time(NULL));
    return (1+rand()% n);
}

void dicas(int num, int resp, int tent)
{

    if(num>resp)
        printf("O numero sorteado e menor que %d\n\n", num);

    else if (num<resp)
        printf("O numero sorteado e maior que %d\n\n", num);

    else
        printf("Parabens! Voce acertou o numero em %d tentativas!\n\n", tent);
}
