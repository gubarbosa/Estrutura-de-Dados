#include <stdio.h>
#include <stdlib.h>

/* 
	Gustavo Barbosa Espindula
*/

/* TAD: Aluno (matrícula, nome, p1, p2, p3) */
struct aluno { // Guarda as interfaces do aluno
	int matricula;
	char nome[50];
	float p1, p2, p3;
};

typedef struct aluno Aluno;    /* Tipo exportado */

/* Cabeçalho das funções */

/* Aloca dinamicamente um vetor */
Aluno* cria (int n);

/* Cadastra os Alunos no vetor */
void cadastra (int n, Aluno* vet);

/* Recupera entre os alunos a maior nota da prova 1 */
void maiorNota (int n, Aluno* vet, Aluno *alunoMaiorNota);

/* Recupera entre os alunos a maior média */
void maiorMedia (int n, Aluno* vet, Aluno *alunoMaiorMedia);

/* Recupera entre os alunos a menor média */
void menorMedia (int n, Aluno* vet, Aluno *alunoMenorMedia);

/* imprime a situação dos alunos(aprovado/reprovado) com base na média */ 
void situacaoAluno (int n, Aluno* vet);

