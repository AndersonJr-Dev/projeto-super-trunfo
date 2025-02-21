#include <stdio.h>

// Estrutura para armazenar os dados de uma carta
typedef struct {
    char estado[50];
    int codigo;
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

// Função para limpar o buffer de entrada
void limparBuffer() {
    while (getchar() != '\n'); // Limpa o buffer de entrada
}

// Função para cadastrar uma carta
void cadastrarCarta(Carta *c) {
    printf("\n=== Cadastro de Carta ===\n");

    printf("Digite o nome do estado: ");
    scanf(" %[^\n]", c->estado); // Leitura do nome do estado
    limparBuffer();  // Limpar buffer após ler o estado

    printf("Digite o código da carta: ");
    scanf("%d", &c->codigo); // Leitura do código
    limparBuffer();  // Limpar buffer após ler o código

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", c->nome); // Leitura do nome da cidade
    limparBuffer();  // Limpar buffer após ler o nome

    printf("Digite a população da cidade: ");
    scanf("%d", &c->populacao); // Leitura da população
    limparBuffer();  // Limpar buffer após ler a população

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &c->area); // Leitura da área
    limparBuffer();  // Limpar buffer após ler a área

    printf("Digite o PIB da cidade em bilhões: ");
    scanf("%f", &c->pib); // Leitura do PIB
    limparBuffer();  // Limpar buffer após ler o PIB

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &c->pontos_turisticos); // Leitura do número de pontos turísticos
    limparBuffer();  // Limpar buffer após ler os pontos turísticos

    printf("\nCarta cadastrada com sucesso!\n");
}

// Função para exibir os dados de uma carta
void exibirCarta(const Carta *c) {
    printf("\n=== Dados da Carta ===\n");
    printf("Estado: %s", c->estado); // `%s` já inclui o caractere '\n' da leitura anterior
    printf("Código: %d\n", c->codigo);
    printf("Cidade: %s", c->nome);
    printf("População: %d habitantes\n", c->populacao);
    printf("Área: %.2f km²\n", c->area);
    printf("PIB: %.2f bilhões\n", c->pib);
    printf("Pontos turísticos: %d\n", c->pontos_turisticos);
}

int main() {
    Carta carta1, carta2;

    // Cadastrando duas cartas
    cadastrarCarta(&carta1);
    cadastrarCarta(&carta2);

    // Exibindo as cartas cadastradas
    exibirCarta(&carta1);
    exibirCarta(&carta2);

    return 0;
}
