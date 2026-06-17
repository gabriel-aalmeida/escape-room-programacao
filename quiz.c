/*
 * =====================================================
 *  QUIZ DA COPA DO MUNDO - Escape Room: Estadio Secreto
 *  Atividade Final - Gamificacao
 *  Disciplina: Logica da programacao
 *  Aluno: Gabriel de Almeida Alfredo
 * =====================================================
 */

#include <stdio.h>

#define TOTAL_PERGUNTAS 8
#define PONTOS_POR_ACERTO 10

void exibirBoasVindas();
void exibirResultado(int pontos, int acertos);
int fazerPergunta(int numero, const char *pergunta,
                  const char *a, const char *b, const char *c, const char *d,
                  char respostaCorreta);

int main() {
    int pontos  = 0;
    int acertos = 0;
    char resposta;
  exibirBoasVindas();

    return 0;
}

void exibirBoasVindas() {
    printf("=====================================================\n");
    printf("     QUIZ DA COPA DO MUNDO - ESTADIO SECRETO\n");
    printf("=====================================================\n\n");

    printf("HISTORIA:\n");
    printf("Voce foi trancado no estadio secreto da FIFA!\n");
    printf("A unica saida e responder 8 perguntas sobre a\n");
    printf("Copa do Mundo corretamente.\n");
    printf("Cada acerto vale %d pontos.\n\n", PONTOS_POR_ACERTO);
    printf("Voce consegue escapar?\n\n");
    printf("-----------------------------------------------------\n");
}
