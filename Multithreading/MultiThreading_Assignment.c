#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
void *mythread(void *vargp)
{
	int *theid = (int *)vargp;
	char nameofop[20];
	printf("Please enter the operation \n: ");
	scanf("%s", nameofop);
	printf("Thread ID : %d, Name of operation : %s \n",*theid, nameofop);
	 }
int main(){

	size_t num;
	printf("How many operations to be monitored : ");
	scanf("%ld" , &num);
	int a;
	pthread_t id;
	//size_t n;
	for(a=0; a<num; a++){
	//	for(n=0; n<num; n++)
		pthread_create(&id,NULL,mythread, (void *)&id);
		//pthread_join(id,NULL);
		}
	pthread_exit(NULL);
	return 0;
}

