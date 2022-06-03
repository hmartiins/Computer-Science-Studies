#include <stdio.h>

struct aluno
{
	char nome[20];
	float notas[2];
	float media;
};

void ordenar(struct aluno[5]);

float calcular_media(float, float);

int main()
{

	/*
	char nome[5][20];
	float notas[5][2];
	float media[5];
	*/

	struct aluno alunos[5];

	int i;

	for (i = 0; i < 5; i++)
	{
		printf("Aluno %i\n", i + 1);
		printf("Nome: ");
		fflush(stdin);
		scanf("%20[^\n]", alunos[i].nome);
		printf("N1: ");
		scanf("%f", &alunos[i].notas[0]);
		printf("N2: ");
		scanf("%f", &alunos[i].notas[1]);
	}

	ordenar(alunos);

	for (i = 0; i < 5; i++)
	{
		printf("%s %.2f %.2f\n", alunos[i].nome, alunos[i].notas[0], alunos[i].notas[1]);
		if (alunos[i].media < 7)
		{
			printf("Reprovado. Media %.2f\n", alunos[i].media);
		}
		else
		{
			printf("Aprovado. Media %.2f\n", alunos[i].media);
		}
	}

	return 0;
}

void ordenar(struct aluno a[5])
{
	int i, j;

	for (i = 0; i < 5; i++)
	{
		a[i].media = calcular_media(a[i].notas[0], a[i].notas[1]);
	}

	struct aluno aux_aluno;

	for (i = 0; i < 5; i++)
	{
		for (j = i; j < 5; j++)
		{
			if (a[i].media > a[j].media)
			{
				aux_aluno = a[i];
				a[i] = a[j];
				a[j] = aux_aluno;
			}
		}
	}
}

float calcular_media(float n1, float n2)
{
	return (n1 + n2) / 2;
}