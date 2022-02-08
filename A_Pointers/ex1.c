#include<stdio.h>
int main(){
	int ps2= 10;
	int *pss2;
	pss2 = &ps2;
	char xbox[10] ="abc";
	char *xbbox;
	xbbox = &xbox;
	
	printf("Address of ps2 :  %p\n and %d\n", &ps2, *pss2 );
	printf("Address of xbox : %p\n and %c\n", &xbox, *xbbox);
	return 0;
}
