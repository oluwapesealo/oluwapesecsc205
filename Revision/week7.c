#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main(){
	/*fork();
	fork();
	fork();
	printf("CSC 205: Operating System I\n");
	printf("\n");*/
	if(fork()==0)
		if(fork())
			printf("Job well done\n");
	return 0;
	}
