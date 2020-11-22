#include <stdio.h>
#include <stdlib.h>

/* 
	Gustavo Barbosa Espindula
*/

/* TAD: Aluno (matr�cula, nome, p1, p2, p3) */
struct aluno { // Guarda as interfaces do aluno
	int matricula;
	char nome[50];
	float p1, p2, p3;
};

typedef struct aluno Aluno;    /* Tipo exportado */

/* Cabe�alho das fun��es */

/* Aloca dinamicamente um vetor */
Aluno* cria (int n);

/* Cadastra os Alunos no vetor */
void cadastra (int n, Aluno* vet);

/* Recupera entre os alunos a maior nota da prova 1 */
void maiorNota (int n, Aluno* vet, Aluno *alunoMaiorNota);

/* Recupera entre os alunos a maior m�dia */
void maiorMedia (int n, Aluno* vet, Aluno *alunoMaiorMedia);

/* Recupera entre os alunos a menor m�dia */
void menorMedia (int n, Aluno* vet, Aluno *alunoMenorMedia);

/* imprime a situa��o dos alunos(aprovado/reprovado) com base na m�dia */ 
void situacaoAluno (int n, Aluno* vet);

