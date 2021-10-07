#include <stdio.h>

int main(void) {
  char peca;
  float peso;


  printf("Digite o tipo: ");
  scanf(" %c", &peca);
  if (peca == 'X'){
    printf("Digite o peso: ");
    scanf("%f", &peso);
    printf("Tipo de peca desconhecido");
    return 0;
    }
  

  if (peca == 'A'){
    printf("Digite o peso: ");
    scanf("%f", &peso);
    if (peso >=1195 && peso <=1205){
      printf("A peca segue o padrao de qualidade");}
    else if (peso <=0){
      printf("O peso indicado nao eh valido");
      }
    else{
      printf("A peca eh defeituosa e deve ser descartada");}
    return 0;
    }

  if (peca == 'A'){
    printf("Digite o peso: ");
    scanf("%f", &peso);}
    if (peso >=1205 && peso <=1195){
      printf("O peso indicado nao eh valido");
    return 0;
    }

 




  if (peca == 'B'){
    printf("Digite o peso: ");
    scanf("%f", &peso);
    if (peso >=1790 && peso <=1810){
      printf("A peca segue o padrao de qualidade");}
    else if (peso <=0){
      printf("O peso indicado nao eh valido");
      }
    else{
      printf("A peca eh defeituosa e deve ser descartada");}
   return 0;
    }


  if (peca == 'B'){
    printf("Digite o peso: ");
    scanf("%f", &peso);}
    if (peso >=1810 && peso <=1790){
      printf("O peso indicado nao eh valido");
    return 0;
    }
}
