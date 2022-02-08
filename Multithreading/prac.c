#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>

int y =0;
int a = 2;
void* paystack(void* thr);

int main(){
	int ref;
	char op[100][100];
	printf("Enter the number of challenges; ");
	scanf("%d", &y);
	int actual_y = (y)* (y+1);
	pthread_t thread_id[actual_y];
	for(int i = 0; i<y; i++){
		printf("Enter operation: ");
		scanf("%99s", op[i]);
		for(int w=1; w<=y; w++){
			for(int d =0; d<(2*w); d++){
			 pthread_create(&thread_id[d],NULL, paystack,(void*) op [w-1]);
}
}
	for(int c =1; c<=y; c++){
		for(int d =0; d<(2*c); d++){
			pthread_join(thread_id[d], NULL);
}
}
} 
void* paystack(void* thr){
char* value= (char*) thr;
printf("Thread ID: %ld; \t operation: %s", pthread_self(), value);
}
}

