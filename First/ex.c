#include<stdio.h>

int main(){
	int num, i= 0;
	char letters[] = {"ABCDEFGHIJKLMNOP"};
	char letter , l1,l2,l3,l4,l5,l6;
	printf("Enter a character between A and J :");
	scanf("%c", &letter);
	
	num = 10;
	for(i=0; i<num; i++){
		if(letters[i]==letter){
			l1=letters[i+1];
			l2=letters[i+2];
			l3=letters[i+3];
			l4=letters[i+4];
			l5=letters[i+5];
			l6=letters[i+6];
			}
		}
	printf("The next 6 charcters are %c %c %c %c %c %c", l1,l2,l3,l4,l5,l6);
	return 0;
	}
