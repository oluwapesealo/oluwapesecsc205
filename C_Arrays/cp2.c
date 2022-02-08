#include<stdio.h>
#include<stdlib.h>

int main(){
	int cand,c,l=1;
	printf("Please enter number of candidates");
	scanf("%d",&cand);
	
	int* ptr;
	ptr = (int*) malloc(cand*sizeof(int));
	 
	for(int i = 0; i<cand; i++)
		{
		//printf("Please enter Last name");
		//scanf("%s",&lname);
		printf("\nHow many years of experience do you have candidate %d?  ", l);
		scanf("%d",&ptr[i]);
		printf("\nThank you, Next please.");
		++l;
		}
	int max = ptr[0];
    for(int j=0;j<cand;j++){
      if(max<ptr[j]){
        max = ptr[j];
         c=j+1;
        }
       }
       printf("\nThe maximum year of experience of is : %d by applicant %d.\n",max,c);
     }
		
		
