#include <stdio.h>
#include <locale.h>
#include <windows.h>

struct Carta
{
    char cidade[60];
    char estado[60];
    int codigo;
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
};

void cadastrarCarta(struct Carta *c)
{
    printf("Digite o nome da sua cidade:\n");
    scanf("%s", c->cidade);

    printf("Digite o nome do seu estado:\n");
    scanf("%s", c->estado);

    printf("Digite o codigo da sua cidade:\n");
    scanf("%d", &c->codigo);

    printf("Quantos pontos turisticos esta cidade tem?\n");
    scanf("%d", &c->pontos_turisticos);

    printf("Quantas pessoas moram nesta cidade?\n");
    scanf("%d", &c->populacao);

    printf("Qual eh a area desta cidade?\n");
    scanf("%f", &c->area);

    printf("Qual eh o PIB da cidade?\n");
    scanf("%f", &c->pib);

    c->densidade_populacional = c->populacao / c->area;
    c->pib_per_capita = c->pib / c->populacao;
}

void mostrarCarta(struct Carta c)
{
    printf("Cidade: %s\n", c.cidade);
    printf("Estado: %s\n", c.estado);
    printf("Codigo: %d\n", c.codigo);
    printf("Pontos turisticos: %d\n", c.pontos_turisticos);
    printf("Populaco %d\n", c.populacao);
    printf("Area: %.2f\n", c.area);
    printf("Densidade Populacional: %.2f\n", c.densidade_populacional);
    printf("PIB per capita: %.2f\n", c.pib_per_capita);
}

void compararCartas(struct Carta c1, struct Carta c2, int opcao)
{
    float valor1, valor2;
    int vencedor;

    switch (opcao)
    {
    case 1:
        valor1 = c1.populacao;
        valor2 = c2.populacao;

        if (valor1 == valor2)
        {
            printf("Empate!\n");
        }
        else
        {
            vencedor = (valor1 > valor2) ? 1 : 2;
            printf("\n>>> Carta %d venceu! <<<\n", vencedor);
        }

        break;

    case 2:
        valor1 = c1.area;
        valor2 = c2.area;

        if (valor1 == valor2)
        {
            printf("\n>>> Empate! <<<\n");
        }
        else
        {
            vencedor = (valor1 > valor2) ? 1 : 2;
            printf("\n>>> Carta %d venceu! <<<\n", vencedor);
        }
        break;

    case 3:
        valor1 = c1.pib;
        valor2 = c2.pib;

        if (valor1 == valor2)
        {
            printf("\n>>> Empate! <<<\n");
        }
        else
        {
            vencedor = (valor1 > valor2) ? 1 : 2;
            printf("\n>>> Carta %d venceu! <<<\n", vencedor);
        }
        break;

    case 4:
        valor1 = c1.pontos_turisticos;
        valor2 = c2.pontos_turisticos;

        if (valor1 == valor2)
        {
            printf("\n>>> Empate! <<<\n");
        }
        else
        {
            vencedor = (valor1 > valor2) ? 1 : 2;
            printf("\n>>> Carta %d venceu! <<<\n", vencedor);
        }

        break;

    case 5:
        valor1 = c1.densidade_populacional;
        valor2 = c2.densidade_populacional;

        if (valor1 == valor2)
        {
            printf("\n>>> Empate! <<<\n");
        }
        else
        {
            vencedor = (valor1 < valor2) ? 1 : 2;
            printf("\n>>> Carta %d venceu! <<<\n", vencedor);
        }
        break;

    case 6:
        valor1 = c1.pib_per_capita;
        valor2 = c2.pib_per_capita;

        if (valor1 == valor2)
        {
            printf("\n>>> Empate! <<<\n");
        }
        else
        {
            vencedor = (valor1 > valor2) ? 1 : 2;
            printf("\n>>> Carta %d venceu! <<<\n", vencedor);
        }
        break;
    }
}

int main()
{
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "");

    int opcao;

    struct Carta carta1;
    struct Carta carta2;

    printf("\n--- Cadastro da Carta 1 ---\n");
    cadastrarCarta(&carta1);
    printf("\n--- Cadastro da Carta 2 ---\n");
    cadastrarCarta(&carta2);

    printf("\n--- Carta 1 ---\n");
    mostrarCarta(carta1);
    printf("\n--- Carta 2 ---\n");
    mostrarCarta(carta2);

    printf("\n===== SUPER TRUNFO =====\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");

    scanf("%d", &opcao);
    compararCartas(carta1, carta2, opcao);
}