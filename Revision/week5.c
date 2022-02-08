#include<stdio.h>
int main(){
	int total =0;
	int num;
	int age;
	printf("How many users do you want to input?\n ");
	scanf("%d",&num);
	for(int i=0; i<num; i++){
	printf("What is user's age?\n");
	scanf("%d",&age);
	total += age;
	}
	
	printf("\nThe total is %d", total );
	}

