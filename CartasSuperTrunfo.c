#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa



int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char estado[50];
    char codigo[50];
    char nomedacidade[50];
    int população;
    float area;
    int numerodepontosturisticos;
    float PIB;

    printf("Digite seu estado: \n");
    scanf("%s", &estado);

    printf("Digite seu codigo:\n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &nomedacidade);

    printf("Digite sua população:\n");
    scanf("%d", &população);

    printf("Digite a area:\n");
    scanf("%f", &area);

    printf("Digite os numerodepontosturisticos:\n");
    scanf("%d", &numerodepontosturisticos);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB);


    printf("Nome do Estado: %s - Codigo: %s\n", estado, codigo);
    printf("Nome da Cidade: %s - População: %d\n", nomedacidade, população);
    printf("Tamanho da area: %f - Numero de pontos turisticos: %d - PIB: %f\n",area, numerodepontosturisticos, PIB);


    return 0;
}
