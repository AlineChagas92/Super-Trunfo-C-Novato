#include <stdio.h>

// DESAFIO SUPER TRUNFO AVENTUREIRO
// Cadastro de cartas scanf
// Calculo de Densidade Populacional de PIB per Capita 
// Saída organizada em printf

int main (){


    // VARIÁVEIS CARTA 1
    char Estado1;
    char Codigo1 [4];
    char Cidade1 [50];
    int Populacao1;
    float Area1;
    float Pib1;
    int PontosTuristicos1;
    float Densidade1;
    float PibPerCapita1;

    // VARIÁVEIS CARTA 2
    char Estado2;
    char Codigo2 [4];
    char Cidade2 [50];
    int Populacao2;
    float Area2;
    float Pib2;
    int PontosTuristicos2;
    float Densidade2;
    float PibPerCapita2;

    //ENTRADA DE DADOS CARTA 1
    printf  ("DESAFIO SUPER TRUNFO - AVENTUREIRO\n");
    printf ("Cadastro Carta 1\n");

    printf ("Estado (A-H): ");
    scanf (" %c", &Estado1);

    printf ("Codigo da Carta (ex.: A01): ");
    scanf ("%s", Codigo1);

    printf ("Nome da Cidade: ");
    scanf (" %[^\n]", Cidade1);

    printf ("População: ");
    scanf ("%d", &Populacao1);

    printf ("Area (Km²): ");
    scanf ("%f", &Area1);

    printf ("PIB: ");
    scanf ("%f", &Pib1);

    printf ("Numero de Pontos Turisticos: ");
    scanf ("%d", &PontosTuristicos1);

    // CALCULOS CARTA 1
    
    Densidade1 = Populacao1 / Area1;
    PibPerCapita1 = (Pib1 * 1000000000) / Populacao1;


    //ENTRADA DE DADOS CARTA 2
    printf ("Cadastro Carta 2\n");

    printf ("Estado (A-H): ");
    scanf (" %c", &Estado2);

    printf ("Codigo da Carta (ex.: A01): ");
    scanf ("%s", Codigo2);

    printf ("Nome da Cidade: ");
    scanf (" %[^\n]", Cidade2);

    printf ("População: ");
    scanf ("%d", &Populacao2);

    printf ("Area (Km²): ");
    scanf ("%f", &Area2);

    printf ("PIB: ");
    scanf ("%f", &Pib2);

    printf ("Numero de Pontos Turisticos: ");
    scanf ("%d", &PontosTuristicos2);

    // CALCULOS CARTA 1
    
    Densidade2 = Populacao2 / Area2;
    PibPerCapita2 = (Pib2 * 1000000000) / Populacao2;


    //SAÍDA DE DADOS

    printf ("\nCarta 1: \n");
    printf ("Estado: %c \n", Estado1);
    printf ("Codigo: %s\n", Codigo1);
    printf ("Nome da Cidade: %s\n", Cidade1);
    printf ("Populacao: %d\n", Populacao1);
    printf ("Area %.2f Km²\n", Area1);
    printf ("PIB: %.2f B\n", Pib1);
    printf ("Numero de Pontos Turisticos: %d\n", PontosTuristicos1);
    printf ("Densidade Populacional: %.2f hab/km²\n", Densidade1);
    printf ("PIB per Capita: %.2f reais\n", PibPerCapita1);

    printf ("\nCarta 2: \n");
    printf ("Estado: %c \n", Estado2);
    printf ("Codigo: %s\n", Codigo2);
    printf ("Nome da Cidade: %s\n", Cidade2);
    printf ("Populacao: %d\n", Populacao2);
    printf ("Area %.2f Km²\n", Area2);
    printf ("PIB: %.2f B\n", Pib2);
    printf ("Numero de Pontos Turisticos: %d\n", PontosTuristicos2);
    printf ("Densidade Populacional: %.2f hab/km²\n", Densidade2);
    printf ("PIB per Capita: %.2f reais\n", PibPerCapita2);

    return 0;



}