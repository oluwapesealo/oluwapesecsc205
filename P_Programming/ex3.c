#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

void folklore(){
	int queue=15,  stack = 25, map = 25, tree = 30, x,k;
	x = ((stack <= map)&&(tree>queue));
	k = ((map==queue)||(stack>tree));
	if(fork() == 0)
		printf("xProcess = %d\n", x);
	else
		printf("kProcess = %d\n", k);
	}

int main(){
folklore();
return 0;
}
