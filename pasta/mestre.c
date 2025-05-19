#include <stdio.h>

    // NIVEL MESTRE -------------------------------------

    
    
    
    // -------- Desclarando as variaveis da CARTA 1 ------------ 

    int main (){

      
 printf("Carta 1\n");

    char estado1[3], codigoCarta1[10], nomeCidade1[30];
     unsigned long int populacao1;
    int pontoTuristico1;
    float area1, pib1, densidade1, pibPerCapta1;
  

        //       Exibindo os dados para o Usuario carta 1 

          printf("Estado: \n");
          scanf(" %s", estado1);
          
          printf("Código da Carta:\n");
          scanf(" %s", codigoCarta1);
          
          printf("Cidade:\n");
          scanf(" %s", nomeCidade1);
          
          printf("População:\n");
          scanf(" %lu", &populacao1);
          
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


          // Calculo do SUPER PODER 

          float superPoder1 = populacao1 + area1 + pib1 + pontoTuristico1 + pibPerCapta1 +(1.0 / densidade1);


      // Exibição dos dados da Carta 1 

 printf("Estado: %s\n", estado1);
 printf("Código da Carta: %s\n", codigoCarta1);
 printf("Cidade: %s\n", nomeCidade1);
 printf("População: %lu\n", populacao1);
 printf("Pontos Turísticos: %d\n", pontoTuristico1);
 printf("Area: %.3f\n", area1);
 printf("Pib: %.2f\n", pib1);
 printf("Densidade: %.2f\n", densidade1);
 printf("Pib perCapta: %.2f\n", pibPerCapta1);



 // -------- Desclarando as variaveis da CARTA 2 ------------ 


  printf("Carta 2\n");

    char estado2[3], codigoCarta2[10], nomeCidade2[30];
    unsigned long int populacao2;
    int pontoTuristico2;
    float area2, pib2, densidade2, pibPerCapta2;

    //       Exibindo os dados para o Usuario carta 2

          printf("Estado: \n");
          scanf(" %s", &estado2);
          
          printf("Código da Carta:\n");
          scanf(" %s", &codigoCarta2);
          
          printf("Cidade:\n");
          scanf(" %s", &nomeCidade2);
          
          printf("População: \n");
          scanf(" %lu", &populacao2);
          
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

        


          // Calculo do SUPER PODER CARTA 2 

          float superPoder2 = populacao2 + area2 + pib2 + pontoTuristico2 + pibPerCapta2 + (1.0 / densidade2);



// Exibição dos dados da Carta 2 --------------------------

 printf("Estado: %s\n", estado2);
 printf("Código da Carta: %s\n", codigoCarta2);
 printf("Cidade: %s\n", nomeCidade2);
 printf("População: %lu\n", populacao2);
 printf("Pontos Turísticos: %d\n", pontoTuristico2);
 printf("Area: %.3f\n", area2);
 printf("Pib: %.2f\n", pib2);
 printf("Densidade: %.2f\n", densidade2);
 printf("Pib PerCapta:%.2f\n", pibPerCapta2);



 //------------- COMPARANDO AS CARTAS ----------- 


 printf("Comparação de Cartas\n");

 printf("População: Carta 1 venceu %d\n", populacao1 > populacao2);
 printf("Área: Carta 1 venceu %d\n", area1 > area2);
 printf("Pib: Carta 1 venceu %d\n", pib1 > pib2);
 printf("Pontos Turísticos: Carta 1 venceu %d\n", pontoTuristico1 > pontoTuristico2);
 printf("Densidade Populacional: Carta 2 venceu %d\n", densidade1 < densidade2);
 printf("Pib per Capta: Carta 1 venceu %d\n",pibPerCapta1 > pibPerCapta2);
 printf("Super Poder: Carta 1 venceu %d", superPoder1 > superPoder2);
     

return 0; 


    }