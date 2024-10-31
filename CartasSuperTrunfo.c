#include <stdio.h>

int main() {

    char estado, codigo_da_carta [3], nome_da_cidade [10];
    int populacao;
    float area_em_km;
    float pib;
    int numero_de_pontos_turísticos;

    printf ("Digite o Estado: \n");
    scanf("%c", &estado);

    printf ("Digite o Código da carta (EX: A01,... , A04.): \n");
    scanf("%s", &codigo_da_carta);

    printf ("Digite nome da cidade: \n");
    scanf("%s", &nome_da_cidade);

    printf ("Digite a população: \n");
    scanf("%d", &populacao);

    printf ("Área em km²: \n");
    scanf("%f", &area_em_km);

    printf ("Digite o PIB: \n");
    scanf("%f", &pib);

    printf ("Digite o Número de pontos turísticos: \n");
    scanf("%d", &numero_de_pontos_turísticos);

    printf ("---------SEU CADASTRO DE CARTA--------- \n");

    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigo_da_carta);
    printf("Nome da cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f km²\n", area_em_km);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turísticos);

    return 0;
}
