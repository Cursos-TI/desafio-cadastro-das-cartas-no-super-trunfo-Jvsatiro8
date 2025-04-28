#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int populacao;
    float area;
    float PIB;
    int numero_de_pontos_turisticos;
    float densidade_populacional;
    float PIB_per_capita;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Digite a polpulação da 1ª carta: \n ");
    scanf("%d", &populacao);

    printf("Digite a área da 1ª carta: \n ");
    scanf("%f", &area);

    printf("Digite o PIB da 1ª carta: \n ");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos da 1ª carta: \n ");
    scanf("%d", &numero_de_pontos_turisticos);


    // ------- Cálculo

    densidade_populacional = populacao / area;

    PIB_per_capita = PIB / populacao;


    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    printf("População da 1ª carta: %d\n", populacao);
    printf("Área da 1ª carta: %f\n", area);
    printf("PIB da 1ª carta: %f\n", PIB);
    printf("Número de pontos turísticos da 1ª carta: %d\n", numero_de_pontos_turisticos );
    printf("Densidade Populacional da 1ª carta: %f\n", densidade_populacional );
    printf("PIB Per Capita da 1ª carta: %f\n", PIB_per_capita );


    
    // ----------------- 2ª CARTA -------------------
    
    printf("\nDigite a polpulação da 2ª carta: \n ");
    scanf("%d", &populacao);

    printf("Digite a área da 2ª carta: \n ");
    scanf("%f", &area);

    printf("Digite o PIB da 2ª carta: \n ");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos da 2ª carta: \n ");
    scanf("%d", &numero_de_pontos_turisticos);


    // ------- Cálculo

    densidade_populacional = populacao / area;

    PIB_per_capita = PIB / populacao;


    printf("População da 2ª carta: %d\n", populacao);
    printf("Àrea da 2ª carta: %f\n", area);
    printf("PIB da 2ª carta: %f\n", PIB);
    printf("Número de pontos turísticos da 2ª carta: %d\n", numero_de_pontos_turisticos);
    printf("Densidade Populacional da 2ª carta: %f\n", densidade_populacional );
    printf("PIB Per Capita da 2ª carta: %f\n", PIB_per_capita );


    return 0;
}
