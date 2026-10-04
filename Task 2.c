#include <stdio.h>

int main (){
	
	int n=0,totalmarks,marks[100],cont=1,avg;
	
	printf("STUDENT MARKS CALCULARTOR (Enter -1 To Stop)");
	
	for (int i=1; i<=101 ; i++){
		printf("Marks Of Student %d: ", i);
		scanf("%d", &marks[i]);
		
		if (marks [i] > && marks [i] < 100){
			totalmarks+=marks[i];
			n++;
		}
		else{
			break;
		}
	}
	
	avg=(totalmarks)/n;
	
	printf("The Number Of Students Is %d", n);
	printf("The Total Marks is %d", totalmarks);
	printf("The Avg Of Total Marks Entered Is %d", avg);
	
	return 0;
}
