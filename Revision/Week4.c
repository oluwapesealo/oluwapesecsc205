#include<stdio.h>
int main(){
	
	int num;
	int age;
	printf("How many users do you want to input? ");
	scanf("%d",&num);
	for(int i=0; i<num; i++){
	printf("What is user's age?");
	scanf("%d",&age);
	if (age>18){
	printf("You can vote");
	}
	else
		printf("You can not vote");
	}
	}
