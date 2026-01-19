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


    printf("A Densidade Populacional da carta dois e: %.2f\n", dp2);
    printf("o PIB per Capita da carta dois e: %.2f\n", pc2);


    float superPoder2;
    superPoder2 = (float)populaçao2 + area2 + pib2 + turistico2 + pc2 + dp2;
    printf("o superpoder da carta um e: %.2f\n", superPoder2);

    printf("vamos comparar as cartas e ver qual vence!\n");
    


    printf("populaçao carta um: %d\n, populaçao carta dois: %d\n", populaçao,populaçao2);
 if (populaçao >= populaçao2) 
 {
    printf("carta um ganhou\n");
 }else{ 

 printf("carta dois ganhou\n");   
 }



    printf("area carta um: %2.f\n, area carta dois: %2.f\n", area,area2);
 if (area >= area2) 
 {
    printf("carta um ganhou\n");
 }else{ 

 printf("carta dois ganhou\n");   
 }



    printf("PIB carta um: %2.f\n, PIB carta dois: %2.f\n", pib,pib2);
 if (pib >= pib2) 
 {
    printf("carta um ganhou\n");
 }else{ 

 printf("carta dois ganhou\n");   
 }



    printf("pontos turisticos carta um: %d\n, pontos turisticos carta dois: %d\n", turistico,turistico2);
 if (turistico >= turistico2) 
 {
    printf("carta um ganhou\n");
 }else{ 

 printf("carta dois ganhou\n");   
 }



    printf("Densidade Populacional carta um: %2.f\n, Densidade Populacional carta dois: %2.f\n", dp,dp2);
 if (dp <= dp2) 
 {
    printf("carta um ganhou\n");
 }else{ 

 printf("carta dois ganhou\n");   
 }


    printf("PIB per Capita carta um: %2.f\n, PIB per Capita carta dois: %2.f\n", pc,pc2);
 if (pc >= pc2) 
 {
    printf("carta um ganhou\n");
 }else{ 

 printf("carta dois ganhou\n");   
 }



printf("super Poder carta um: %2.f\n, super Poder carta dois: %2.f\n", superPoder,superPoder2);
 if (superPoder >= superPoder2) 
 {
    printf("carta um ganhou\n");
 }else{ 

 printf("carta dois ganhou\n");   
 }










 return 0; 

}