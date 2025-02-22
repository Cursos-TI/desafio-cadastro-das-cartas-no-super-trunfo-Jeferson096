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

    char estado, estado2;
    char carta[5], carta2[5];
    char cidade[20], cidade2[20];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int turisticos, turisticos2;

    printf("*****BEM VINDO AO SUPER-TRUNFO***** \n");
    printf("Vamos cadastrar suas cartas \n");
    printf("* CARTA 1 * \n");

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

    printf("CARTA 1 REGISTRADA COM SUCESSO!\n");

    printf("---------------------------------------------------------------\n");

    printf("** CARTA 2 ** \n");

    printf("Uma letra de 'A' a 'H' (representando um dos oito estados). \n");
    scanf("%c", &estado2);
    
    printf( "A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). \n");
    scanf("%s", &carta2);

    printf("O nome da cidade.(Apenas a primera palavra) ");
    scanf("%s", &cidade2);

    printf("Número de habitantes na cidade. \n");
    scanf("%d", &populacao2);

    printf("Tamanho da area em Km². \n");

    scanf("%f", &area2);

    printf("O Produto Interno Bruto da cidade. \n");
    scanf("%f", &pib2);

    printf("A quantidade de pontos turísticos na cidade. \n");
    scanf("%d", &turisticos2);

    printf('CARTA 2 REGISTRADA COM SUCESSO! \n');

 

    
    printf("Estado: %c\n", estado);
    printf("Sua carta: %s\n", carta);
    printf("Cidade: %s\n", cidade);
    printf("Habitantes: %d\n", populacao);
    printf("Tamanho da Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos turísticos: %d\n", turisticos);

    printf("Estado: %c\n", estado2);
    printf("Sua carta: %s\n", carta2);
    printf("Cidade: %s\n", cidade2);
    printf("Habitantes: %d\n", populacao2);
    printf("Tamanho da Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos turísticos: %d\n", turisticos2);




    
}
