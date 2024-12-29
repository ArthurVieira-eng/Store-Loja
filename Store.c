// Objetivo: Criar um progama que simule uma loja virtual, onde o usuario pode
// escolher os produtos que deseja comprar, e apos isso o programa ira calcular
// o valor total da compra.

#include <math.h>
#include <stdio.h>

int main(void) {
  int produtos, opcao, quantidade;
  float preco, total = 0;

  printf("Seja bem vindo a nossa loja virtual!\n");
  printf("Primeiro. Para facilitar sua experiencia conosco, escolha qual a "
         "natureza do produto deseja comprar.\n");

  printf("1 - Alimentos\n");
  printf("2 - Roupas\n");
  printf("3 - Eletronicos\n");
  printf("4 - Livros\n");
  printf("5 - Brinquedos\n");
  printf("Digite o numero da categoria que deseja:");
  scanf("%d", &opcao);
  switch (produtos) {
  case 1:
    printf("Voce escolheu Alimentos. Agora escolha o produto que deseja");

        case 2 :

        printf("Voce escolheu Roupas. Agora escolha o produto que deseja");
  }

  printf("1. Feijão - R$ 5,00\n");
  printf("2. Arroz - R$ 3,00\n");
  printf("3. Macarrão - R$ 2,00\n");
  printf("4. Carne - R$ 15,00\n");
  printf("5. Leite - R$ 3,50\n");
  printf("6. Cerveja - R$ 6,00\n");
  printf("7. Suco - R$ 4,00\n");
  printf("8. Refrigerante - R$ 5,00\n");
  printf("9. Pão - R$ 1,00\n");
  printf("10. Molho de tomate - R$ 2,00\n");
  printf("11. Você ja escolheu esse produto.\n");
  printf("0. Finalizar compra\n");
  do {
    printf("Digite o número do produto desejado: ");
    scanf("%d", &opcao);
    switch (opcao) {
    case 1:
      printf("Digite a quantidade de feijão desejada:");
      scanf("%d", &quantidade);
      preco = 5.0;
      total += quantidade * preco;
      break;

    case 2:
      printf("Digite a quantidade de arroz desejada:");
      scanf("%d", &quantidade);
      preco = 3.0;
      total += quantidade * preco;
      break;

    case 3:
      printf("Digite a quantidade de macarrão desejada:");
      scanf("%d", &quantidade);
      preco = 3.0;
      total += quantidade * preco;
      break;

    case 4:
      printf("Digite a quantidade de carne desejada:");
      scanf("%d", &quantidade);
      preco = 15.0;
      total += quantidade * preco;
      break;

    case 5:
      printf("Digite a quantidade de leite desejada:");
      scanf("%d", &quantidade);
      preco = 3.5;
      total += quantidade * preco;
      break;

    case 6:
      printf("Qual quantidade de cervejadesejada:");
      scanf("%d", &quantidade);
      preco = 6.0;
      total += quantidade * preco;
      break;

    case 7:
      printf("Digite a quantidade de suco desejada: ");
      scanf("%d", &quantidade);
      preco = 4.0;
      total += quantidade * preco;
      break;

    case 8:
      printf("Quantidade de refrigerante desejada: ");
      scanf("%d", &quantidade);
      preco = 5.0;
      total += quantidade * preco;
      break;

    case 9:
      printf("Digite a quantidade de pão desejada: ");
      scanf("%d", &quantidade);
      preco = 1.0;
      total += quantidade * preco;
      break;

    case 10:
      printf("Quantidade de molho de tomate desejada:");
      scanf("%d", &quantidade);
      preco = 2.0;
      total += quantidade * preco;
      break;

    case 0:
      printf("Compra finalizada. O valor total compra é R$ %.2f\n", total);
      break;

    default:
      printf("Opção inválida. Tente novamente.\n");
      break;
    }
  } while (opcao != 0);
  return 0;
}
