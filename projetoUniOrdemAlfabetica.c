#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void troca(char *previous, char *next)
{
    char temp[200];
    strcpy(temp, previous);
    strcpy(previous, next);
    strcpy(next, temp);
}

void bubbleSort(char empregados[][200], int n)
{
    int i, j;
    for (i=0; i<n-1; i++)
    {
        for (j=0; j<n-i-1; j++)
        {
            if (strcmp(empregados[j], empregados[j + 1])>0)
            {
                troca(empregados[j], empregados[j + 1]);
            }
        }
    }
}

int main()
{
    int N, i;
    printf("Introduza o numero de empregados: ");
    scanf("%d", &N);
    
    char empregados[N][200];
    
    for (i = 0; i < N; i++)
    {
        printf("Introduza o nome dos empregados: ");
        scanf("%s", empregados[i]);
    }

    bubbleSort(empregados, N);
    
    printf("\nLista de empregados:\n");
    for (i = 0; i < N; i++)
    {
        printf("Empregado numero %d: %s\n", i + 1, empregados[i]);
    }

    getch();
    return 0;
}
