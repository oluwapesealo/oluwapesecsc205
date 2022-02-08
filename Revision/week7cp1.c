#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<pthread.h>

void *childThread(void* args)
{
	printf("The child process created this thread\n");
	return NULL;
	}
int main(){
	int gap;
	pthread_t pid;
	printf("Before Process Created\n");
	fork();
	printf("After process Created\n");
	gap =pthread_create(&pid,NULL,&childThread,NULL);
	
	if(gap==0){
		printf("Child process before thread creation\n");
		pthread_create(&pid,NULL,&childThread,NULL);
		printf("Child process after thread creation\n");
	}
	else{
		printf("Parent process exist\n");
	}
	return 0;
	}
	
