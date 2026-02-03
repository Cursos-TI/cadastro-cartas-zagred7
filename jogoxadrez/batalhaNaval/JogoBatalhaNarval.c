#include <stdio.h>

int main (){

    int subtabuleiro [5][5] = {
        {0, 3, 3, 3, 0},
        {3, 0, 0, 0, 0},
        {3, 3, 0, 3, 0},
        {0, 3, 3, 3, 0},
        {0, 0, 3, 3, 0},

        };

    int  tabuleiro [10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

        

    };
     printf("     TABULEIRO BATALHA NAVAL\n");


    for (int i = 0; i <= 0; i++)
    {
        printf("   A  B  C  D  E  F  G  H  I  J\n");
        printf(" 1  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d \n",tabuleiro[0][0], subtabuleiro[0][1], subtabuleiro[0][2], subtabuleiro[0][3], tabuleiro[0][4], tabuleiro[0][5], tabuleiro[0][6], tabuleiro[0][7], tabuleiro[0][8], tabuleiro[0][9]);
        printf(" 2  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d \n",tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2], tabuleiro[0][3], tabuleiro[0][4], tabuleiro[0][5], tabuleiro[0][6], tabuleiro[0][7], tabuleiro[0][8], tabuleiro[0][9]);
        printf(" 3  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d \n",tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2], tabuleiro[0][3], tabuleiro[0][4], tabuleiro[0][5], tabuleiro[0][6], tabuleiro[0][7], tabuleiro[0][8], tabuleiro[0][9]);
        printf(" 4  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d \n",tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2], tabuleiro[0][3], subtabuleiro[0][10], tabuleiro[0][5], tabuleiro[0][6], tabuleiro[0][7], tabuleiro[0][8], tabuleiro[0][9]);
        printf(" 5  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d \n",tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2], tabuleiro[0][3], tabuleiro[0][4], subtabuleiro[0][16], tabuleiro[0][6], tabuleiro[0][7], tabuleiro[0][8], tabuleiro[0][9]);
        printf(" 6  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d \n",tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2], tabuleiro[0][3], tabuleiro[0][4], tabuleiro[0][5], subtabuleiro[0][22], tabuleiro[0][7], subtabuleiro[0][13], tabuleiro[0][9]);
        printf(" 7  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d \n",subtabuleiro[0][5], tabuleiro[0][1], tabuleiro[0][2], tabuleiro[0][3], tabuleiro[0][4], tabuleiro[0][5], tabuleiro[0][6], tabuleiro[0][7], subtabuleiro[0][18], tabuleiro[0][9]);
        printf(" 8  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d \n",tabuleiro[0][0], subtabuleiro[0][11], tabuleiro[0][2], tabuleiro[0][3], tabuleiro[0][4], tabuleiro[0][5], tabuleiro[0][6], tabuleiro[0][7], subtabuleiro[0][23], tabuleiro[0][9]);
        printf(" 9  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d \n",tabuleiro[0][0], tabuleiro[0][1], subtabuleiro[0][17], tabuleiro[0][3], tabuleiro[0][4], tabuleiro[0][5], tabuleiro[0][6], tabuleiro[0][7], tabuleiro[0][8], tabuleiro[0][9]);
        printf("10  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d \n",tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2], tabuleiro[0][3], tabuleiro[0][4], tabuleiro[0][5], tabuleiro[0][6], tabuleiro[0][7], tabuleiro[0][8], tabuleiro[0][9]);
    }
    

    return 0;
}