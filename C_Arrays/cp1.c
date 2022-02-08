#include<stdio.h>
#include<stdlib.h>
int main(){
	float sum[2][3];
	float x[2][3] =
		{ {667, 233.5 , 183.4}, {422, 515, 335}};	
	
	float y[2][3] =
		{ {100, 245.5 , 333}, {151.6, 312, 578.8}};
	for(int i = 0; i<2; ++i)
	{
		for(int j = 0; j<3; ++j)
		{
			sum[i][j]=x[i][j]+y[i][j];
			printf("%f\t",sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}	
		
