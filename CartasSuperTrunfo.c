#include <stdio.h>

#include <stdio.h>
#include <string.h>

struct CartaSuperTrunfo {
   char estado;
   char codigo[4]; // Supondo um comprimento máximo de 3 caracteres + ''
   char cidade[50];
   int populacao;
};
//Crie uma função para ler os dados das cartas: Esta função solicitará ao usuário as informações para cada carta.

void lerCarta(struct CartaSuperTrunfo *carta) {
   printf("\nDigite o estado (uma letra de A a Z): ");
   scanf(" %c", &carta->estado);
   printf("Digite o código da carta: ");
   scanf(" %s", carta->codigo);
   printf("Digite o nome da cidade: ");
   scanf(" %s", carta->cidade);
   printf("Digite a população da cidade: ");
   scanf(" %d", &carta->populacao);
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
