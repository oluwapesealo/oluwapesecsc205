#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

int num;
void *mythread(void *vargp)
{
	int *myid = (int *)vargp;
	char fname[14];
	char lname[14];
	int matricno;
	int num;
	int a;
	printf("How many students data do you want to enter : ");
	scanf("%d", &num);
	for(int a = 0; a < num; a++){
		printf("What is the student's first name : \n");
		scanf("%s", fname);
		printf("What is the student's last name : \n");
		scanf("%s", lname);
		//fgets(name, sizeof(name), stdin);
		printf("What is the student's matric number : \n");
		scanf("%d", &matricno);
		printf("Student name : %s %s \n", fname, lname);
		printf("Thread ID : %d \n", *myid++ );
		printf("Matric number : %d \n", matricno);
		//printf("Student name : ");
		//puts(name);
	}}
int main(){
	int a;
	pthread_t id;
	pthread_create(&id,NULL,mythread,(void *)&id);
	pthread_join(id,NULL);
	pthread_exit(NULL);
	return 0;
}
