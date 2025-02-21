#include <stdio.h>

int main(){
    //Estrutura das cartas para armazenar
    char estado[50];
    char codigo;
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    void limparBuffer() {
        while (getchar() != '\n'); // Limpa o buffer de entrada
    }

    //função para cadastrar cartas
    printf("\n=== Cadastro de Carta ===\n");
    printf("\n=== Cadastre a primeira Carta ===\n");

    printf("Digite o nome do estado: ");
    scanf(" %s\n", &estado);
    limparBuffer(); // limpar o buffer após ler a entrada teclado

    printf("Digite o código da carta: ");
    scanf(" %c", &codigo);
    limparBuffer();

    printf("Digite o nome da cidade: ");
    scanf(" %s\n", &nome);
    limparBuffer();

    printf("Digite a população: ");
    scanf(" %d", populacao);
    limparBuffer();

    printf("Digite a área em km²: ");
    scanf(" %f", area);
    limparBuffer();

    printf("Digite o pib em bilhões: ");
    scanf(" %f", pib);
    limparBuffer();

    printf("Digite a quantidade de pontos turisticos: ");
    scanf(" %d", pontos_turisticos);
    limparBuffer();

    //função para mostrar os dados da carta cadastrada
    printf("\n=== Dados das Cartas ===\n");
    printf("Estado: %s\n", &estado);
    printf("Código: %s\n", &codigo);
    printf("Cidade: %s\n", &nome);
    printf("População: %d habitantes\n", &populacao);
    printf("Área: %.2f km²\n", &area);
    printf("PIB: %.2f bilhões\n", &pib);
    printf("Pontos turísticos: %d\n", &pontos_turisticos);

    //função para cadastrar a segunda carta
    printf("\n=== Cadastre a segunda Carta ===\n");

    printf("Digite o nome do estado: ");
    scanf(" %s\n", &estado);
    limparBuffer();

    printf("Digite o código da carta: ");
    scanf(" %s", &codigo);
    limparBuffer();

    printf("Digite o nome da cidade: ");
    scanf(" %s\n", &nome);
    limparBuffer();

    printf("Digite a população: ");
    scanf(" %d", populacao);
    limparBuffer();

    printf("Digite a área em km²: ");
    scanf(" %.2f", area);
    limparBuffer();

    printf("Digite o pib em bilhões: ");
    scanf(" %.2f", pib);
    limparBuffer();

    printf("Digite a quantidade de pontos turisticos: ");
    scanf(" %d", pontos_turisticos);
    limparBuffer();

    //função para mostrar os dados da carta cadastrada
    printf("\n=== Dados das Cartas ===\n");
    printf("Estado: %s\n", &estado);
    printf("Código: %s\n", &codigo);
    printf("Cidade: %s\n", &nome);
    printf("População: %d habitantes\n", &populacao);
    printf("Área: %.2f km²\n", &area);
    printf("PIB: %.2f bilhões\n", &pib);
    printf("Pontos turísticos: %d\n", &pontos_turisticos);

    return 0;


}
