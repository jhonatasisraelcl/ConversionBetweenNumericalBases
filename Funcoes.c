#include <stdio.h>
#include "Funcoes.h"
int compara( char* s1, char* s2){
  int i;
  char s2[]="ajuda";
  /*Faz a comparação caractere por caractere*/
  for (i=0 ; s1[i]!='\0' && s2[i]!='\0';i++){
    if(s1[i]>s2[i]){
      return -1;
    }
    else if(s1[i]<s2[i]){
      return 1;
    }
  } 
  if (s1[i]==s2[i]){
    printf("são iguais");
    return 0;
  }
  else if (s2[i]!='\0'){
    printf("s1 é menor");
    return 0;
  }
  else{
    printf("s2 é menor");
    return 1;
  }
}
