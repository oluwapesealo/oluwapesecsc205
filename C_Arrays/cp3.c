#include<stdio.h>
#include<stdlib.h>
int main(){
	char lname[30];
	char job[50];
	int yrs;
	int x[7][5] = { {"Public_Servant"},{"Office_Administrator"},{"Academic"},{"Lawyer"},{"Teacher"},
			 {"APS 1-2"},{"Intern"},{""},{"Paralegal"},{"Placement"},
			  {"APS 3-5"},{"Administrator"},{"Research_Assistant"},{"Junior_Associate"},{"Classroom_Teacher"},
			   {"APS 5-8"},{"Senior_Administrator"},{"PhD_Candidate"},{"Associate"}{"Snr_Teacher"} };
	printf("Wellcome to th Gocernment APS System\n");
	printf("Please enter your Last Name : \n");
	scanf("%c",&lname);
	printf("Please enter your occupation separated by an underscore : \n");
	scanf("%c",&job);
	printf("Please enter your number of years of work : \n");
	scanf("%d", &yrs);
	
	
	
