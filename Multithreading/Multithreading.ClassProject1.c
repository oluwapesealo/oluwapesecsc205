#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

void *mythread(void *vargp)
{
	int *myid = (int *)vargp;
	char name[30];
	int matricno;
	{
	printf("What is the student's name : \n");
	fgets(name, sizeof(name), stdin);
	}
	{printf("What is the student's matric number : \n");
	scanf("%d", &matricno);
	}
	{
	printf("Thread ID : %d \n", *myid);
	printf("Matric number : %d \n", matricno);
	printf("Student name : ");
	puts(name);
	return 0;
	}}
int main(){
	int num;
	printf("How many students data do you want to enter : ");
	scanf("%d", &num);
	int a;
	pthread_t id;
	
	for(a = 1; a <= num; a++)
		pthread_create(&id,NULL,mythread,(void *)&id);
		pthread_join(id,NULL);
	pthread_exit(NULL);
	return 0;
}
