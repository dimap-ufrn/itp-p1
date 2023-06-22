#include <stdio.h>

/**
 * Imprime uma ajuda explicando como o programa deve ser usado.
 * @param program_name Nome do arquivo executável.
 */
void print_usage(char *program_name) {
  printf("Forma de usar:\n");
  printf("    %s <operacao>\n", program_name);
  printf("Onde <operacao> pode ser:\n");
  printf("    gray: para criar uma versão em escala de cinza da imagem original.\n");
  printf("    enlarge: para ampliar em 2x a imagem original.\n");
  printf("    reduce: para reduzir em 2x a imagem original.\n");
  printf("    rotate: para rotacionar 90 graus (sentido horário) a imagem original.\n");
  printf("    sharp: para aplicar um filtro de sharpening na imagem original.\n");
  printf("    blur: para aplicar um filtro de blurring na imagem original.\n");
  printf("\n");
  printf("A imagem original será lida da entrada-padrão e a imagem transformada será enviada para a saída-padrão.\n\n");
}

/**
 * Função principal: ponto de partida do programa.
 */
int main(int argc, char* argv[]) {
  if (argc != 2) {
    print_usage(argv[0]);
  }
  else {
    char *operation = argv[1]; // operação passada no argumento.
  }

  return 0;
}
