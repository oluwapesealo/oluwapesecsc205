#include<stdio.h>

int main(){
	int marks[10],num;
	float sum=0;
	printf("Enter number of elements: ");
	scanf("%d",&num);
	
	for(int i=1; i<=num; i++)
	{	printf("\nEnter number %d : ",i);
		scanf("%d",&marks[i]);
		sum += marks[i];
	}
	float average =sum/num;
	printf("The average is %f", average);
	return 0;
}
