/*#include<stdio.h>
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
	pthread_t id[4];
	int i;
	for(i=0; i<4; i++){
		pthread_join (id[i],NULL);		
	}
	return 0;
	}*/
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
	pthread_t id[num];
	//size_t n;
	for(a=0; a<num; a++){
		pthread_create(&id[num],NULL,&mythread, (void *)&id);
	//	pthread_join(id[num],NULL);
		}
	pthread_exit(NULL);
	return 0;
}

