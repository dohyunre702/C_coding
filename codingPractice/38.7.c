#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*
int main(void)
{
	int num;
	scanf("%d", &num); 
	
	int** numPtr = malloc(sizeof(int*) * num);

	for (int i = 0; i < num; i++)
		numPtr[i] = malloc(sizeof(int) * num);

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
			if (i == j) printf("%d ", 1);
			else printf("%d ", 0);
		printf("\n");
	}

	for (int i = 0; i < num; i++)
	{
		free(numPtr[i]);
	}

	free(numPtr);

	return 0;
}
*/