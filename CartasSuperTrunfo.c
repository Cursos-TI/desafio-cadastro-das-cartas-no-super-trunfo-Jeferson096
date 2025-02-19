#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Jeferson

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, popul, áaçãorea, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char estado;
    char carta[5];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int turisticos;

    printf("CARTA 1");

    printf("Uma letra de 'A' a 'H' (representando um dos oito estados). \n");
    scanf("%c", &estado);
    
    printf( "A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). \n");
    scanf("%s", &carta);

    printf("O nome da cidade.(Apenas a primera palavra) ");
    scanf("%s", &cidade);

    printf("Número de habitantes na cidade. \n");
    scanf("%d", &populacao);

    printf("Tamanho da area em Km². \n");

    scanf("%f", &area);

    printf("O Produto Interno Bruto da cidade. \n");
    scanf("%f", &pib);

    printf("A quantidade de pontos turísticos na cidade. \n");
    scanf("%d", &turisticos);


 

    
    printf("Estado: %c\n", estado);
    printf("Sua carta: %s\n", carta);
    printf("Cidade: %s\n", cidade);
    printf("Habitantes: %d\n", populacao);
    printf("Tamanho da Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos turísticos: %d\n", turisticos);




    return 0;
}
