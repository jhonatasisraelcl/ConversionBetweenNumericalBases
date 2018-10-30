#include <stdio.h>
int mensagem(char);

int main(void) {
  char c;
  printf("=========================================================================== \n O programa converte números decimais inteiros para outra base.\n\n O programa recebe um número em decimal e a base alvo. \n Inicialmente, caso a base não seja informada será usada a base 2. \n\n Se uma base diferente for informada ela passará a ser a base padrão.\n Exemplos de uso: \n\t>> Digite um número e a base (opcional): <decimal> <base> \n\t>> Digite um número e a base (opcional): 25 Irá converter o decimal 25 para binário (base 2, padrão) \n\t>> Digite um número e a base (opcional): 40 5 Irá converter o decimal 40 para base 5 \n\t>> Digite um número e a base (opcional): 70 Irá converter o decimal 70 para base 5 (última base informada). \n\n Executar o programa passando -ajuda, mostra essa mensagem. \n Excultar o programa passando -info, mostra informações dos desenvolvedores. \n Executar o programa sem parâmetros encerra o programa. \n=========================================================================== ");

  printf("Digite um número e a base (opcional): ");
  scanf("%c", &c);
  mensagem(c);
}


int mensagem(char opcao){
  if (opcao == 'a'){
   printf("=========================================================================== \n O programa converte números decimais inteiros para outra base.\n\n O programa recebe um número em decimal e a base alvo. \n Inicialmente, caso a base não seja informada será usada a base 2. \n\n Se uma base diferente for informada ela passará a ser a base padrão.\n Exemplos de uso: \n\t>> Digite um número e a base (opcional): <decimal> <base> \n\t>> Digite um número e a base (opcional): 25 Irá converter o decimal 25 para binário (base 2, padrão) \n\t>> Digite um número e a base (opcional): 40 5 Irá converter o decimal 40 para base 5 \n\t>> Digite um número e a base (opcional): 70 Irá converter o decimal 70 para base 5 (última base informada). \n\n Executar o programa passando -ajuda, mostra essa mensagem. \n Excultar o programa passando -info, mostra informações dos desenvolvedores. \n Executar o programa sem parâmetros encerra o programa. \n=========================================================================== "); 
  } else{
    if (opcao == 'i'){
      printf("Desenvolvido por:\nJhonatas Israel da Costa Laurentino (Discente)\nRobson Agripino da Silva (Monitor)\nSob a orientação do Prof. Luiz Paulo de Assis Barbosa \n\nComo parte das atividades do projeto de monitoria:\nDesenvolvimento de Ferramentas de Apoio Pedagógico Para Os Componentes de Formação Básica e Obrigatória em Ciência e Tecnologia da Computação do Curso BSI/CERES da UFRN.");
    }
  }
}
