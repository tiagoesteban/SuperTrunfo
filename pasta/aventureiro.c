#include <stdio.h>

    // NIVEL AVENTUREIRO -------------------------------------

    
    
    
    // -------- Desclarando as variaveis da CARTA 1 ------------ 

    int main (){

      
 printf("Carta 1\n");

    char estado1[3], codigoCarta1[10], nomeCidade1[30];
    int populacao1, pontoTuristico1;
    float area1, pib1, densidade1, pibPerCapta1;

        //       Exibindo os dados para o Usuario carta 1 

          printf("Estado: \n");
          scanf(" %c", estado1);
          
          printf("Código da Carta:\n");
          scanf(" %s", codigoCarta1);
          
          printf("Cidade:\n");
          scanf(" %s", nomeCidade1);
          
          printf("População:\n");
          scanf(" %d", &populacao1);
          
          printf("Pontos Turísticos:\n");
          scanf(" %d", &pontoTuristico1);
          
          printf("Area:\n");
          scanf(" %f", &area1);
          
          printf("Pib:\n");
          scanf(" %f", &pib1); 

          // Calculo da Densidade Populacional --------------------

          densidade1 = (float) populacao1 / area1;

          // Calulo do Pib Per Capta ------------------------------

          pibPerCapta1 = (float) pib1 / populacao1;


      // Exibição dos dados da Carta 1 

 printf("Estado: %c\n", estado1);
 printf("Código da Carta: %s\n", codigoCarta1);
 printf("Cidade: %s\n", nomeCidade1);
 printf("População: %d\n", populacao1);
 printf("Pontos Turísticos: %d\n", pontoTuristico1);
 printf("Area: %.3f\n", area1);
 printf("Pib: %.2f\n", pib1);
 printf("Densidade:%.2f\n", densidade1);
 printf("Pib perCapta:%.2f\n", pibPerCapta1);



 // -------- Desclarando as variaveis da CARTA 2 ------------ 


  printf("Carta 2\n");

    char estado2[3], codigoCarta2[10], nomeCidade2[30];
    int populacao2, pontoTuristico2;
    float area2, pib2, densidade2, pibPerCapta2;

    //       Exibindo os dados para o Usuario carta 2

          printf("Estado: \n");
          scanf(" %s", &estado2);
          
          printf("Código da Carta:\n");
          scanf(" %s", &codigoCarta2);
          
          printf("Cidade:\n");
          scanf(" %s", &nomeCidade2);
          
          printf("População: \n");
          scanf(" %d", &populacao2);
          
          printf("Pontos Turísticos:\n");
          scanf(" %d", &pontoTuristico2);
          
          printf("Area:\n");
          scanf(" %f", &area2);
          
          printf("Pib:\n");
          scanf("%f", &pib2);

          // Calculo da Densidade Populacional ------------

          densidade2 = (float) populacao2 / area2;

          // Calculo do Pib Per Capta ---------------------

          pibPerCapta2 = (float) pib2 / populacao2;

// Exibição dos dados da Carta 2 --------------------------

 printf("Estado: %s\n", estado2);
 printf("Código da Carta: %s\n", codigoCarta2);
 printf("Cidade: %s\n", nomeCidade2);
 printf("População: %d\n", populacao2);
 printf("Pontos Turísticos: %d\n", pontoTuristico2);
 printf("Area: %.3f\n", area2);
 printf("Pib: %.2f\n", pib2);
 printf("Densidade: %.2f\n", densidade2);
 printf("Pib PerCapta:%.2f\n", pibPerCapta2);
     

return 0;


    }