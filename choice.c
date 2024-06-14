#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
	srand(time(NULL));
	for(int i=0; argv[i]; i++)
		argv[i] = argv[i+1];
	printf("%s\n", argv[rand()%(argc-1)]);
	return 0;
}
