#include <stdio.h>

#include <stdio.h>
#include <string.h>

struct CartaSuperTrunfo {
   char estado;
   char codigo[4]; // Supondo um comprimento máximo de 3 caracteres + ''
   char cidade[50];
   int populacao;
   int pontosTuristicos;
   float area;
   float pib;
};
//Crie uma função para ler os dados das cartas: Esta função solicitará ao usuário as informações para cada carta.

void lerCarta(struct CartaSuperTrunfo *carta) {
   printf("\nDigite o estado (uma letra de A a Z): ");
   scanf(" %c", &carta->estado);
   printf("\nDigite o código da carta: ");
   scanf(" %s", carta->codigo);
   printf("\nDigite o nome da cidade: ");
   scanf(" %s", carta->cidade);
   printf("\nDigite a população da cidade: ");
   scanf(" %d", &carta->populacao);
   printf("\nDigite os pontosTuristicos");
   scanf("%d", &carta->pontosTuristicos);
   printf("\nDigite a area em km²: ");
   scanf("%f", &carta->area);
   printf("\nDigite o pib: ");
   scanf("%f", &carta->pib);
}
//Implemente a função principal: Aqui chamaremos a função para ler os dados das duas cartas e depois exibiremos essas informações para o usuário.

int main() {
   struct CartaSuperTrunfo carta1, carta2;

   printf("Insira os dados da primeira carta:");
   lerCarta(&carta1);

   printf("\nInsira os dados da segunda carta:");
   lerCarta(&carta2);

   printf("\n\nDados da primeira carta:\n");
   printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\n",
          carta1.estado, carta1.codigo, carta1.cidade, carta1.populacao);

   printf("\nDados da segunda carta:\n");
   printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\n",
          carta2.estado, carta2.codigo, carta2.cidade, carta2.populacao);

   return 0;
}

int main() {


    return 0;
}
