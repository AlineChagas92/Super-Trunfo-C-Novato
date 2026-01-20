Projeto Super Trunfo em C

Projeto desenvolvido em linguagem C para o desafio Super Trunfo.
Objetivo do trabalho é aplicar, na prática, os conceitos estudados, como entrada e saída de dados, operadores relacionais, modificadores de tipo e cálculos com números reais.

O projeto está organizado em três níveis de complexidade: Novato, Aventureiro e Mestre, demonstrando a evolução do código e do raciocinio lógico ao longo do desafio.

Estrutura do Projeto
-Super_Trunfo_Novato.c
Implementa cadastro de duas cartas do Super Trunfo, com leitura de dados via scanf e exibição organizada das informações utilizando printf.

- Super_Trunfo_Aventureiro.c 
Expande o nível novato adicionando cáculos de densidade populacional e PIB per Capita, com formatação adequada dos valores numéricos.

- Super_Trunfo_Mestre.c  
Versão final do projeto, com cálculo de Super Poder e comparação entre duas cartas atributo por atributo, utilizando operadores relacionais e o operador ternário para exibição dos resultados.

Funcionalidades por Nível:

- Nível Novato:
* Leitura dos dados de duas cartas
* Armazenamento das informações em variáveis apropriadas
* Exibição organizada das informações cadastradas
* Uso de tipos básicos (char, int e float)
* Código sequencial, sem uso de estruturas de repetição ou decisão

- Nível Aventureiro:
* Cálculo de densidade populacional
* Cálculo do PIB per Capita
* Uso de variáveis do tipo float para valores com casas decimais
* Formatação da saída com duas casas decimais
* Manutenção da simplicidade e legibilidade do código

- Nível Mestre:
* Uso do tipo unsigned long int para valores grandes
* Cálculo do Super Poder a partir de múltiplos atributos numéricos
* Aplicação de operadores relacionais para comparação entre cartas
* Regra especial para densidade populacional (menor valor vence)
* Uso do operador ternário para exibir o resultado das comparações
* Saída clara indicando qual carta venceu em cada atributo
