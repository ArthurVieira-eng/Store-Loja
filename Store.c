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
  if(opcao == 1){
    printf("Voce escolheu Alimentos. Agora escolha o produto que deseja\n"); 
  do{
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
  printf("0. Finalizar compra\n");
  scanf("%d", &produtos);
  
  switch(produtos) {
      case 1: preco = 5.00; break;
      case 2: preco = 3.00; break;
      case 3: preco = 2.00; break;
      case 4: preco = 15.00; break;
      case 5: preco = 3.50; break;
      case 6: preco = 6.00; break;
      case 7: preco = 4.00; break;
      case 8: preco = 5.00; break;
      case 9: preco = 1.00; break;
      case 10: preco = 2.00; break;
      case 11:
      printf("Este produto já foi escolhido anteriormente");
      continue;
      default: 
      printf("Produto inválido"); 
      continue;
  }
  if(produtos != 0) 
  printf("Digite a quantidade desejada de cada produto");
        scanf("%d", &quantidade);
        total += quantidade * preco;
       }
    } while (produtos != 0);
 }
  else if(opcao == 2){
      printf("Voce escolheu Roupas. Agora escolha o produto que deseja\n");
  printf("1. Camisas - R$ 40,00\n");
  printf("2. Calças - R$ 30,00\n");
  printf("3. Shorts - R$ 20,00\n");
  printf("4. Bermudas - R$ 25,00\n");
  printf("5. Camisetas - R$ 20,50\n");
  printf("6. Sapatos - R$ 20,00\n");
  printf("7. Grávatas - R$ 20,00\n");
  printf("8. Roupas intimas (Masculina) - R$ 30,00\n");
  printf("9. Roupa intima (Feminina) - R$ 40,00\n");
  printf("10. Meias - R$ 25,00\n");
  printf("11. Você ja escolheu esse produto.\n");
  printf("0. Finalizar compra\n");
  }
  return 0;
}
