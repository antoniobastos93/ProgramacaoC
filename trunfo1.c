#include <stdio.h>

int main(){

//Declarando as variáveis da Carta 1:
char c_carta1[3];
char estado1[2];
char cidade1[20];
int populacao1;
float area1;
float pib1;
int p_turismo1;    

//Declarando as variáveis da Carta 2:
char c_carta2[3];
char estado2[2];
char cidade2[20];
int populacao2;
float area2;
float pib2;
int p_turismo2;  

//Solicitando os dados da Carta 1:
printf("Digite o Código da Carta 1: \n");
scanf("%s", c_carta1);

printf("Digite o Estado da Carta 1: \n");
scanf("%s", estado1);

printf("Digite a Cidade da Carta 1: \n");
scanf("%s", cidade1);

printf("Digite a População da Carta 1: \n");
scanf("%d", &populacao1);

printf("Digite a Área da Carta 1: \n");
scanf(" %f", &area1);

printf("Digite a PIB da Carta 1: \n");
scanf("%f", &pib1);

printf("Digite a quantidade de Pontos Turísticos da Carta 1: \n");
scanf("%d", &p_turismo1);

//Solicitando os dados da Carta 2:
printf("Digite o Código da Carta 2: \n");
scanf("%s", c_carta2);

printf("Digite o Estado da Carta 2: \n");
scanf("%s", estado2);

printf("Digite a Cidade da Carta 2: \n");
scanf("%s", cidade2);

printf("Digite a População da Carta 2: \n");
scanf("%d", &populacao2);

printf("Digite a Área da Carta 2: \n");
scanf(" %f", &area2);

printf("Digite a PIB da Carta 2: \n");
scanf("%f", &pib2);

printf("Digite a quantidade de Pontos Turísticos da Carta 2: \n");
scanf("%d", &p_turismo2);

//Exibindo os dados da Carta 1:
printf("Os dados da Carta 1 são: \n Código da Carta: %s\n Estado: %s\n Cidade: %s\n População: %d\n Área: %f\n PIB: %f\n Pontos Turísticos: %d\n",
      c_carta1, estado1, cidade1, populacao1, area1, pib1, p_turismo1);

      //Exibindo os dados da Carta 2:
printf("Os dados da Carta 2 são: \n Código da Carta: %s\n Estado: %s\n Cidade: %s\n População: %d\n Área: %f\n PIB: %f\n Pontos Turísticos: %d\n",
      c_carta2, estado2, cidade2, populacao2, area2, pib2, p_turismo2);

}