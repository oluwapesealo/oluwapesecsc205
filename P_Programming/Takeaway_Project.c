#include<stdio.h>
#include<pthread.h>
#include<sys/types.h>
#include<unistd.h>
#include<string>
char gender[10];
char region[20];
char voting_booth;
void *childprocess (*cpros){
	printf("The thread ID is %d\n", tid);
	printf(" %s ", gender);
	printf(" %s ", region);
	printf(" %s ", voting_booth);
}
int main(){
	int age;
	printf("Enter age : ");
	scanf("%d", &age);
	if((age<18)||(age>75)){
		printf("You do not meet the requirements for this vote");
	else{
	
