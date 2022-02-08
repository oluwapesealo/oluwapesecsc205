#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

size_t num;
char nameofop[30];
int a;
int loop;
int i;
int n;
int d;	
void* mythread(void* body){
		
	printf("Thread ID : %ld, Name of operation : %s \n",pthread_self(), 			nameofop);
	pthread_exit(NULL);
}
/*{
	int *theid = (int *)bloody;
	
	 }*/
int main(){
		int payst;
		printf("Here are a list of examples of problems (Please input in this format with the underscore) :\n Multi_Currency(1)\n User_Experience_Challenges(2)\n Continuous_Updates(3)\n Payment_getwawy_challenges(4)\n Chargeback(5)\n Online_fraud(6)\n");
		printf("How many operations to be monitored : ");
			scanf("%ld" , &num);
		int number = num * 2;
		pthread_t id[number];
		for(a=1; a<=num; a++){
			printf("Please enter the operation %d \n: ", a);
			scanf("%s", nameofop]);
			}
		for(n = 1; n <= num; n++){
			for(i = 0; i<(n*2); i++){
				pthread_create(&id[i],NULL,&mythread, (void *) nameofop[n-1]);
							}	
						}
	for(d = 1; d <= num; d++){
			for(i = 0; i<(d*2); i++){
				pthread_join(id[i],NULL);
				}
			}

}
