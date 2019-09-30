#include "uhead.h"

int main()
{
	int array[LENGTH];
	struct arg a;

	urand(array, LENGTH);
	show(array, LENGTH);

	writedate(array, LENGTH, "org.txt");
	
	sysbsort(array, LENGTH);
	show(array, LENGTH);
	
	sysqsort(array, LENGTH);
	show(array, LENGTH);

	writedate(array, LENGTH, "sort.txt");
	
	a = operate(array, LENGTH);
	printf("%d\t%f\n", a.sum, a.avg);

	showfile("org.txt");
	showfile("sort.txt");

	return 0;
}

