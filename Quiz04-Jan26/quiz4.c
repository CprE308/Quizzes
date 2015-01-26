#include <stdio.h>
#include <unistd.h>

int main()
{
	fork();
	if(fork()){
		printf(".");
	}
	printf(".");
	return 0;
}
