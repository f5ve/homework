#include "uhead.h"

int usum(int* array, int size)
{
	int sum = 0;
	int i;

	for(i = 0; i < size; i++)
	{
		sum += array[i];
	}

	return sum;
}

void urand(int *array, int n)
{
	int i, j;

	srand((int)time(0));
	for(i = 0; i < n; i++)
	{
		array[i] = 1 + (int)(100.0 * rand() / (RAND_MAX+1.0));
	}

	return;
}

void show(int* array, int size)
{
	int i;

	for(i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n\n");

	return;
}






