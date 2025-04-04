/*
Coletar informações de duas cidades, como estado, código, nome, população, área, PIB e pontos turísticos.


Exibe os dados das duas cidades.



*/
#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída (stdio.h), necessária para usar printf e scanf.

int main() { // Declara a função principal do programa.
    
    // Variáveis da Carta 1
    char estado; // Armazena um caractere representando o estado (ex: 'A', 'B', etc.).
    char codigo[5]; // Armazena o código da cidade como uma string de até 4 caracteres + o caractere nulo '\0'.
    char nome_cidade[20]; // Armazena o nome da cidade com até 19 caracteres + '\0'.
    int populacao;
    float area; 
    float pib; 
    int turistico; 

    // Variáveis da Carta 2
    char estado2; 
    char codigo2[5];
    char nome_cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int turistico2;

    // Entrada dos dados da Carta 1
    printf("Carta 1:\n"); // Exibe um cabeçalho para a entrada da Carta 1.

    printf("Estado (Ex: A-H): ");
    scanf(" %c", &estado); // Lê um caractere do estado, o espaço antes do %c evita problemas com o buffer de entrada.
    
    printf("Código da carta  (Ex: A01): ");
    scanf(" %[^\n]", codigo); // Lê uma string até encontrar uma nova linha (\n), permitindo espaços na entrada/para arrays em char [] não se usa &.

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome_cidade); // Mesmo conceito, garantindo que a cidade possa ter espaços no nome.

    printf("População: ");
    scanf(" %d", &populacao);

    printf("Área (em km²): ");
    scanf("%f", &area);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib);

    printf("Pontos turisticos: ");
    scanf("%d", &turistico); 

    // Entrada dos dados da Carta 2
    printf("\nCarta 2:\n");

    printf("Estado: (EX: A-H)");
    scanf(" %c", &estado2); 

    printf("Código da carta (Ex: A01): ");
    scanf(" %[^\n]", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome_cidade2);

    printf("População: ");
    scanf(" %d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &turistico2);

    // Exibição das Cartas
    printf("\nCarta 1:\n ");
    printf("Estado: %c\n ", estado);
    printf("Código: %s\n ", codigo);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População: %d\n ", populacao);
    printf("Área %.2f km²\n ", area); 
    printf("PIB %.2f bilhões de reais\n ", pib);
    printf("Números de pontos turísticos: %d\n", turistico);

    printf("\nCarta 2:\n ");
    printf("Estado: %c\n ", estado2);
    printf("Código: %s\n ", codigo2);
    printf("Nome da cidade: %s\n ", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área %.2f km²\n ", area2);
    printf("PIB %.2f bilhões de reais\n ", pib2);
    printf("Números de pontos turísticos: %d\n", turistico2);

    return 0;
}
