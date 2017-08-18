#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	char file[200];
	int i;
	for(i = 1; i < argc; i++)
	{
		sprintf(file, "gcc -S -fno-asynchronous-unwind-tables -O0 %s", argv[i]);
		system(file);
	}
	return 0;
}
