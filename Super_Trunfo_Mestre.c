#include <stdio.h>

// DESAFIO SUPER TRUNFO MESTRE
// Aplicação de operadores relacionais e modificadores de tipo

int main () {

    // DECLARAÇÃO DE VARIÁVEIS

    // CARTA1
    unsigned long int Populacao1;
    float Area1;
    float Pib1;
    int PontosTuristicos1;
    float Densidade1;
    float PibPerCapita1;
    float SuperPoder1;

    // CARTA 2
    unsigned long int Populacao2;
    float Area2;
    float Pib2;
    int PontosTuristicos2;
    float Densidade2;
    float PibPerCapita2;
    float SuperPoder2;

    // ATRIBUICAO DE VALORES

    Populacao1 = 12325000;
    Area1 = 1521.11;
    Pib1 = 699.28;
    PontosTuristicos1 = 50;

    Populacao2 = 6748000;
    Area2 = 1200.25;
    Pib2 = 300.50;
    PontosTuristicos2 = 30;

    // CALCULOS

    // Densidade Populacional (habitantes por Km²)
    Densidade1 = Populacao1 / Area1;
    Densidade2 = Populacao2 / Area2;

    // PIB Per Capita (riqueza média por pessoa)
    PibPerCapita1 = (Pib1 * 1000000000) / Populacao1;
    PibPerCapita2 = (Pib2 * 1000000000) / Populacao2;

    // SUPERPODER
    SuperPoder1 = 
        Populacao1 + 
        Area1 + 
        (Pib1 * 1000000000) + 
        PontosTuristicos1 + 
        PibPerCapita1 + 
        (1.0f / Densidade1);

    SuperPoder2 = 
        Populacao2 + 
        Area2 + 
        (Pib2 * 1000000000) + 
        PontosTuristicos2 + 
        PibPerCapita2 + 
        (1.0f / Densidade2);

    // COMPARACOES
    printf ("Comparacao de Cartas:\n");

    printf ("Populacao: (%s)\n", 
        Populacao1 > Populacao2 ? "Carta 1 Venceu" : "Carta 2 Venceu");

    printf ("Area: (%s)\n", 
        Area1 > Area2 ? "Carta 1 Venceu" : "Carta 2 Venceu");

    printf ("PIB: (%s)\n", 
        Pib1 > Pib2 ? "Carta 1 Venceu" : "Carta 2 Venceu");

    printf ("Pontos Turisticos: (%s)\n",
         PontosTuristicos1 > PontosTuristicos2 ? "Carta 1 Venceu" : "Carta 2 Venceu");

    // Regra Especial: menor densidade vence
    printf ("Densidade Populacional: (%s)\n",
         Densidade1 < Densidade2 ? "Carta 1 Venceu" : "Carta 2 Venceu");

    printf ("PIB per Capita: (%s)\n",
         PibPerCapita1 > PibPerCapita2 ? "Carta 1 Venceu" : "Carta 2 Venceu");
   
    // Comparacao de valores calculados
    printf ("Super Poder: (%s)\n", 
        SuperPoder1 > SuperPoder2 ? "Carta 1 Venceu" : "Carta 2 Venceu");

    return 0;

    // 






}