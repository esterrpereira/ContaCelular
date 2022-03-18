#include <stdio.h>

int main(void) {
  float minutos_usados, minutos_mais ;
  
 

  printf("Digite quantos minutos foi utilizados: ");
  scanf("%f", &minutos_usados);

  if (minutos_usados <= 100 )
    printf("O total da sua conta é de R$39,99 ");
  else
    if (minutos_usados <= 200)
     printf("O total da sua conta é de R$59,99 ");
  else
      if (minutos_usados == 500)
         printf("O total da sua conta é de R$99,99 ");
  else
        if (minutos_usados > 500 )
          minutos_mais = 99.99 + (minutos_usados - 500); 
          printf("O total da sua conta é de %f", minutos_mais );
          
  
  
  
  
  
  
  
  }