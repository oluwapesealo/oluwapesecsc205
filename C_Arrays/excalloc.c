#include<stdio.h>
#include<stdlib.h>
int main(){
	int* ptr;
	int num;
/*	printf("Enter number of elements: ");
	scanf("%d",&num);
	printf("\nEntered number of elements is %d\n", num);*/
	num = 5;
	printf("Enter number of elements: %d\n",num);
	ptr = (int*)calloc (num, sizeof(int));
	
	if(ptr == NULL){
		printf("Memory not allocated.\n");
		exit(0);
	}
	else
	{
		printf("Memory successfully allocated using calloc.\n");
		for(int i = 0; i<num; i++)
		{
			ptr[i] = i+1;   
			}
		
		printf("The elements of the array are: \n");
		for(int i = 0; i<num; i++)
		{
			printf("%d,\t", ptr[i]);
			}
		}
		return 0;
	}
