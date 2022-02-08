#include<stdio.h>
#include<pthread.h>
#include<sys/types.h>
#include<unistd.h>
void *childThread(void *cpros)
{
	int *pid = (int *)cpros;
	int *ppid = (int *)cpros;
}
int main(){
	int gap;
	pthread_t pid;
	pthread_t ppid;	
	fork();
	gap = fork();
	
	if(gap == 0){
		pthread_create(&pid, NULL, *childThread, (void *) &pid);
		pthread_exit(NULL);
	}
	else{
		pthread_create(&ppid, NULL, *childThread, (void *) &ppid);
		pthread_exit(NULL);
	}

	
}
