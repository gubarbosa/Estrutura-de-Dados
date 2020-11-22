#include "aluno.h" /* interface aluno.h */

/* 
	Gustavo Barbosa Espindula
*/

Aluno* cria (int n)
{
	Aluno *a = (Aluno*) malloc(n * sizeof(Aluno));
	
    if (a == NULL) {
    	printf("Memória insuficiente!\n");
        exit(1);
    }
    return a;
}

void cadastro (int n, Aluno *vet)
{
	int i;
	for ( i = 0; i < n; i++ )
	{
		printf("Aluno: %d \n", i+1);
		
		printf("Digite o numero de matricula: \n");
		scanf("%d", &vet[i].matricula);
		
		printf("Digite o nome: (max 50 caracteres)\n");
		scanf("%s", vet[i].nome);
		
		printf("Digite a nota da prova 1: \n");
		scanf("%f", &vet[i].p1);
		
		printf("Digite a nota da prova 2: \n");
		scanf("%f", &vet[i].p2);
		
		printf("Digite a nota da prova 3: \n");
		scanf("%f", &vet[i].p3);
	}
}

void maiorNota (int n, Aluno* vet, Aluno *alunoMaiorNota)
{
	int i;
	float nota = 0;
	
	for ( i = 0; i < n; i++ )
	{
		if (vet[i].p1 > nota)
		{
			nota = vet[i].p1;
			*alunoMaiorNota = vet[i];
		}
	}
}

void maiorMedia (int n, Aluno* vet, Aluno *alunoMaiorMedia)
{
	int i;
	float media_aluno, maior_media = 0;
	
	for ( i = 0; i < n; i++ )
	{
		media_aluno = (vet[i].p1 + vet[i].p2 + vet[i].p3) / 3;
		if (media_aluno > maior_media)
		{
			maior_media = media_aluno;
			*alunoMaiorMedia = vet[i];
		}
	}
}

void menorMedia (int n, Aluno* vet, Aluno *alunoMenorMedia)
{
	int i;
	float media_aluno, menor_media = 10;
	
	for ( i = 0; i < n; i++ )
	{
		media_aluno = (vet[i].p1 + vet[i].p2 + vet[i].p3) / 3;
		if (media_aluno < menor_media)
		{
			menor_media = media_aluno;
			*alunoMenorMedia = vet[i];
		}
	}	
}

void situacaoAluno (int n, Aluno* vet)
{
	int i;
	float media;
	char sit1[] = "reprovado";
	char sit2[] = "aprovado";
	printf("\nSituacao alunos:\n");
	for ( i = 0; i < n; i++ )
	{
		media = (vet[i].p1 + vet[i].p2 + vet[i].p3) / 3;
		printf(" N: %d\n Matricula: %d\n Aluno: %s\n Media: %f\n", i+1, vet[i].matricula, vet[i].nome, media);
		if (media < 6)
		{
			printf(" situacao: %s\n", sit1);
		}
		else
		{
			printf(" situacao: %s\n", sit2);
		}
		printf("--------------------------\n");
	}
}
