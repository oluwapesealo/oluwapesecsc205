#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

size_t num;
void *mythread(void *vargp)
{
	int *theid = (int *)vargp;
	char nameofop[20];
	int a;
	printf("How many operations to be monitored : ");
	scanf("%ld" , &num);
	for(a=0; a<num; a++){
		printf("Please enter the operation \n: ");
		scanf("%s", nameofop);
		printf("Thread ID : %d, Name of operation : %s \n",*theid, 			nameofop);
	 }
	 int main(){
	pthread_t id;
	pthread_create(&id,NULL,mythread, (void *)&id);
	pthread_join(id,NULL);		
	pthread_exit(NULL);
	return 0;
}
}

