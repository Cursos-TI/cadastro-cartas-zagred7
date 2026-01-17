#include<stdio.h>

int main(){


    char nome[50];
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("A sua idade é: %d\n", idade);


    printf("Digite o seu nome: ");
    scanf("%s", &nome);
    printf("O seu nome é: %s\n", nome);

    printf("Agora vamos criar suas cartas!\n");

    char estado1; 
    char codigo[50];
    char cidade [50];
    int populaçao;
    int turistico;
    float pib;
    float area;

    printf("escolha uma letra para representar o estado: ");
    scanf(" %c", &estado1);
    printf("a letra do estado escolhido foi: %c\n", estado1);
    printf("Qual o nome da cidade da carta um?(exemplo: Rio-de-Janeiro): ");
    scanf("%s", &cidade);
    printf("A cidade da carta um é: %s\n", cidade);
    printf("crie um codigo para a sua cidade(exemplo: RJ10): ");
    scanf("%s", &codigo);
    printf("O codigo da carta um é: %s\n", codigo);
    printf("Qual o tamanho da população da sua cidade?(exemplo: 2000 habitantes): ");
    scanf("%d", &populaçao);
    printf("O tamanho da população da cidade é: %d\n", populaçao);
    printf("escolha quantos pontos turisticos a sua cidade vai ter(exemplo: 40 pontos turisticos): ");
    scanf("%d", &turistico);
    printf("o numero de pontos turisticos da sua cidade é: %d\n", turistico);
    printf("Qual o PIB da sua cidade?(exemplo: R$ 90.000): ");
    scanf("%f", &pib);
    printf("o PIB da sua cidade é R$: %.2f\n", pib);
    printf("Qual a area da sua cidade?(exemplo: 1500.50): ");
    scanf("%f", &area);
    printf("A area da sua cidade é: %.2f\n", area);

    printf("Agora vamos calcular!!\n");

    float dp = (float) populaçao / area;
    float pc = (float) pib / populaçao;

    printf("A Densidade Populacional da carta um e: %.2f\n", dp);
    printf("o PIB per Capita da carta um e: %.2f\n", pc);

    float superPoder;
    superPoder = (float)populaçao + area + pib + turistico + pc + dp;
    printf("o superpoder da carta um e: %.2f\n", superPoder);

    printf("Agora vomos escolher a segunda carta!\n");

    char estado2;
    char codigo2[50];
    char cidade2 [50];
    int populaçao2;
    int turistico2;
    float pib2;
    float area2;

    printf("escolha uma letra para representar o estado: ");
    scanf(" %c", &estado2);
    printf("a letra do estado escolhido foi: %c\n", estado2);
    printf("Qual o nome da cidade da carta dois?(exemplo: Rio-de-Janeiro): ");
    scanf("%s", &cidade2);
    printf("A cidade da carta um é: %s\n", cidade2);
    printf("crie um codigo para a sua cidade(exemplo: RJ10): ");
    scanf("%s", &codigo2);
    printf("O codigo da carta um é: %s\n", codigo2);
    printf("Qual o tamanho da população da sua cidade?(exemplo: 2000 habitantes): ");
    scanf("%d", &populaçao2);
    printf("O tamanho da população da cidade é: %d\n", populaçao2);
    printf("escolha quantos pontos turisticos a sua cidade vai ter(exemplo: 40 pontos turisticos): ");
    scanf("%d", &turistico2);
    printf("o numero de pontos turisticos da sua cidade é: %d\n", turistico2);
    printf("Qual o PIB da sua cidade?(exemplo: R$ 90.000): ");
    scanf("%f", &pib2);
    printf("o PIB da sua cidade é R$: %.2f\n", pib2);
    printf("Qual a area da sua cidade?(exemplo: 1500.50km): ");
    scanf("%f", &area2);
    printf("A area da sua cidade é: %.2f\n", area2);

    printf("Agora vamos calcular!!\n");


    float dp2 = (float) populaçao2 / area2;
    float pc2 = (float) pib2 / populaçao2;


    printf("A Densidade Populacional da carta um e: %.2f\n", dp2);
    printf("o PIB per Capita da carta um e: %.2f\n", pc2);


    float superPoder2;
    superPoder2 = (float)populaçao2 + area2 + pib2 + turistico2 + pc2 + dp2;
    printf("o superpoder da carta um e: %.2f\n", superPoder2);

    printf("vamos comparar as cartas e ver qual vence!\n");
    printf("1 para verdadeiro = Carta 1 vence\n e 0 para falso = Carta 2 vence\n)\n");

    printf("qual populaçao vence: %d\n",(int) populaçao > populaçao2);
    printf("qual area vence: %d\n",(int) area > area2);
    printf("qual PIB vence: %d\n",(int) pib > pib2);
    printf("qual pontos turisticos vence: %d\n",(int) turistico > turistico2);
    printf("qual Densidade Populacional vence: %d\n",(int) dp < dp2);
    printf("qual PIB per Capita vence: %d\n",(int) pc > pc2);
    printf("qual Super Poder vence: %d\n",(int) superPoder > superPoder2);

 return 0; 

}