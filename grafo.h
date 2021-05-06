#ifndef _GRAFO_H_
#define _GRAFO_H_
#include <stdio.h>
#include <stdlib.h>
#define CIDADES 28
#define SIGLA 4

/*Estrutura de um enlace da rede*/
typedef struct enlace {
    char cidade[SIGLA];          /*Sigla da cidade onde o enlace esta hosteado */
    char tipoC;           /*Tipo de conexao (f - Fibra optica, c - Cabo Ethernet) */
    struct enlace *next; /* Próximo nó na lista encadeada. */
} Enlace;

/*Estrutura de Grafo com lista de adjacências: */
typedef struct grafo {
    char **lista; /* Relaciona o codigo da cidade com sua sigla */
    int E; /* Quantidade de arestas. */
    int V; /* Quantidade de vértices. */
    Enlace **Adj; /* Lista de adjacências. */
} Grafo;

void preencher_lista(Grafo *G);

Grafo* criar_grafo ();

void liberar_grafo (Grafo *G);

void imprimir_grafo(Grafo *G);

void inserir_conexao(Grafo *G, int v, int u, char tipo);

void realiza_aconexao(Grafo *G, int v, int u, char tipo);

#endif