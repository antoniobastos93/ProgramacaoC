#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

//Declarando as variáveis da Carta 1:
char c_carta1[3];
char estado1[2];
char cidade1[20];
int populacao1, escolha;
float area1, densi1;
float pib1, pibperca1;
int p_turismo1;    

//Declarando as variáveis da Carta 2:
char c_carta2[3];
char estado2[2];
char cidade2[20];
int populacao2;
float area2, densi2;
float pib2, pibperca2;
int p_turismo2;  

//Declarando variáveis para comparação:
//int cPop, cArea, cPib, cPon, cDen, cPib, cSup
//int resultado;
float superpoder1, superpoder2;

//Solicitando os dados da Carta 1:
printf("Digite o Código da Carta 1: \n");
scanf("%s", &c_carta1);

printf("Digite o Estado da Carta 1: \n");
scanf("%s", &estado1);

printf("Digite a Cidade da Carta 1: \n");
scanf("%s", &cidade1);

printf("Digite a População da Carta 1: \n");
scanf("%d", &populacao1);

printf("Digite a Área da Carta 1: \n");
scanf(" %f", &area1);

printf("Digite a PIB da Carta 1: \n");
scanf("%f", &pib1);

printf("Digite a quantidade de Pontos Turísticos da Carta 1: \n");
scanf("%d", &p_turismo1);

//Cálculo da densidade populacional:
densi1 = (float) populacao1 / area1;

//Cálculo do PIB per capita:
pibperca1 = pib1 / (float) populacao1;

//Cálculo do super poder:
superpoder1 = (float)populacao1 + area1 + densi1 + pib1 + pibperca1 + (float)p_turismo1;

//Solicitando os dados da Carta 2:
printf("Digite o Código da Carta 2: \n");
scanf("%s", &c_carta2);

printf("Digite o Estado da Carta 2: \n");
scanf("%s", &estado2);

printf("Digite a Cidade da Carta 2: \n");
scanf("%s", &cidade2);

printf("Digite a População da Carta 2: \n");
scanf("%d", &populacao2);

printf("Digite a Área da Carta 2: \n");
scanf(" %f", &area2);

printf("Digite a PIB da Carta 2: \n");
scanf("%f", &pib2);

printf("Digite a quantidade de Pontos Turísticos da Carta 2: \n");
scanf("%d", &p_turismo2);


//Cálculo da densidade populacional:
densi2 = (float) populacao2 / area2;

//Cálculo do PIB per capita:
pibperca2 = pib2 / (float) populacao2;

//Cálculo do super poder:
superpoder2 = (float)populacao2 + area2 + densi2 + pib2 + pibperca2 + (float)p_turismo2;

//Exibindo os dados da Carta 1:
/*printf("Os dados da Carta 1 são: \n Código da Carta: %s\n Estado: %s\n Cidade: %s\n População: %d\n Área: %.2f\n PIB: %.2f\n Pontos Turísticos: %d\n Densidade Populacional: %.2f\n PIB per Capita: %.2f\n",
      c_carta1, estado1, cidade1, populacao1, area1, pib1, p_turismo1, densi1, pibperca1);*/

      //Exibindo os dados da Carta 2:
/*printf("Os dados da Carta 2 são: \n Código da Carta: %s\n Estado: %s\n Cidade: %s\n População: %d\n Área: %.2f\n PIB: %.2f\n Pontos Turísticos: %d\n Densidade Populacional: %.2f\n PIB per Capita: %.2f\n",
      c_carta2, estado2, cidade2, populacao2, area2, pib2, p_turismo2, densi2, pibperca2);*/

//Menu interativo:
printf("### Escolha um atributo: ###\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. Densidade\n");
printf("4. PIB\n");
printf("5. Superpoder\n");
printf("Digite sua escolha: \n");
scanf("%d", &escolha);

switch (escolha)
{
case 1:
      printf("### População ###\n");
            if(populacao1 > populacao2){
            printf("A carta 1 venceu! População: %d\n", &populacao1);
      }else if (populacao1 < populacao2){
            printf("A carta 2 venceu! População: %d\n", &populacao2);
      } else{
            printf("Empate!\n");
      }
      break;
case 2:
            printf("### Área ###\n");
            if(area1 > area2){
            printf("A carta 1 venceu! Área: %f\n", &area1);
      }else if (area1 < area2){
            printf("A carta 2 venceu! Área: %f\n", &area2);
      } else{
            printf("Empate!\n");
      }
      break;
case 3:
            printf("### Densidade ###\n");
            if(densi1 < densi2){
            printf("A carta 1 venceu! Área: %f\n", &densi1);
      }else if (densi1 > densi2){
            printf("A carta 2 venceu! Área: %f\n", &densi2);
      } else{
            printf("Empate!\n");
      }
      break;
case 4:
            printf("### PIB ###\n");
            if(pib1 > pib2){
            printf("A carta 1 venceu! Área: %f\n", &pib1);
      }else if (pib1 < pib1){
            printf("A carta 2 venceu! Área: %f\n", &pib2);
      } else{
            printf("Empate!\n");
      }
      break;
case 5:
            printf("### Superpoder ###\n");
            if(superpoder1 > superpoder2){
            printf("A carta 1 venceu! Área: %f\n", &superpoder1);
      }else if (superpoder1 < superpoder2){
            printf("A carta 2 venceu! Área: %f\n", &superpoder2);
      } else{
            printf("Empate!\n");
      }
      break;
default:
      printf("Opção inválida!");
      break;
}



//Comparação:

  
      return 0;

}