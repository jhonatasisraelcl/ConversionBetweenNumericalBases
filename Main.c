#include <stdio.h>
#include <string.h>
#include "Funcoes.h"

void main(void)
{
  printf("O programa converte números decimais inteiros para outra base.\nO programa recebe um número em decimal e a base alvo.\nInicialmente, caso a base não seja informada será usada a base 2.\nSe uma base diferente for informada ela passará a ser a base padrão.\nExemplos de uso:\n\t>> Digite um número e a base (opcional): <decimal> <base>\n\t>> Digite um número e a base (opcional): 25 Irá converter o decimal 25 para binário (base 2, padrão)\n\t>> Digite um número e a base (opcional): 40 5 Irá converter o decimal 40 para base 5\n\t>> Digite um número e a base (opcional): 70 Irá converter o decimal 70 para base 5 (última base informada).\nExecutar o programa passando -ajuda, mostra essa mensagem.\nExcultar o programa passando -info, mostra informações dos desenvolvedores.\nExecutar o programa sem parâmetros encerra o programa.\n\n");
  compara();
}
