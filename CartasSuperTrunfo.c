#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

struct Carta{
    char estado;
    char codigo[10];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int numPontosTuristicos;
};

int main(){
    struct Carta carta1;
    struct Carta carta2;
    
    printf(" Cadastro da Carta 1 \n");
    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &carta1.estado); //espaço antes do %c para ingnorar o enter anterior

    printf("Digite o código da carta (ex: A01)");
    scanf(" %s", carta1.codigo);

    printf("Digite o nome da cidade:");
    scanf(" %s", carta1.nomeCidade); //le até a quebra de linha (nome com espaços)

    printf("Digite a populaçao da cidade: ");
    scanf(" %d", &carta1.populacao);

    printf("Digite a área da cidade (em km²): ");
    scanf(" %f", &carta1.area);

    printf("Digite o PIB da cidade (em bilhoes): ");
    scanf(" %f", &carta1.pib);

    printf("Digite o número de pontos turisticos: ");
    scanf(" %d", &carta1.numPontosTuristicos);

    printf(" Cadastro da Carta 2 \n");
    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &carta2.estado);
    getchar();//consome o '\n' que ficou no buffer

    printf("Digite o código da carta (ex: A01) ");
    scanf(" %s", carta2.codigo);

    printf("Digite o nome da cidade:");
    scanf(" %s", carta2.nomeCidade);

    printf("Digite a populacao da cidade: ");
    scanf(" %d", &carta2.populacao);

    printf("Digite a área da cidade (em km²): ");
    scanf(" %f", &carta2.area);

    printf("Digite o PIB da cidade (em bilhoes): ");
    scanf(" %f", &carta2.pib);

    printf("Digite o número de pontos turisticos: ");
    scanf(" %d", &carta2.numPontosTuristicos);

    printf("\n===Carta 1 ===\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("Populaçao: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Número de Pontos Turisticos: %d\n", carta1.numPontosTuristicos);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("Populaçäo: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Número de Pontos Turisticos: %d\n", carta2.numPontosTuristicos);

    return  0; 

    
}
