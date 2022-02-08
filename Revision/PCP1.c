#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <pthread.h>

void *childThread(void* args)
{	
	int mypid,myppid;
	mypid = getpid();
	myppid = getppid();
	printf("The child process ID is %d\n", mypid);
	printf("The parent process ID is %d\n", myppid);
	return NULL;
}

int main() {
int p,i,a;
	pthread_t pid;
	printf("Enter the number of processes you want:\n ");
	scanf("%d",&p);
	
	for(i=0;i<p;i++)
	{
	a=fork();
	if (a==0){
	 pthread_create(&pid, NULL, &childThread, NULL);
	 pthread_join(pid,NULL);
	 }
	 }
	 pthread_exit(NULL);
}
	
	
