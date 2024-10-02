#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "modulo_telas_iniciais.h"
#include "modulo_salas.h"

char tela_menu_salas(void){
  char op;
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                     - - - - Menu Salas - - - -                          ***\n");
  printf("***                                                                         ***\n");
  printf("***         1 - Cadastrar Sala                                             ***\n");
  printf("***         2 - Excluir Sala                                               ***\n");
  printf("***         3 - Pesquisar Sala                                             ***\n");
  printf("***         4 - Atualizar Sala                                             ***\n");
  printf("***         0 - Sair                                                        ***\n");
  printf("***                                                                         ***\n");
  printf("***         Escolha a opcao desejada...                                     ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  scanf("%c", &op);
  getchar();
  return op;
}

void tela_cadastrar_salas(void){
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                  - - - - Cadastrar Salas - - - -                        ***\n");
  printf("***                                                                         ***\n");
  printf("***         Bloco:                                                           ***\n");
  printf("***         Número:                                                         ***\n");
  printf("***         Código:                                                            ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void tela_pesquisar_salas(void){
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                  - - - - Pesquisar Salas - - - -                        ***\n");
  printf("***                                                                         ***\n");
  printf("***         Código da sala:                                                 ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void tela_atualizar_salas(void){
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                  - - - - Atualizar Salas - - - -                        ***\n");
  printf("***                                                                         ***\n");
  printf("***         Código da sala:                                                 ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void tela_excluir_salas(void){
  cabecalho_principal();
  printf("*******************************************************************************\n");
  printf("***                                                                         ***\n");
  printf("***                   - - - - Excluir Salas - - - -                         ***\n");
  printf("***                                                                         ***\n");
  printf("***         Código da sala:                                                 ***\n");
  printf("***                                                                         ***\n");
  printf("*******************************************************************************\n");
  printf("*******************************************************************************\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}