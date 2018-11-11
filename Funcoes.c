/* 
  Laurentino, J.I.C.

  Laboratório de Inteligência Computacional Aplicada a Negócios (LABICAN) 
  Departamento de Computação e Tecnologia (DCT) 
  Bacharelando em Sistemas de Informação (BSI)
  Universidade Federal do Rio Grande do Norte – Caicó – RN – Brasil
  
  11/11/2018
*/

#include <stdio.h>
#include <string.h>
#include "Funcoes.h"

#define true 0 
#define false 1

int compara(){
  char s1[] = "-ajuda";
  char s2[] = "-info";
  char buffer[80];
  do {
   printf (">> Digite um número e a base (opcional): ");
    fflush (stdout);
    scanf ("%79s",buffer);
    if (strcmp (s1,buffer) == true){
    
      printf("O programa converte números decimais inteiros para outra base.\nO programa recebe um número em decimal e a base alvo.\nInicialmente, caso a base não seja informada será usada a base 2.\nSe uma base diferente for informada ela passará a ser a base padrão.\nExemplos de uso:\n\t>> Digite um número e a base (opcional): <decimal> <base>\n\t>> Digite um número e a base (opcional): 25 Irá converter o decimal 25 para binário (base 2, padrão)\n\t>> Digite um número e a base (opcional): 40 5 Irá converter o decimal 40 para base 5\n\t>> Digite um número e a base (opcional): 70 Irá converter o decimal 70 para base 5 (última base informada).\nExecutar o programa passando -ajuda, mostra essa mensagem.\nExcultar o programa passando -info, mostra informações dos desenvolvedores.\nExecutar o programa sem parâmetros encerra o programa.\n");
      compara();  
     }else if (strcmp (s2,buffer) == true){
       printf("\n Desenvolvido por: \n\t Jhonatas Israel da Costa Laurentino (Discente)\n\t Robson Agripino da Silva (Monitor) \n\t Sob a orientação do Prof. Luiz Paulo de Assis Barbosa\n\nComo parte das atividades do projeto de monitoria:Desenvolvimento de Ferramentas de Apoio Pedagógico Para Os Componentes de Formação Básica e Obrigatória em Ciência e Tecnologia da Computação do Curso BSI/CERES da UFRN. \n");
       compara();
     }else{
        char base_digits[16] = {'0', '1', '2', '3', '4', '5', '6', '7','8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
        int converted_number[64];
        long int n;
        int next_digit, b, index=0;

        /* get the number and base */
        printf(">> Digite um número e a base (opcional): ");
        scanf("%ld %i", &n, &b);

        /* convert to the indicated base */
        while (n != 0) {
          converted_number[index] = n % b;
          n = n/ b;
          ++index;
        }

      /* now print the result in reverse order */
      --index;  /* back up to last entry in the array */
      printf("\n\nNumero Convertido = ");
      for(  ; index>=0; index--) /* go backward through array */
      {
      printf("%c", base_digits[converted_number[index]]);
      }
      printf("\n");
          compara();
        }
      } while (strcmp (s1,buffer) != true);  
        return 0;  

}
