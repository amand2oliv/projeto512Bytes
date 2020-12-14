#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char n[5];
  int l;
 printf("Digite um nome: \n");
  gets (n);

 while (strcmp(n, "parar") != 0) {

  l = strlen(n);

  printf("\nO nome possui %d letras \n\n",l);
  printf("Digite outro nome / Deseja parar o programa? Digite 'parar'.\n\n");
  gets (n);

 }
  return 0;
}
