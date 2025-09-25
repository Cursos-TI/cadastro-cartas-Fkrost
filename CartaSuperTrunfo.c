#include <stdio.h>
int main(){

    // Definindo todas a variaveis

    char estado1[2];
    char estado2[2];
    char codigo1[3];
    char codigo2[3];
    char nomedacidade1[50];
    char nomedacidade2[50];
    int populacao1;
    int populacao2;
    float area1;
    float area2;
    float pib1;
    float pib2;
    int pontosturisticos1;
    int pontosturisticos2;

    // Inserindo as informações da primeira carta
    
    printf("\nVamos começar com a primeira carta!!\n\n");
    printf("Digite uma letra de 'A' a 'H'(Representando um dos oitos estados): ");
    scanf(" %s", &estado1);
    
    printf("Digite a letra do estado seguida de um número de 01 a 04: ");
    scanf(" %s", &codigo1);
    
    getchar(); //O getchar(); serve justamente para consumir esse \n que sobrou no buffer
    printf("Digite o nome da cidade: ");
    fgets(nomedacidade1 , 50, stdin);

    printf("O número de habitantes na cidade: ");
    scanf(" %d", &populacao1);

    printf("A área da cidade em quilômetros quadrados: ");
    scanf(" %f", &area1);

    printf("O Produto Interno Bruto da cidade: ");
    scanf(" %f", &pib1);
    
    printf("A quantidade de pontos turísticos da cidade; ");
    scanf(" %d", &pontosturisticos1);

    // Inserindo as informações da segunda carta
    printf("Agora vamos para segunda carta!!\n\n");
    printf("Digite uma letra de 'A' a 'H'(Representando um dos oitos estados): ");
    scanf(" %s", &estado2);
    
    printf("Digite a letra do estado seguida de um número de 01 a 04: ");
    scanf(" %s", &codigo2);
    
    getchar(); //O getchar(); serve justamente para consumir esse \n que sobrou no buffer
    printf("Digite o nome da cidade: ");
    fgets(nomedacidade2 , 50, stdin);

    printf("O número de habitantes na cidade: ");
    scanf(" %d", &populacao2);

    printf("A área da cidade em quilômetros quadrados: ");
    scanf(" %f", &area2);

    printf("O Produto Interno Bruto da cidade: ");
    scanf(" %f", &pib2);
    
    printf("A quantidade de pontos turísticos da cidade; ");
    scanf(" %d", &pontosturisticos2);

    
    //Imprimindo a primeira carta
    printf("Carta 1 \n\n");
    printf("Estado: %s \n", estado1);
    printf("Código da carta: %s \n",codigo1);
    printf("Nome da cidade: %s", nomedacidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f Km2\n", area1);
    printf("PIB: %.2f Bilhões de reais \n", pib1);
    printf("Número de pontos turísticos: %d \n\n", pontosturisticos1);
    // imprimindo a segunda carta
    printf("Carta 2 \n\n");
    printf("Estado: %s \n", estado2);
    printf("Código da carta: %s \n" ,codigo2);
    printf("Nome da cidade: %s", nomedacidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f Km2\n", area2);
    printf("PIB: %.2f Bilhões de reais \n", pib2);
    printf("Número de pontos turísticos: %d \n", pontosturisticos2);

    return 0;

}