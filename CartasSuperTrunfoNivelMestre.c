#include <stdio.h>
#include <string.h>

int main (){

    //CARTA 1
    char estado;
    char carta[5];
    char cidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int turisticos;
    float densidade;
    float capita;
    float superpoder;

    //CARTA 2
    char estado2;
    char carta2[5];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int turisticos2;
    float densidade2;
    float capita2;
    float superpoder2;

    
    
    // CARTA 1
    printf("* CARTA 1 * \n");

    printf("Uma letra de 'A' a 'H' (representando um dos oito estados). \n");
    scanf(" %c", &estado);  // Adicionei um espaço antes de %c para consumir qualquer caractere de nova linha remanescente

    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). \n");
    scanf("%s", carta);
    getchar(); // Consome o caractere de nova linha deixado pelo scanf

    printf("O nome da cidade: ");
    fgets(cidade, 50, stdin);
    cidade[strcspn(cidade, "\n")] = '\0'; // Remove o caractere de nova linha da string

    printf("Número da população da cidade. \n");
    scanf("%lu", &populacao);

    printf("Tamanho da area em Km². \n");
    scanf("%f", &area);

    printf("O Produto Interno Bruto da cidade. \n");
    scanf("%f", &pib);

    printf("A quantidade de pontos turísticos na cidade. \n");
    scanf("%d", &turisticos);

    //CARTA 2
    printf("** CARTA 2 ** \n");

    printf("Uma letra de 'A' a 'H' (representando um dos oito estados). \n");
    scanf(" %c", &estado2);  // Adicionei um espaço antes de %c para consumir qualquer caractere de nova linha remanescente

    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). \n");
    scanf("%s", carta2);
    getchar(); // Consome o caractere de nova linha deixado pelo scanf

    printf("O nome da cidade: ");
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0'; // Remove o caractere de nova linha da string

    printf("Número da população da cidade. \n");
    scanf("%lu", &populacao2);

    printf("Tamanho da area em Km². \n");
    scanf("%f", &area2);

    printf("O Produto Interno Bruto da cidade. \n");
    scanf("%f", &pib2);

    printf("A quantidade de pontos turísticos na cidade. \n");
    scanf("%d", &turisticos2);

    // Resultados
    //  CARTA 1
    printf("* CARTA 1 RESULTADO * \n");
    printf("Estado: %c\n", estado);
    printf("Sua carta: %s\n", carta);
    printf("Cidade: %s\n", cidade);
    printf("População: %lu\n", populacao);
    printf("Tamanho da Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", turisticos); 
    densidade = (populacao / area);
    printf("Densidade Populacional: %.2f \n", densidade);
    capita = (pib / populacao);
    printf("PIB per Capita: %.2f \n", capita);

    //   CARTA 2
    printf("** CARTA 2 RESULTADO ** \n");
    printf("Estado: %c\n", estado2);
    printf("Sua carta: %s\n", carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Tamanho da Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", turisticos2);
    densidade2 = (populacao2 / area2);
    printf("Densidade Populacional: %.2f \n", densidade2);
    capita2 = (pib2 / populacao2);
    printf("PIB per Capita: %.2f \n",capita2);
    
    //SUPER PODER CARTA 1
    superpoder = populacao + area + pib + turisticos + capita + (1 / densidade);
    printf("O poder total da CARTA 1 é: %f \n", superpoder);
    
    //SUPER PODER CARTA 2
    superpoder2 = populacao2 + area2 + pib2 + turisticos2 + capita2 + (1 / densidade2);
    printf("O poder total da CARTA 2 é: %f \n", superpoder2);
    
    //COMPARAÇÃO SUPERPODERES
    printf("Carta1 > Carta2: %d \n",superpoder > superpoder2);
    
    
    
    

    return 0;
}

    
    
