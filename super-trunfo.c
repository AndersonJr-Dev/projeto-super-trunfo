#include <stdio.h>

int main() {
    // Estrutura para armazenar os dados das cartas
    char estado[50];          // Nome do estado
    char codigo;              // Código da carta (um único caractere)
    char nome[50];            // Nome da cidade
    int populacao;            // População da cidade
    float area;               // Área da cidade em km²
    float pib;                // PIB da cidade em bilhões
    int pontos_turisticos;    // Quantidade de pontos turísticos

    // Função para limpar o buffer de entrada
    void limparBuffer() {
        while (getchar() != '\n'); // Limpa o buffer de entrada
    }

    // Cadastro da primeira carta
    printf("\n=== Cadastro de Carta ===\n");
    printf("\n=== Cadastre a primeira Carta ===\n");

    // Solicita e armazena os dados da primeira carta
    printf("Digite o nome do estado: ");
    scanf("%s", estado); // Lê o nome do estado
    limparBuffer(); // Limpa o buffer após a leitura

    printf("Digite o código da carta: ");
    scanf(" %c", &codigo); // Lê o código da carta
    limparBuffer();

    printf("Digite o nome da cidade: ");
    scanf("%s", nome); // Lê o nome da cidade
    limparBuffer();

    printf("Digite a população: ");
    scanf("%d", &populacao); // Lê a população
    limparBuffer();

    printf("Digite a área em km²: ");
    scanf("%f", &area); // Lê a área
    limparBuffer();

    printf("Digite o PIB em bilhões: ");
    scanf("%f", &pib); // Lê o PIB
    limparBuffer();

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos); // Lê a quantidade de pontos turísticos
    limparBuffer();

    // Exibe os dados da primeira carta cadastrada
    printf("\n=== Dados da Primeira Carta ===\n");
    printf("Estado: %s\n", estado);
    printf("Código: %c\n", codigo);
    printf("Cidade: %s\n", nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);

    // Cadastro da segunda carta
    printf("\n=== Cadastre a segunda Carta ===\n");

    // Solicita e armazena os dados da segunda carta
    printf("Digite o nome do estado: ");
    scanf("%s", estado); // Lê o nome do estado
    limparBuffer();

    printf("Digite o código da carta: ");
    scanf(" %c", &codigo); // Lê o código da carta
    limparBuffer();

    printf("Digite o nome da cidade: ");
    scanf("%s", nome); // Lê o nome da cidade
    limparBuffer();

    printf("Digite a população: ");
    scanf("%d", &populacao); // Lê a população
    limparBuffer();

    printf("Digite a área em km²: ");
    scanf("%f", &area); // Lê a área
    limparBuffer();

    printf("Digite o PIB em bilhões: ");
    scanf("%f", &pib); // Lê o PIB
    limparBuffer();

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos); // Lê a quantidade de pontos turísticos
    limparBuffer();

    // Exibe os dados da segunda carta cadastrada
    printf("\n=== Dados da Segunda Carta ===\n");
    printf("Estado: %s\n", estado);
    printf("Código: %c\n", codigo);
    printf("Cidade: %s\n", nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);

    return 0; // Finaliza o programa
}
