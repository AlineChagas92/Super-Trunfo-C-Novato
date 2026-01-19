#include <stdio.h>

// DESAFIO SUPER TRUNFO NOVATO
// Cadastro de cartas scanf
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

    // VARIÁVEIS CARTA 2
    char Estado2;
    char Codigo2 [4];
    char Cidade2 [50];
    int Populacao2;
    float Area2;
    float Pib2;
    int PontosTuristicos2;

    //ENTRADA DE DADOS CARTA 1
    printf  ("DESAFIO SUPER TRUNFO - NOVATO\n");
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

    //ENTRADA DE DADOS CARTA 
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


    //SAÍDA DE DADOS

    printf ("\n Carta 1: \n");
    printf ("Estado: %c \n", Estado1);
    printf ("Codigo: %s\n", Codigo1);
    printf ("Nome da Cidade: %s\n", Cidade1);
    printf ("Populacao: %d\n", Populacao1);
    printf ("Area %.2f Km²\n", Area1);
    printf ("PIB: %.2f B\n", Pib1);
    printf ("Numero de Pontos Turisticos: %d\n", PontosTuristicos1);

    printf ("\n Carta 2: \n");
    printf ("Estado: %c \n", Estado2);
    printf ("Codigo: %s\n", Codigo2);
    printf ("Nome da Cidade: %s\n", Cidade2);
    printf ("Populacao: %d\n", Populacao2);
    printf ("Area %.2f Km²\n", Area2);
    printf ("PIB: %.2f B\n", Pib2);
    printf ("Numero de Pontos Turisticos: %d\n", PontosTuristicos2);

    return 0;



}