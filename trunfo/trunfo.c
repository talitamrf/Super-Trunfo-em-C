#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "");

    char nome_da_cidade[60];
    char estado[60];
    int pontos_turisticos;
    int codigo;
    int populacao;
    float area;
    float densidade_populacional;
    float PIB;
    float pib_per_capita;

    printf("Digite o nome da sua cidade: ");
    scanf("%s", nome_da_cidade);

    printf("Digite o nome do seu estado: ");
    scanf("%s", estado);

    printf("Digite o codigo da sua cidade: ");
    scanf("%d", &codigo);

    printf("Quantos pontos turisticos esta cidade tem? ");
    scanf("%d", &pontos_turisticos);

    printf("Quantas pessoas moram nesta cidade? ");
    scanf("%d", &populacao);

    printf("Qual eh a area desta cidade? ");
    scanf("%f", &area);

    printf("Qual eh o PIB da cidade? ");
    scanf("%f", &PIB);

    densidade_populacional = populacao / area;
    pib_per_capita = PIB / populacao;

    printf("\n--- CARTA CRIADA: ---\n");
    printf("Cidade: %s\n", nome_da_cidade);
    printf("Estado: %s\n", estado);
    printf("Codigo: %d\n", codigo);
    printf("Pontos turisticos: %d\n", pontos_turisticos);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Densidade populacional: %.2f\n", densidade_populacional);
    printf("PIB per capita: %.2f\n", pib_per_capita);

    return 0;
}