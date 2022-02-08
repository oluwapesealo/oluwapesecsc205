#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

size_t num;
int a;
int cha;
void *MCur(void *ID_1){
	int *theID_1 = (int *)ID_1;
	printf(" %d Multi-Currency  \n", *theID_1);
	}
void *UserExC(void *ID_2){
	int *theID_2 = (int *)ID_2;
	printf(" %d User Experience challenges \n", *theID_2);
	}
void *ContUpd(void *ID_3){
	int *theID_3 = (int *)ID_3;
	printf(" %d Continuous updates  \n", *theID_3);
	}
void *Paycha(void *ID_4){
	int *theID_4 = (int *)ID_4;
	printf(" %d Payment getaway challenges  \n", *theID_4);
	}
void *Charback(void *ID_5){
	int *theID_5 = (int *)ID_5;
	printf(" %d Chargeback  \n", *theID_5);
	}
void *Onlfr(void *ID_6){
	int *theID_6 = (int *)ID_6;
	printf(" %d Online fraud  \n", *theID_6);
	}
int main(){
	
	//for(a=0; a<num; a++){
	printf("Here are a list of the problems  :\n Multi-Currency(1)\n User Experience Challenges(2)\n Continuous Updates(3)\n Payment getwawy challenges(4)\n Chargeback(5)\n Online fraud(6)\n");
	printf("Please enter the number of operations to be monitored : ");
	scanf("%ld", &num);
	for(a=0; a<num; a++){
	printf("Please select the corresponding number to the problems you have: ");
	scanf("%d", &cha);
	if(cha == 1){
		pthread_t id1;
		pthread_create(&id1,NULL,MCur, (void *)&id1);	
		pthread_exit(NULL);
		}
	if(cha == 2){
		pthread_t id2;
		pthread_create(&id2,NULL,UserExC, (void *)&id2);	
		pthread_exit(NULL);
		}
	if(cha == 3){
		pthread_t id3;
		pthread_create(&id3,NULL,ContUpd, (void *)&id3);	
		pthread_exit(NULL);
		}
	if(cha == 4){
		pthread_t id4;
		pthread_create(&id4,NULL,Paycha, (void *)&id4);	
		pthread_exit(NULL);
		}
	if(cha == 5){
		pthread_t id5;
		pthread_create(&id5,NULL,Charback, (void *)&id5);	
		pthread_exit(NULL);
		}
	if (cha == 6);{
		pthread_t id6;
		pthread_create(&id6,NULL,Onlfr, (void *)&id6);	
		pthread_exit(NULL);}
		return 0;
		}
		}
		
