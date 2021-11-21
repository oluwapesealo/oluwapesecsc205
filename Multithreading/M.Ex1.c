#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

// A normal C function that is executed as a thread
// when its name is specified in pthread_create

void *myFirstThread()
{
	sleep(0);
	printf("I am a pese thread\n");
	return NULL;
}
int main()
{
	pthread_t thread_id;
	printf("Before Thread Execution\n");
	pthread_create(&thread_id, NULL, myFirstThread, NULL);
	pthread_join(thread_id, NULL);
	printf("After Thread Execution\n");
	exit(78);
}
