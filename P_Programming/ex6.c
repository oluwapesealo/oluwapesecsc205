#include<stdio.h>
#include<pthread.h>
#include<sys/types.h>
#include<unistd.h>
void *childThread(void *args)
{
	printf("The child process created this thread\n");
	return NULL;
	
	}
int main(){
	int gap;
	pthread_t pid;
	printf("Before process created\n");
	fork();
	printf("After process created");
	gap = fork();
	
	if(gap == 0){
		printf("Child process before thread creation\n");
		pthread_create(&pid, NULL, childThread, NULL);
		printf("Child process after creation\n");
	}
	else{
		printf("Parent process exist\n");
		}
	return 0;
	
}
