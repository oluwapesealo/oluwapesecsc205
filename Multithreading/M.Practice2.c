#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

int grade = 80;
void *mythread(void *vargp)
{
	int *myid = (int *) vargp;
	static int age = 17;
	//++age; ++grade;
	printf("Thread ID : %d, Age : %d, Grade : %d\n", *myid, ++age, ++grade);
}
int main(){
	int i;
	pthread_t id;
	for(i = 0; i < 5; i++)
		pthread_create(&id,NULL,mythread,(void *)&id);
		pthread_join(id,NULL);
	
	pthread_exit(NULL);
	return 0;
	
}
