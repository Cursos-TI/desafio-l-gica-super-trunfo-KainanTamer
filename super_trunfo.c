#include <stdio.h>

 int main (){

    printf("Desafio do Super Trunfo\n");
    printf("Carta 1\n");
    char estado1 = 'A';
    char codigo1[20] = "A01";
    char nome_da_cidade1[20] = "Manaus";
    int populacao1 = 2435000;
    float Area1 = 11401;
    float PIB1 = 103281000000;
    int Numero_de_pontos_turisticos1 = 40;
 
   printf("Carta 2\n");
    char estado2 = 'B';
    char codigo2[20] = "B02";
    char nome_da_cidade2[20] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float Area2 = 1200;
    float PIB2 = 300050000000;
    int Numero_de_pontos_turisticos2 = 30;

    float densidade_populacional1 = populacao1 / Area1;
    printf("valor da densidade populacional de Manaus:%.2f\n", densidade_populacional1);
    float densidade_populacional2 = populacao2 / Area2;
    printf("valor da densidade populacional do Rio:%.2f\n", densidade_populacional2);
    float PIB_per_capita1 = PIB1 / populacao1;
    printf("valor do PIB per capita de Manaus:%.2f\n", PIB1);
    float PIB_per_capita2 = PIB2 / populacao2;
    printf("valor do PIB per capita dO Rio de Janeiro:%.2f\n", PIB2);

    if (populacao1 > populacao2){
        printf("Manaus tem maior população, carta 1 venceu!!!\n");
    }
    else (populacao1 < populacao2);{
        printf("Rio de Janeiro tem maior população, carta 2 venceu!!!\n");
    }

    if (Area1 > Area2){
        printf("Manaus tem maior Area, carta 1 venceu!!!\n");
    }
    else{
        printf("Rio de Janeiro tem maior Area, carta 2 venceu!!!\n");
    }

    if (PIB1 > PIB2){
        printf("Manaus tem maior PIB, carta 1 venceu!!!\n");
    }
    else{
        printf("Rio de Janeiro tem maior PIB, carta 2 venceu!!!\n");
    }

    if (Numero_de_pontos_turisticos1 > Numero_de_pontos_turisticos2){
        printf("Manaus tem maior numero de pontos turisticos, carta 1 venceu!!!\n");
    }
    else{
        printf("Rio de Janeiro tem maior numero de pontos turisticos, carta 2 venceu!!!\n");
    }

     if (densidade_populacional1 < densidade_populacional2){
        printf("Manaus tem menor numero em densidade populacional, carta 1 venceu!!!\n");
    }
    else{
        printf("Rio de Janeiro tem menor numero em densidade populacional, carta 2 venceu!!!\n");
    }

  
    return 0;
 }