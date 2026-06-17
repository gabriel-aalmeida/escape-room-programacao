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

  printf("Pressione ENTER para comecar...\n");
    getchar();
    printf("\n");
   
    acertos += fazerPergunta(
        1,
        "Qual selecao ganhou a Copa do Mundo de 2022 no Qatar?",
        "A) Brasil",
        "B) Franca",
        "C) Argentina",
        "D) Alemanha",
        'C'
    );

    acertos += fazerPergunta(
        2,
        "Quantas vezes o Brasil ganhou a Copa do Mundo?",
        "A) 4 vezes",
        "B) 5 vezes",
        "C) 3 vezes",
        "D) 6 vezes",
        'B'
    );
   
    acertos += fazerPergunta(
        3,
        "Quem foi o artilheiro da Copa do Mundo de 2022?",
        "A) Mbappe",
        "B) Messi",
        "C) Neymar",
        "D) Benzema",
        'A'
    );

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

int fazerPergunta(int numero, const char *pergunta,
                  const char *a, const char *b, const char *c, const char *d,
                  char respostaCorreta) {
    char resposta;

    printf("[ Pergunta %d de %d ]\n", numero, TOTAL_PERGUNTAS);
    printf("%s\n\n", pergunta);
    printf("  %s\n", a);
    printf("  %s\n", b);
    printf("  %s\n", c);
    printf("  %s\n\n", d);
    printf("Sua resposta (A/B/C/D): ");

    scanf(" %c", &resposta);
    while (getchar() != '\n');

    if (resposta >= 'a' && resposta <= 'd') {
        resposta = resposta - 32; 
    }

    if (resposta == respostaCorreta) {
        printf("\n[-] Correto! Voce avancou no estadio!\n");
        printf("-----------------------------------------------------\n\n");
        return 1;
    } else {
        printf("\n[-] Errado! A resposta certa era %c.\n", respostaCorreta);
        printf("-----------------------------------------------------\n\n");
        return 0;
    }
}
