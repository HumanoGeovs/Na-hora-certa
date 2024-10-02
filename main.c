#include <stdio.h> // importa funções que podem ser úteis ao projeto
#include <stdlib.h> // importa funções que podem ser uteis ao projeto
#include "modulo_telas_iniciais.h"
#include "modulo_professor.h"
#include "modulo_aluno.h"
#include "modulo_salas.h"

int main(void){
    char op = tela_menu_principal();

    while(op != '0'){
      if (op == '1') {
        char op2 = tela_menu_professor();
        while(op2 != '0'){
          if (op2 == '1'){
            tela_cadastrar_professor();
          } else if (op2 == '2'){
            tela_excluir_professor();
          } else if (op2 == '3'){
            tela_pesquisar_professor();
          } else if (op2 == '4'){
            tela_atualizar_professor();
          } else {
            msg_escolha_invalida();  
          }

          op2 = tela_menu_professor();
        }
      } else if (op == '2') {
        char op2 = tela_menu_aluno();
        while(op2 != '0'){
          if (op2 == '1'){
            tela_cadastrar_aluno();
          } else if (op2 == '2'){
            tela_excluir_aluno();
          } else if (op2 == '3'){
            tela_pesquisar_aluno();
          } else if (op2 == '4'){
            tela_atualizar_aluno();
          } else {
            msg_escolha_invalida();  
          }

          op2 = tela_menu_aluno();
        }
      } else if (op == '3') {
        char op2 = tela_menu_salas();
        while(op2 != '0'){
          if (op2 == '1'){
            tela_cadastrar_salas();
          } else if (op2 == '2'){
            tela_excluir_salas();
          } else if (op2 == '3'){
            tela_pesquisar_salas();
          } else if (op2 == '4'){
            tela_atualizar_salas();
          } else {
            msg_escolha_invalida();  
          }

          op2 = tela_menu_salas();
        }
      } else {
        msg_escolha_invalida();  
      } 
      op = tela_menu_principal();
    }
    return 0;
}