#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

size_t num;
char nameofop[30];
int a;
int b;
int i;
int n;
void* mythread(void* body){
		
	printf("Thread ID : %ld, Name of operation : %s \n",pthread_self(), 			nameofop);
	pthread_exit(NULL);
}
/*{
	int *theid = (int *)body;
	
	 }*/
int main(){
		printf("Here are a list of examples of problems (Please input in this format with the underscore) :\n Multi_Currency(1)\n User_Experience_Challenges(2)\n Continuous_Updates(3)\n Payment_getwawy_challenges(4)\n Chargeback(5)\n Online_fraud(6)\n");
		printf("How many operations to be monitored : ");
			scanf("%ld" , &num);
		for(a=1; a<=num; a++){
			printf("Please enter the operation %d \n: ", a);
			scanf("%s", nameofop);
			int number = num * (a);
			pthread_t id[number];
			
		for(n = 1; n <= number; n++){
				pthread_create(&id[i],NULL,&mythread, (void *) &number);}
			for(b=1;b<= number; b++){
			pthread_join(id[i],NULL);
				//pthread_detach;
				}
			

}
}
