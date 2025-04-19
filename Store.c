#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int produtos, opcao, quantidade;
  float preco, total = 0;

  printf("Seja bem vindo a nossa loja virtual 😃!\n");
  printf("Primeiro. Para facilitar sua experiencia conosco, escolha qual a natureza do produto deseja comprar 🛒.\n");
  
  printf("1 - Alimentos 🍟\n");
  printf("2 - Roupas 🧵\n");
  printf("3 - Eletronicos 🔌\n");
  printf("4 - Livros 📘\n");
  printf("5 - Brinquedos 🪀\n");
  printf("Digite o numero da categoria que deseja:");
  scanf("%d", &opcao);
  if(opcao == 1){
    printf("Voce escolheu Alimentos 🍽. Agora escolha o produto que deseja\n"); 
  do{
  printf("1. Feijão  - R$ 5,00\n");
  printf("2. Arroz - R$ 3,00\n");
  printf("3. Macarrão - R$ 2,00\n");
  printf("4. Carne - R$ 15,00\n");
  printf("5. Leite - R$ 3,50\n");
  printf("6. Cerveja - R$ 6,00\n");
  printf("7. Suco - R$ 4,00\n");
  printf("8. Refrigerante - R$ 5,00\n");
  printf("9. Pão - R$ 1,00\n");
  printf("10. Molho de tomate - R$ 2,00\n");
  printf("0. Finalizar compra \n");
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
      case 0:
      printf("Compra finalizada ✨\n"); break;
      default:
      printf("Produto inválido.\n"); 
      continue;
  }
  if(produtos != 0) {
  printf("Digite a quantidade desejada de cada produto:");
        scanf("%d", &quantidade);
        total += quantidade * preco;
       }
    } while (produtos != 0); 
    printf("Total de compras foi de:R$ %.2f\n", total);
 }
  else if(opcao == 2){ 
    do {
  printf("Voce escolheu Roupas 👔. Agora escolha o produto que deseja\n");
  printf("1. Camisas - R$ 40,00\n");
  printf("2. Calças - R$ 30,00\n");
  printf("3. Shorts - R$ 20,00\n");
  printf("4. Bermudas - R$ 25,00\n");
  printf("5. Camisetas - R$ 20,50\n");
  printf("6. Sapatos - R$ 20,99\n");
  printf("7. Grávatas - R$ 20,00\n");
  printf("8. Roupas intimas (Masculina) - R$ 30,00\n");
  printf("9. Roupa intima (Feminina) - R$ 40,00\n");
  printf("10. Meias - R$ 25,00\n");
  printf("0. Finalizar compra\n");
  scanf("%d", &produtos);
  
  switch(produtos) {
      case 1: preco = 40.00; break;
      case 2: preco = 30.00; break;
      case 3: preco = 20.00; break;
      case 4: preco = 25.00; break;
      case 5: preco = 20.50; break;
      case 6: preco = 20.99; break;
      case 7: preco = 20.00; break;
      case 8: preco = 30.00; break;
      case 9: preco = 40.00; break;
      case 10: preco = 25.00; break;
      case 0:
      printf("Compra finalizada ✨\n"); break;
      default: 
      printf("Produto inválido.\n"); 
      continue;
  }
  if(produtos != 0) {
  printf("Digite a quantidade desejada de cada produto:");
        scanf("%d", &quantidade);
        total += quantidade * preco;
       }
    } while (produtos != 0); 
    printf("Total de compras foi de:R$ %.2f\n", total);
  } 
   else if(opcao == 3){ 
    do {
  printf("Voce escolheu Eletrônicos 📳. Agora escolha o produto que deseja\n");
  printf("1. Mouse - R$ 74,00\n");
  printf("2. Teclado - R$ 400,00\n");
  printf("3. Carregador - R$ 200,00\n");
  printf("4. Celular - R$ 1.200,00\n");
  printf("5. Gabinete - R$ 100,00\n");
  printf("6. Cooler - R$ 330,00\n");
  printf("7. Suporte para Notebook - R$ 45,00\n");
  printf("8. Extensão - R$ 20,00\n");
  printf("9. Pen Drive - R$ 40,00\n");
  printf("10. Monitor - R$ 60,00\n");
  printf("0. Finalizar compra\n");
  scanf("%d", &produtos);
  
  switch(produtos) {
      case 1: preco = 74.00; break;
      case 2: preco = 400.00; break;
      case 3: preco = 200.00; break;
      case 4: preco =  1200.00; break;
      case 5: preco = 100.00; break;
      case 6: preco = 330.00; break;
      case 7: preco = 45.00; break;
      case 8: preco = 20.00; break;
      case 9: preco = 40.00; break;
      case 10: preco = 60.00; break;
      case 0:
      printf("Compra finalizada ✨\n"); break;
      default: 
      printf("Produto inválido.\n"); 
      continue;
  }
  if(produtos != 0) {
  printf("Digite a quantidade desejada de cada produto:");
        scanf("%d", &quantidade);
        total += quantidade * preco;
       }
    } while (produtos != 0); 
    printf("Total de compras foi de:R$ %.2f\n", total);
  } 
   else if(opcao == 4){ 
    do {
  printf("Voce escolheu Livros 📖. Agora escolha o produto que deseja\n");
  printf("1. O Senhor dos Anéis - R$ 49,90\n");
  printf("2. Dom Casmurro - R$ 29,00\n");
  printf("3. 1984 - R$ 39,50\n");
  printf("4. O Pequeno Príncipe - R$ 25,00\n");
  printf("5. A Revolução dos Bichos - R$ 34,90\n");
  printf("6. Harry Potter e a Pedra Filosofal - R$ 44,00\n");
  printf("7. O Código Da Vinci - R$ 38,00\n");
  printf("8. Orgulho e Preconceito - R$ 30,00\n");
  printf("9. A Culpa é das Estrelas - R$ 32,00\n");
  printf("10. O Alquimista - R$ 36,00\n");
  printf("0. Finalizar compra\n");
  scanf("%d", &produtos);
  
  switch(produtos) {
      case 1: preco = 49.90; break;
      case 2: preco = 29.00; break;
      case 3: preco = 39.50; break;
      case 4: preco = 25.00; break;
      case 5: preco = 34.90; break;
      case 6: preco = 44.00; break;
      case 7: preco = 38.00; break;
      case 8: preco = 30.00; break;
      case 9: preco = 32.00; break;
      case 10: preco = 36.00; break;
      case 0:
      printf("Compra finalizada ✨\n"); break;
      default: 
      printf("Produto inválido.\n"); 
      continue;
  }
  if(produtos != 0) {
  printf("Digite a quantidade desejada de cada produto:");
        scanf("%d", &quantidade);
        total += quantidade * preco;
       }
    } while (produtos != 0); 
    printf("Total de compras foi de:R$ %.2f\n", total); 
   }
      else if(opcao == 5){ 
    do {
  printf("Voce escolheu Brinquedos 🎲. Agora escolha o produto que deseja\n");
  printf("1. Carro - R$ 50,90\n");
  printf("2. Bonecos (Masculino) - R$ 49,00\n");
  printf("3. Bonecas (Feminina) - R$ 39,00\n");
  printf("4. Mascara - R$ 10,00\n");
  printf("5. Kit De Médicina - R$ 50,00\n");
  printf("6. Kit De Ferramentas - R$ 49,00\n");
  printf("7. Com Controle Remoto - R$ 90,00\n");
  printf("8. Pato De Banho - R$ 35,00\n");
  printf("9. Piscina Inflável - R$ 91,00\n");
  printf("10. Fantasia - R$ 100,00\n");
  printf("0. Finalizar compra\n");
  scanf("%d", &produtos);
  
  switch(produtos) {
      case 1: preco = 50.90; break;
      case 2: preco = 49.00; break;
      case 3: preco = 39.00; break;
      case 4: preco = 10.00; break;
      case 5: preco = 50.00; break;
      case 6: preco = 49.00; break;
      case 7: preco = 90.00; break;
      case 8: preco = 35.00; break;
      case 9: preco = 91.00; break;
      case 10: preco = 100.00; break;
      case 0:
      printf("Compra finalizada ✨\n"); break;
      default: 
      printf("Produto inválido.\n"); 
      continue;
  }
  if(produtos != 0) {
  printf("Digite a quantidade desejada de cada produto:");
        scanf("%d", &quantidade);
        total += quantidade * preco;
       }
    } while (produtos != 0); 
    printf("Total de compras foi de:R$ %.2f\n", total); 
   }else{
        printf("Isso não é uma opção válida. Escolha novamente");
  return 0;
  }
}
