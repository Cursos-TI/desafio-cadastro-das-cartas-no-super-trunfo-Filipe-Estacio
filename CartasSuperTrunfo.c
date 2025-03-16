#include <stdio.h>

int main(){

    char estado[50];
    char codigo[50];
    char nomedacidade[50];
    int populacao;
    float area;
    int numero_de_pontos_turisticos;
    float PIB;

    printf("Digite seu estado: \n");
    scanf("%s", &estado);

    printf("Digite seu codigo:\n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &nomedacidade);

    printf("Digite sua população:\n");
    scanf("%d", &populacao);

    printf("Digite a area:\n");
    scanf("%f", &area);

    printf("Digite os numero de pontos turisticos:\n");
    scanf("%d", &numero_de_pontos_turisticos);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB);


    printf("Nome do Estado: %s - Codigo: %s\n", estado, codigo);
    printf("Nome da Cidade: %s - População: %d\n", nomedacidade, população);
    printf("Tamanho da area: %f - Numero de pontos turisticos: %d - PIB: %f\n",area, numero_de_pontos_turisticos PIB);


    return 0;
}
