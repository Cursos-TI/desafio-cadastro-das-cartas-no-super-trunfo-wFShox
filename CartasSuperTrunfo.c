#include <stdio.h>

// Estrutura de uma carta
typedef struct {
    char Estado[20];
    char Codigo[10];
    char Cidade[30];
    int Populacao;
    float Km2;
    float PIB;
    int PontosT;
} Carta;

int main() {
    int totalCartas;

    printf("Quantas cartas deseja cadastrar? ");
    scanf("%d", &totalCartas);

    Carta baralho[50]; // até 50 cartas

    // Cadastro
    for (int i = 0; i < totalCartas; i++) {
        printf("\n--- Cadastro da Carta %d ---\n", i + 1);

        printf("Estado: ");
        scanf(" %[^\n]", baralho[i].Estado);

        printf("Código: ");
        scanf(" %s", baralho[i].Codigo);

        printf("Cidade: ");
        scanf(" %[^\n]", baralho[i].Cidade);

        printf("População: ");
        scanf("%d", &baralho[i].Populacao);

        printf("KM²: ");
        scanf("%f", &baralho[i].Km2);

        printf("PIB: ");
        scanf("%f", &baralho[i].PIB);

        printf("Pontos Turísticos: ");
        scanf("%d", &baralho[i].PontosT);
    }

    // Exibição
    printf("\n===== CARTAS CADASTRADAS =====\n");
    for (int i = 0; i < totalCartas; i++) {
        printf("\nCarta %d:\n", i + 1);
        printf("Estado: %s\n", baralho[i].Estado);
        printf("Código: %s\n", baralho[i].Codigo);
        printf("Cidade: %s\n", baralho[i].Cidade);
        printf("População: %d\n", baralho[i].Populacao);
        printf("KM²: %.2f\n", baralho[i].Km2);
        printf("PIB: %.2f\n", baralho[i].PIB);
        printf("Pontos Turísticos: %d\n", baralho[i].PontosT);
    }

    return 0;
}
