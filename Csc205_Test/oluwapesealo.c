#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<pthread.h>
#include<strings.h>

void *Voterx(void *args){
char fname[50];
char lname[50];
char email[50];
char dep[50];
char soo[50];
char crep[50];
int level;
float cgpa;
	printf("\t\t\tVoterX\n");
	printf("Welcome to VoterX\n");
	printf("Please provide the following details\n");
	printf("\n First Name : ");
	scanf("%s", fname);
	printf("\nLast Name : ");
	scanf("%s", lname);
	printf("\nEmail : ");
	scanf("%s", email);
	printf("\nDepartment : ");
	scanf("%s", dep);
	printf("\nState of Origin : ");
	scanf("%s", soo);
	printf("\nOkay now please answer the following: ");
	printf("\nAre you a Class Representative?");
	scanf("%s", crep);
	printf("\nWhat level are you? : ");
	scanf("%d",&level);
	printf("What is your current CGPA? : ");
	scanf("%f",&cgpa);
	if (crep == "Yes"||crep =="YES"||crep =="yes"||crep =="YEs"||crep == "yES" && level==300||level==200||level==400 && cgpa > 4.0){
		printf("%s %s\n%s\n%s\n%s State\nYou can vote.",fname,lname,email,dep,soo);
		}
	else{
		printf("Sorry you are not eligible to vote.\n");
		}
	return NULL;
}
void *Pubtaks(void* args){
char pname[50];
int papers;	
	Pubtaks:	
	printf("\t\t\tPubtaks\n");
	printf("Welcome to Pubtaks\n");
	printf("Please enter your last name \n");
	printf("\nName : ");
	scanf("%s", pname);
	printf("\nHow many papers have you published? ");
	scanf("%d",&papers);
	if (papers<3){
		printf("\nMr %s,your incentive is N100,000",pname);
		}
	else if (3<=papers<=5){
		printf("\nMr %s,your incentive is N500,000",pname);
		}
	else if (6<=papers<10){
		printf("\nMr %s,your incentive is N800,000",pname);
		}
	else if (papers>=10){
		printf("\nMr %s,your incentive is N1,000,000",pname);
		}
	return NULL;
		}

int main(){
int opt;
int p,i,a;
	pthread_t voterx;
	pthread_t pubtaks;
start:
printf("For VoterX, please press 1.\n For PubTaks, please press 2.");
scanf("%d",&opt);

if(opt == 1){
	 pthread_create(&voterx, NULL, &Voterx,NULL);
	 pthread_exit(NULL);
	 }	
else if(opt == 2){
	 pthread_create(&pubtaks, NULL, &Pubtaks,NULL);
	 pthread_exit(NULL);
	}
	else{
		printf("Invalid entry.\n");
		goto start;
	return 0;	
	}
	}
