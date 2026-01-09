#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  char nome[50] = "madara";
int idade = 77;

printf("Digite a sua idade: ");
scanf("%d", &idade);
printf("A sua idade é: %d\n", idade);

printf("Digite o seu nome: ");
scanf("%s", &nome);
printf("O seu nome é: %s\n", nome);

printf("Agora vamos criar suas cartas!\n");

char estado1 = 'R';
char codigo[50] = "RJ";
char cidade [50] = "RIO DE JANEIRO";
int populaçao = 500000;
int turistico = 5000;
float pib = 30;
float area = 1500.50;

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

printf("Qual o PIB da sua cidade?(exemplo: 777.77bilhoes): ");
scanf("%f", &pib);
printf("o PIB da sua cidade é: %.2f\n", pib);

printf("Qual a area da sua cidade?(exemplo: 1500.50): ");
scanf("%f", &area);
printf("A area da sua cidade é: %.2f\n", area);

printf("Agora vomos escolher a segunda carta!\n");

char estado2 = 'R';
char codigo2[50] = "RJ";
char cidade2 [50] = "RIO DE JANEIRO";
int populaçao2 = 500000;
int turistico2 = 5000;
float pib2 = 30;
float area2 = 1500.50;

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

printf("Qual o PIB da sua cidade?(exemplo: 777.77bilhoes): ");
scanf("%f", &pib2);
printf("o PIB da sua cidade é: %.2f\n", pib2);

printf("Qual a area da sua cidade?(exemplo: 1500.50km): ");
scanf("%f", &area2);
printf("A area da sua cidade é: %.2f\n", area2);

printf("Agora vamos jogar!!\n");

return 0;
} 
