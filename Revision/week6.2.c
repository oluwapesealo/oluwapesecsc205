#include<stdio.h>
int main(){
	int num;
	int mul;
	printf("Enter the value of n : ");
	scanf("%d",&num);
	printf("Multiplication table from 1 to %d\n", num);
	for(int i=1;i<=12;i++){
		for(int j=1; j<=num; j++){
			mul = i * j;
			printf("%d\t", mul);
			}
		printf("\n");
		}
	return 0;
	}
