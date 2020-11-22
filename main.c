#include "aluno.h"

/* 
	Gustavo Barbosa Espindula
*/

int main (void)
{
	Aluno *vet;                                    /* Declara��o de vari�veis */
	int qtd_alunos;
	Aluno* alunoMaiorNota = (Aluno*) malloc(sizeof(Aluno));
	Aluno* alunoMaiorMedia = (Aluno*) malloc(sizeof(Aluno));
	Aluno* alunoMenorMedia = (Aluno*) malloc(sizeof(Aluno));
	
	printf("Deseja cadastrar quantos alunos? \n");        /* Atribuir o n�mero de alunos */
	scanf("%d", &qtd_alunos);
	
	vet = cria(qtd_alunos);              /* Aloca��o din�mica do vetor */
	
	cadastro(qtd_alunos, vet);             /* Cadastro dos alunos no vetor */
	
	maiorNota(qtd_alunos, vet, alunoMaiorNota);           /* Aluno com a maior nota da prova 1 */
	printf("Melhor prova 1: \n Matricula: %d\n Aluno: %d\n Prova 1: %f\n", alunoMaiorNota->matricula, alunoMaiorNota->nome, alunoMaiorNota->p1);
	printf("--------------------------\n");
	
                    	/* Aluno com a maior m�dia */
	maiorMedia (qtd_alunos, vet, alunoMaiorMedia);
	printf("\nMaior media: \n Matricula: %d\n Aluno: %s\n Media: %f\n", alunoMaiorMedia->matricula, alunoMaiorMedia->nome, (alunoMaiorMedia->p1 + alunoMaiorMedia->p2 + alunoMaiorMedia->p3) / 3);
	printf("--------------------------\n");
	
	menorMedia (qtd_alunos, vet, alunoMenorMedia);                        /* Aluno com a menor m�dia */
	printf("\nMenor media: \n Matricula: %d\n Aluno: %s\n Media: %f\n", alunoMenorMedia->matricula, alunoMenorMedia->nome, (alunoMenorMedia->p1 + alunoMenorMedia->p2 + alunoMenorMedia->p3) / 3);
	printf("--------------------------\n");
	
	situacaoAluno (qtd_alunos, vet);        /* Situa��o dos alunos */
	
	free(alunoMaiorNota);
	free(alunoMaiorMedia);        /* Libera mem�ria */
	free(alunoMenorMedia);
	free(vet);
	
	return 0;         	/* Fim do programa */
}
