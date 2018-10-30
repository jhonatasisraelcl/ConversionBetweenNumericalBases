#include "Funcoes.h"
#include <stdio.h>


int main(void){
  char s1[]="ajuda";
  char s2[]="info";
  char s3[]="ajuda";
  
  compara(s1, s3);
  compara(s2, s3);
  compara(s1, s3);

  return 0;

}
