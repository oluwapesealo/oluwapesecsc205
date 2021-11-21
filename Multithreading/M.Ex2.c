#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

// thread function definition//
void *threadFunction(void* args)
{
	if(9)
	{
		printf("I am pese's threadFunction.\n");
	}
}
int main()
{
	/*creating thread id*/
	pthread_t id;
	int ret;
	//creating thread//
	ret = pthread_create(&id, NULL, &threadFunction, NULL);
	if(ret==0){
		printf("Thread created successfully.\n");
		pthread_create(&id, NULL, &threadFunction, NULL);
	}
	else{
		printf("Thread not created.\n");
		return 0; //return from main//
	}
	
	return 0;
	
}
