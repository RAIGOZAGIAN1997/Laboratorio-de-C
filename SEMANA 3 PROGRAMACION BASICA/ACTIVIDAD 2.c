#include <stdio.h>
#include <math.h>

int main (){
	int votostotal= 16520;
	float pan = votostotal*.40;
	float pri = votostotal*.30;
	float pt = votostotal*.15;
	float ind = votostotal*.10;
	float otros = votostotal*10;
	
	
	printf("Total de votos: %d\n",votostotal);
	printf("Partido                             Votos \n");
	printf("-------                             ----- \n");
	printf("PAN                                 %f\n",pan);
	printf("PRI                                 %f\n",pri);
	printf("PT                                  %f\n",pt);
	printf("INDEPENDIENTE                       %f\n",ind);
	printf("OTROS                               %f\n",otros);
	
	system("pause");
	return 0;
	
	
	
	
	
	
	
	
	
	
}
