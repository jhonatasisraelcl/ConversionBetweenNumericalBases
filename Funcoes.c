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
       compara();
     }
  } while (strcmp (s1,buffer) != true);  
    return 0;  
}
