#include <stdio.h>

int main(){

    int opçao,opçao2, idade;
    char nome[100];
    int torre = 1;
    int bispo = 1;
    int bispo2 = 1;


    printf("Vamos jogar xadrez!\n");

  do{
    printf("escolha uma opção!\n");
    printf("1. escolher usuario\n");
    printf("2. iniciar jogo\n");
    printf("3. sair do jogo\n");
    scanf("%d", &opçao);
     printf("voce escolheu a opção: %d\n", opçao);

    switch (opçao)
    {
    
        case 1:
        printf("digite o seu nome de jogador: ");
        scanf( "%s", &nome);
        printf("nome escolhido foi: %s\n", &nome);

        printf("digite a sua idade: ");
        scanf( "%d", &idade);
        
    
        break;

        case 2:
       
     do
     {
        printf("Escolha uma peça para mover\n");
        printf("1. mover a torre\n");
        printf("2. mover o bispo\n");
        printf("3. mover a rainha\n");
        printf("4. mover o cavalo\n");
        printf("5. parar de mover as peças\n");
        scanf("%d", &opçao2);
        printf("voce escolheu a opção: %d\n", opçao2);
        

        switch (opçao2)
        {
        case 1:

        while (torre <= 5 )
        {
   
        printf("o/a player %s moveu a torre %d casas a direita\n", nome, torre);
        torre++;
        }

    

        break;

        case 2:
        do
        {
        printf("o/a player %s moveu o bispo %d casas a cima\n", nome, bispo);
        bispo++;
        } while (bispo <= 5);
    
    
        do
        {
        printf("o/a player %s moveu o bispo %d casas a direita\n", nome, bispo2);
        bispo2 += 1;
        } while (bispo2 <= 5);
    
        break;

        case 3:

        for (int r = 1; r <= 8; r++)
        {
        printf("o/a player %s moveu a rainha %d casas a esquerda\n", nome, r);
        }

        break;

        case 4:
        int cavalo,c;
        int cavalo2,c2;

        for (cavalo = 0 ; cavalo <= 2; cavalo++)
        {
        for ( c = 1; c <= cavalo; c++)
        {
           printf("o/a player %s moveu o cavalo %d casas a baixo", nome, c * cavalo);
           c++;
        }
        printf("\n");
        }

        cavalo2 = 1;
        while (cavalo2 <= 1)
        {
            c2 = 1;
            while (c2 <= 1)
            {
               printf("o/a player %s moveu o cavalo %d casa a esquerda", nome, c2);
               c2++;
            }
            printf("\n");
            cavalo2++;

        }
        break;

        case 5:
        printf("guardando as peças...\n");
        break;

        default:
        printf("opção invalida!!\n");
        
        }
        } while (opçao2 != 5);
    
       case 3:
         printf("saindo do jogo..\n");
         printf("ate logo!! :)\n");
        break;
    
        default:
        printf("opção invalida!!\n");
        
    }
    
 } while (opçao != 3);









 return 0;


}