#include <stdio.h>

int main(){

	int marks [10], i, n, sum = 0, average;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	for(i=1; i<=n; ++i)
	{
		printf("Enter number %d: ", i);
		scanf("%d", &marks[i]);
		
		sum+= marks[i];
	}	
	average = sum/n;
	printf("Average = %d \n", average);
	
	return 0;
}
