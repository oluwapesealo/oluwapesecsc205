#include<stdio.h>
int main(){
	char *efcc[6][4] ={"S/N","Name of Commisioner","Ministry","\tGeopolitical Zone","1","Aigbogun Alamba Daudu","Internal Affairs","South West","2","Murtala Afeez Bendu","Justice","\tNorth East","3","Okorocha Calistus Ogbona","Defense","\tSouth South","4","Adewale Jimoh Akanbi","Power and Steel","\tSouth West","5","Osazuwa Faith Etieye","Petroleum","\tSouth East"};
	for (int n=0; n<6; n++)
	{
		printf("\n");
		for(int i =0; i<4; i++)
		{
			 printf("%s\t", efcc[n][i]);
			}
		}
	return 0;
}
