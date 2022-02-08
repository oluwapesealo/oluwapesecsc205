#include <stdio.h>
#include <stdlib.h>
int main(){
    int ap,p=1,c;
    printf("How many applicants: ");
    scanf("%d",&ap);
    int* ptr;
    
         ptr = (int*)malloc(ap*sizeof(int));

    
    for(int j=0;j<ap;j++){
        printf("Years of experience of applicant %d: ",p);
        scanf("%d",&ptr[j]);
        ++p;
    }
int max = ptr[0];
    for(int i=0;i<ap;i++){
      if(max<ptr[i]){
        max = ptr[i];
        c=i+1;
      }
    }
 printf("The maximum year of experience of is : %d by applicant %d.\n",max,c);


}
